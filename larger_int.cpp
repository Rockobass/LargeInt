//
// Created by 20180 on 2019/11/20.
//
#include "large_int.h"

largeInt::largeInt(string str) {
    data = linked_list(str);
}

largeInt::largeInt() {
    data = linked_list();
}

void largeInt::remove_zero() {
    int index = data.length;
    while (--index >= 1) {
        if (data[index]->data > 0) break;

        data.pop_back();
    }
}

ostream& operator<<(ostream &out, largeInt &num) {
    out<<num.data[num.data.length-1]->data;
    for (int i = num.data.length-2; i >= 0; i--) {
        int number = num.data[i]->data;
        if (number / 10 == 0) {
            out << "00" << number;
        } else if (number / 100 == 0) {
            out << "0" << number;
        } else {
            out << number;
        }
    }
    return out;
}

bool largeInt::operator>(largeInt &num) {
    bool result = true;

    if (data.str_length < num.data.str_length)
        result = false;
    else if (data.str_length == num.data.str_length) {
        for (int i = data.length - 1; i >= 0; i--) {
            if (data[i]->data < num.data[i]->data) {
                result = false;
                break;
            } else if (data[i]->data > num.data[i]->data) {
                break;
            } else{

            }
        }
    }

    if (*this == num) result = false;

    return result;
}

bool largeInt::operator==(largeInt &num) {
    bool eq = true;
    if (data.str_length != num.data.str_length) {
        eq = false;
        return eq;
    } else {
        for (int i = 0; i < data.length; ++i) {
            if (data[i]->data != num.data[i]->data) {
                eq = false;
                break;
            }
        }
        return eq;
    }
}

largeInt largeInt::operator+(largeInt &ar) {
    int carry = 0; //进位，0或1
    int min_len = (*this > ar) ? ar.data.length : data.length;
    int max_len = (*this > ar) ? data.length : ar.data.length;
    largeInt& extra = (*this > ar) ? (*this) : ar; //取位数较多的大整数
    largeInt result = largeInt();
    int value = 0;

    for (int i = 0; i < min_len; ++i) {
        value = data[i]->data + ar.data[i]->data + carry;

        if (value >= MAX_VAL) {
            carry = 1;
            result.data.push_back(value - MAX_VAL);
        } else {
            carry = 0;
            result.data.push_back(value);
        }
    }

    for (int j = min_len; j < max_len; ++j) {
        value = extra.data[j]->data + carry;

        if (value >= MAX_VAL) {
            result.data.push_back(value-MAX_VAL);
            carry = 1;
        } else {
            result.data.push_back(value);
            carry = 0;
        }
    }

    result.data.str_length = extra.data.str_length;

    if (carry > 0) {
        result.data.str_length += 1;
        result.data.push_back(carry);
    }

    return result;
}

largeInt largeInt::operator-(largeInt &num) {
    int min_len = (*this > num) ? num.data.length : data.length;
    int max_len = (*this > num) ? data.length : num.data.length;
    largeInt& big = (*this > num) ? (*this) : num; //取位数较多的大整数
    largeInt& small = (*this > num) ? num : *this;
    largeInt result = largeInt();
    int value = 0; //差
    int carry = 0; //借位

    for (int i = 0; i < min_len; ++i) {
        if (big.data[i]->data < small.data[i]->data + carry) {
            value = big.data[i]->data + MAX_VAL - small.data[i]->data - carry;
            carry = 1;
        } else {
            value = big.data[i]->data - small.data[i]->data - carry;
            carry = 0;
        }

        result.data.push_back(value);
    }

    for (int j = min_len; j < max_len; ++j) {
        if (big.data[j]->data < carry) {
            value = big.data[j]->data + MAX_VAL - carry;
            carry = 1;
        } else {
            value = big.data[j]->data - carry;
            carry = 0;
        }

        result.data.push_back(value);
    }

    result.remove_zero();

    if (!(*this > num)) {
        result.data[result.data.length-1]->data = -result.data[result.data.length-1]->data;
    }

    int tem = result.data[result.data.length - 1]->data;
    if (tem < 10) result.data.str_length = (result.data.length - 1) * 3 + 1;
    else if (tem >= 10 && tem < 100) result.data.str_length = (result.data.length - 1) * 3 + 2;
    else result.data.str_length = (result.data.length - 1) * 3 + 3;

    return result;
}

