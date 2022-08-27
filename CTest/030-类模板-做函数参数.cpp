#include<iostream>
using namespace std;

template<class NameType, class YearType>
class Person30
{
public:
    NameType name;
    YearType year;

    Person30(NameType name, YearType year) :name(name), year(year) {}

    void print()
    {
        cout << "������" << name << "�������꣺" << year << endl;
    }
};

// ָ����������(����)
void fun1(Person30<string, int>& p)
{
    p.print();
}

// ����ģ�廯
template<typename T1, class T2>
void fun2(Person30<T1, T2>& p)
{
    p.print();
}

// ��ģ�廯
template<typename T>
void fun3(T& p)
{
    p.print();
}

void main30()
{
    Person30<string, int> p("ck", 1998);
    fun1(p);
    Person30<string, int> p2("cc", 1999);
    fun2(p2);
    Person30<string, int> p3("kk", 1997);
    fun3(p3);
}
