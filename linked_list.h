//
// Created by 20180 on 2019/11/19.
//
#include <iostream>
#include <string>
#include "node.h"
using namespace std;

#ifndef C_LINKED_LIST_H
#define C_LINKED_LIST_H

#define VAL_LEN 3 //每个结点最多存储的位数
class linked_list{
public:
    int str_length; //位数
    int length; //分组数
    node* low; //表头，存储最低位

    linked_list();//无参构造
    explicit linked_list(string& str);//传入string类型的构造

    void push(int num);//插入低位
    static bool is_correct(const string& str); //判断是否输入正确的大整数
    void push_back(int num); //插入高位
    void pop_back(); //用于除去高位的0，位数没有同步减去
    static string remove_zero(string str);//去首部的零
    node* operator[](int index);//重载[]运算符，便于访问index处的结点


};
#endif //C_LINKED_LIST_H
