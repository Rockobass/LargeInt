#include <iostream>
#include <fstream>
#include <ctime>
#include "large_int.h"
using namespace std;


int main() {
    bool out1 = true;
    while (out1) {
        cout<<"1.�ӷ�����"<<endl;
        cout<<"2.��������"<<endl;
        cout<<"3.�˷�����"<<endl;
        cout<<"4.��������"<<endl;
        cout<<"5.��ģ����"<<endl;
        cout<<"0.�˳�"<<endl;
        cout<<"��������Ӧ����"<<endl;
        int con1;
        cin>>con1;
        switch (con1) {
            case 0: out1 = false;
                break;
            case 1: {
                int con2;
                cout<< "1.����̨����" << endl;
                cout<< "2.�ļ�����" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a + b" << endl;
                        cout<< "������a��" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        cout<< "������b��" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 + l2;
                        cout<< "a + b =" << endl;
                        cout<< result <<endl;
                        cout<< "λ����" << result.data.str_length << endl;
                        cout<< "�����������ַ���" << endl;
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
                        cout<< "λ����" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a + b =" << endl;
                        out<< result <<endl;
                        out<< "λ����" << result.data.str_length << endl;
                        out.close();

                        cout<< "�����������ַ���" << endl;
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
                cout<< "1.����̨����" << endl;
                cout<< "2.�ļ�����" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a - b" << endl;
                        cout<< "������a��" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        cout<< "������b��" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 - l2;
                        cout<< "a - b =" << endl;
                        cout<< result <<endl;
                        cout<< "λ����" << result.data.str_length << endl;
                        cout<< "�����������ַ���" << endl;
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
                        cout<< "λ����" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a - b =" << endl;
                        out<< result <<endl;
                        out<< "λ����" << result.data.str_length << endl;
                        out.close();

                        cout<< "�����������ַ���" << endl;
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
                cout<< "1.����̨����" << endl;
                cout<< "2.�ļ�����" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a * b" << endl;
                        cout<< "������a��" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        cout<< "������b��" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        time_t before=time(nullptr);
                        cout<<before<<endl;
                        largeInt result = l1 * l2;
                        cout<< "a * b =" << endl;
                        cout<< result <<endl;
                        cout<< "λ����" << result.data.str_length << endl;
                        cout<< "�����������ַ���" << endl;
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
                        cout<< "λ����" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a * b =" << endl;
                        out<< result <<endl;
                        out<< "λ����" << result.data.str_length << endl;
                        out.close();

                        cout<< "�����������ַ���" << endl;
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
                cout<< "1.����̨����" << endl;
                cout<< "2.�ļ�����" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "a / b" << endl;
                        cout<< "������a��" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        cout<< "������b��" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        if (b == "0") {
                            cout<< "��������Ϊ0" << endl << endl;
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 / l2;
                        cout<< "a / b =" << endl;
                        cout<< result <<endl;
                        cout<< "λ����" << result.data.str_length << endl;
                        cout<< "�����������ַ���" << endl;
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
                            out<< "��������Ϊ0" << endl << endl;
                            out.close();
                            break;
                        }

                        largeInt l1 = largeInt(a);
                        largeInt l2 = largeInt(b);
                        largeInt result = l1 / l2;
                        cout<< "a / b =" << endl;
                        cout<< result <<endl;
                        cout<< "λ����" << result.data.str_length << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "a / b =" << endl;
                        out<< result <<endl;
                        out<< "λ����" << result.data.str_length << endl;
                        out.close();

                        cout<< "�����������ַ���" << endl;
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
                cout<< "1.����̨����" << endl;
                cout<< "2.�ļ�����" << endl;
                cin>>con2;
                switch(con2) {
                    case 1: {
                        cout<< "(a ^ b) % (10 ^ n)" << endl;
                        cout<< "������a��" << endl;

                        string a, b;
                        cin >> a;
                        if (!linked_list().is_correct(a)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        cout<< "������b��" << endl;
                        cin >> b;
                        if (!linked_list().is_correct(b)) {
                            cout<< "�����ʽ����, ���½���ѡ��" << endl << endl;
                            break;
                        }

                        int c;
                        cout<< "������n��" << endl;
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
                        cout<< "�����������ַ���" << endl;
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
                        cout<< "�����������ַ���" << endl;
                        ofstream out;
                        out.open("C:\\Users\\20180\\Desktop\\ccc\\test.txt");
                        out<< "a = " << l1 << endl;
                        out<< "b = " << l2 << endl;
                        out<< "n = " << n << endl;
                        out<< "(a ^ b) % (10 ^ n) =" << endl;
                        out<< result <<endl;
                        out.close();

                        cout<< "�����������ַ���" << endl;
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

