#include<iostream>
using namespace std;

class Temp1
{
public:
    void print1()
    {
        cout << "Temp1" << endl;
    }
};

class Temp2
{
public:
    void print2()
    {
        cout << "Temp2" << endl;
    }
};

template<class T>
class Person29
{
public:

    T obj;

    void fun1()
    {
        // ��ģ���вź������ڵ���ʱ��������
        obj.print1();
    }
    void fun2()
    {
        obj.print2();
    }
};

void main029()
{
    Person29<Temp1> p;
    p.fun1();
    // Temp1����û��print2����������ʱ��������������лᱨ��
    // p.fun2();

}