largeInt largeInt::operator*(largeInt &num) {
    largeInt& small = (*this > num) ? num : *this;
    largeInt& big = (*this > num) ? *this : num;
    int min_len = small.data.length;//位数较小数的结点个数
    int max_len = big.data.length;//位数较大数的结点个数
    int value;//乘积
    int carry;//进位
    largeInt result = largeInt("0");

    for (int i = 0; i < min_len; i++) {
        largeInt temp;
        carry = 0;

        for (int j = 0; j < i; j++)
            temp.data.push_back(0); //补零操作

        for (int k = 0; k < max_len; ++k) {
            value = small.data[i]->data * big.data[k]->data + carry;
            temp.data.push_back(value % MAX_VAL);
            carry = value / MAX_VAL;
        }

        if (carry > 0) temp.data.push_back(carry);

        int tem = temp.data[temp.data.length-1]->data;
        if (tem < 10) temp.data.str_length = (temp.data.length - 1) * 3 + 1;
        else if (tem >= 10 && tem < 100) temp.data.str_length = (temp.data.length - 1) * 3 + 2;
        else temp.data.str_length = (temp.data.length - 1) * 3 + 3;

        result = result + temp;
    }

    return result;
}

largeInt largeInt::operator/(largeInt &num) {
    if (!(*this > num) && !(*this == num)) return largeInt("0");
    else if (*this == num) return largeInt("1");
    else {
        largeInt result = largeInt("0");//定义可参与大整数运算的0
        largeInt self_temp = *this; //获得自身
        largeInt ten = largeInt("10");//可参与大整数运算的10
        largeInt one = largeInt("1");//可参与大整数运算的1

        while (self_temp > num || self_temp == num) {
            largeInt div_temp = num;
            largeInt result_sec;
            int count = 0; //用于统计减去除数的个数
            int long_len = self_temp.data.str_length;//被除数位数
            int short_len = div_temp.data.str_length;//除数位数
            int exp = long_len - short_len - 1; //两数相差位数减一

            if (exp < 0) exp = 0;
            //以下两个for循环将除数扩大了10的n次倍
            for (int i = 0; i < exp/3; ++i) {
                div_temp.data.push(0);
                div_temp.data.str_length += 3;
            }
            for (int j = 0; j < exp % 3; ++j) {
                div_temp = div_temp * ten;
            }
            //通过循环被除数多次减去扩大后的除数
            while (self_temp > div_temp || self_temp == div_temp) {
                self_temp = self_temp - div_temp;
                count++;
            }
            for (int k = 0; k < exp % 3; ++k) {
                count *= 10;
            }
            for (int i = 0; i < exp / 3; ++i) {
                result_sec.data.push_back(0);
                result_sec.data.str_length += 3;
            }
            result_sec.data.push_back(count);
            result_sec.data.str_length += exp % 3;
            result_sec.data.str_length += 1;
            result = result + result_sec;
        }

        //用于校准商值
        while (self_temp > num) {
            self_temp = self_temp - num;
            result = result + one;
        }

        result.remove_zero();
        return result;
    }
}

largeInt largeInt::operator%(int n) {
    if (data.str_length < n) {
        return *this;
    } else {
        int index = n / 3;
        largeInt result;

        for (int i = 0; i < index; ++i) {
            result.data.push_back(data[i]->data);
        }

        int head = n % 3;
        int number = 0;

        switch (head){
            case 0: number = 0;
                break;
            case 1: number = data[index]->data % 10;
                break;
            case 2: number = data[index]->data % 100;
                break;
            default: ;
        }
        result.data.push_back(number);
        result.remove_zero();
        if (number == 0) {
            result.data.str_length = n / 3 * 3;
        } else {
            result.data.str_length = head + n / 3 * 3;
        }

        return result;
    }
}

largeInt largeInt::exp_mode(largeInt &num, int modular) {
    largeInt zero = largeInt("0");
    largeInt two = largeInt("2");
    largeInt ans = largeInt("1");
    largeInt self = *this;
    largeInt exp = num;
    self = self % modular;

    while (exp > zero) {
        if (exp.data[0]->data % 2 == 1) {
            ans = ans * self;
            ans = ans % modular;
        }

        exp = exp / two;
        self = self * self;
        self = self % modular;
    }

    return ans;
}

