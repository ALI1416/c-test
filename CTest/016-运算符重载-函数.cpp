#include<iostream>
using namespace std;

class Person15
{
public:
    string name;
    int year;

    // ����()
    void operator()()
    {
        cout << "������" << name << "�������꣺" << year << endl;
    }
    // ����()������
    void operator()(string s)
    {
        cout << s << endl;
    }
};

void main016()
{
    Person15 p;
    p.name = "ck";
    p.year = 1998;
    // ����ʹ���������ƺ������ã�����Ҳ�зº���
    p();
    // ����������������
    Person15()("Hello, World !");
}
