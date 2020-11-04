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
    void remove_zero(); //ȥ��λ����

    largeInt operator+(largeInt& ar);
    largeInt operator-(largeInt& num);
    largeInt operator*(largeInt& num);
    largeInt operator/(largeInt& num);
    largeInt operator%(int n);//ȡ��10��n�η�
    largeInt exp_mode(largeInt& num, int modular);//������

    bool operator>(largeInt& num);
    bool operator==(largeInt& num);
    friend ostream& operator<<(ostream& out, largeInt& num);//��������������������



};
#endif //C_LARGE_INT_H
