//
// Created by 20180 on 2019/11/20.
//

#include "linked_list.h"

#include <utility>

bool linked_list::is_correct(const string& str) {
    for (char i : str) {
        if (i >= '0' && i <= '9')
            continue;
        return false;
    }
    return true;
}

linked_list::linked_list() {
    length = 0;
    str_length = 0;
    low = new node();
}

linked_list::linked_list(string& str) {
    if (is_correct(str)) {
        str = remove_zero(str);//除去string首部的0
        str_length = str.length(); //大整数位数
        length = 0; //结点个数
        int len = str.length();//获得string长度
        low = new node();
        node* current = low;

        //当剩余长度大于3时，取3作为结点位数构造结点
        while (len >= VAL_LEN) {
            current->data = stoi(str.substr(len - VAL_LEN, VAL_LEN));
            node* new_node = new node();
            current->next = new_node;
            current = current->next;
            length++;
            len -= VAL_LEN;
        }

        //将剩余位数添加到最高位
        if (len > 0) {
            current->data = stoi(str.substr(0, len));
            length++;
        }

    }
}
// 该函数无bug
string linked_list::remove_zero(string str) {
    string new_str = std::move(str);
    if (new_str.length() > 1) {
        bool ok = false;
        int index = 0;
        while (!ok) {
            if (new_str[index] != '0')
                ok = true;
            else {
                new_str.erase(index,1);
            }
        }
    }

    return new_str;
}

node* linked_list::operator[](int index) {
    node* res = low;
    for (int i = 0; i < index; ++i) {
        res = res->next;
    }
    return res;
}

void linked_list::push_back(int num) {
    if (length == 0) {
        low->data = num;
        length++;
    } else {
        node* current = low;
        for (int i = 1; i < length; ++i) {
            current = current->next;
        }

        node* new_node = new node(num);
        current->next = new_node;
        length++;
    }

}

void linked_list::pop_back() {
    delete this->operator[](length - 1);
    this->operator[](length - 2)->next = nullptr;
    length--;
}

void linked_list::push(int num) {
    if (length == 0) {
        low->data = num;
        length++;
    } else {
        node* new_node = new node(num);
        new_node->next = low;
        low = new_node;
        length++;
    }
}