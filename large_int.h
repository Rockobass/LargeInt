//
// Created by 20180 on 2019/11/20.
//
#include "linked_list.h"
#ifndef C_LARGE_INT_H
#define C_LARGE_INT_H
#define MAX_VAL 1000

class largeInt{
public:
    linked_list data;

    largeInt();
    explicit largeInt(string str);
    void remove_zero(); //去高位的零

    largeInt operator+(largeInt& ar);
    largeInt operator-(largeInt& num);
    largeInt operator*(largeInt& num);
    largeInt operator/(largeInt& num);
    largeInt operator%(int n);//取余10的n次方
    largeInt exp_mode(largeInt& num, int modular);//快速幂

    bool operator>(largeInt& num);
    bool operator==(largeInt& num);
    friend ostream& operator<<(ostream& out, largeInt& num);//重载流运算符输出大整数



};
#endif //C_LARGE_INT_H
