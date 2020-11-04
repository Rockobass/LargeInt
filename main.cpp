#include <iostream>
#include <fstream>
#include <ctime>
#include "large_int.h"
using namespace std;


int main() {
    bool out1 = true;
    while (out1) {
        cout<<"1.加法运算"<<endl;
        cout<<"2.减法运算"<<endl;
        cout<<"3.乘法运算"<<endl;
        cout<<"4.除法运算"<<endl;
        cout<<"5.幂模运算"<<endl;
        cout<<"0.退出"<<endl;
        cout<<"请输入相应数字"<<endl;
        int con1;
        cin>>con1;
        switch (con1) {
            case 0: out1 = false;
                break;
            case 1: {
                int con2;
                cout<< "1.控制台输入" << endl;
                cout<< "2.文件输入" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a + b" << endl;
                        cout<< "请输入a：" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        cout<< "请输入b：" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 + l2;
                        cout<< "a + b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    case 2: {
                        ifstream ins;
                        ins.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        string a, b;
                        ins>>a;
                        ins>>b;
                        ins.close();

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 + l2;
                        cout<< "a + b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a + b =" << endl;
                        out<< result <<endl;
                        out<< "位数：" << result.data.str_length << endl;
                        out.close();

                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    default:
                        break;
                }
                break;
            }
            case 2: {
                int con2;
                cout<< "1.控制台输入" << endl;
                cout<< "2.文件输入" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a - b" << endl;
                        cout<< "请输入a：" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        cout<< "请输入b：" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 - l2;
                        cout<< "a - b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    case 2: {
                        ifstream ins;
                        ins.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        string a, b;
                        ins>>a;
                        ins>>b;
                        ins.close();

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 - l2;
                        cout<< "a - b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a - b =" << endl;
                        out<< result <<endl;
                        out<< "位数：" << result.data.str_length << endl;
                        out.close();

                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    default:
                        break;
                }
                break;
            }
            case 3: {
                int con2;
                cout<< "1.控制台输入" << endl;
                cout<< "2.文件输入" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a * b" << endl;
                        cout<< "请输入a：" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        cout<< "请输入b：" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        time_t before=time(nullptr);
                        cout<<before<<endl;
                        largeInt result = l1 * l2;
                        cout<< "a * b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        cout<< "输入任意数字返回" << endl;
                        time_t af=time(nullptr);
                        cout<<af<<endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    case 2: {
                        ifstream ins;
                        ins.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        string a, b;
                        ins>>a;
                        ins>>b;
                        ins.close();

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 * l2;
                        cout<< "a * b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a * b =" << endl;
                        out<< result <<endl;
                        out<< "位数：" << result.data.str_length << endl;
                        out.close();

                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    default:
                        break;
                }
                break;
            }
            case 4: {
                int con2;
                cout<< "1.控制台输入" << endl;
                cout<< "2.文件输入" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a / b" << endl;
                        cout<< "请输入a：" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        cout<< "请输入b：" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        if (b == "0") {
                            cout<< "除数不能为0" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 / l2;
                        cout<< "a / b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    case 2: {
                        ifstream ins;
                        ins.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        string a, b;
                        ins>>a;
                        ins>>b;
                        ins.close();

                        if (b == "0") {
                            ofstream out;
                            out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                            out<< "除数不能为0" << endl << endl;
                            out.close();
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 / l2;
                        cout<< "a / b =" << endl;
                        cout<< result <<endl;
                        cout<< "位数：" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a / b =" << endl;
                        out<< result <<endl;
                        out<< "位数：" << result.data.str_length << endl;
                        out.close();

                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    default:
                        break;
                }
                break;
            }
            case 5: {
                int con2;
                cout<< "1.控制台输入" << endl;
                cout<< "2.文件输入" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "(a ^ b) % (10 ^ n)" << endl;
                        cout<< "请输入a：" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        cout<< "请输入b：" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "输入格式错误, 重新进行选择" << endl << endl;
                            break;
                        }

                        int c;
                        cout<< "请输入n：" << endl;
                        cin >> c;

                        if (a == "0" && b == "0") {
                            cout<< "(a ^ b) % (10 ^ n) = " << endl << "1" << endl;
                            break;
                        }
                        time_t before=time(nullptr);
                        cout<<before<<endl;
                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1.exp_mode(l2,c);
                        cout<< "(a ^ b) % (10 ^ n) =" << endl;
                        cout<< result <<endl;
                        time_t after=time(nullptr);
                        cout<<after<<endl;
                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    case 2: {
                        ifstream ins;
                        ins.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        string a, b;
                        ins>>a;
                        ins>>b;
                        int n;
                        ins>>n;
                        ins.close();

                        if (a == "0" && b == "0") {
                            ofstream out;
                            out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                            out<< "(a ^ b) % (10 ^ n) = 1" << endl;
                            cout<< "(a ^ b) % (10 ^ n) = 1" << endl;
                            out.close();
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1.exp_mode(l2,n);
                        cout<< "(a ^ b) % (10 ^ n) =" << endl;
                        cout<< result <<endl;
                        cout<< "输入任意数字返回" << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "n = " << n << endl;
                        out<< "(a ^ b) % (10 ^ n) =" << endl;
                        out<< result <<endl;
                        out.close();

                        cout<< "输入任意数字返回" << endl;
                        string fake;
                        cin >> fake;
                        break;
                    }
                    default:
                        break;
                }
                break;
            }
            default:  break;
        }
    }
    return 0;
}

