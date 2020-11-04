//
// Created by 20180 on 2019/11/19.
//

#ifndef C_NODE_H
#define C_NODE_H

class node{
public:
    node* next;
    int data;
    node(){
        data = NULL;
        next = nullptr;
    }
    explicit node(int num){
        data = num;
        next = nullptr;
    }
};

#endif //C_NODE_H
