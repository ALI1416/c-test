#include<iostream>
using namespace std;

// ʹ�ö��ŷָ�������ͣ���������Ĭ����������
template<class NameType, class YearType = int>
class Person28
{
public:
    NameType name;
    YearType year;

    Person28(NameType name, YearType year):name(name),year(year){}

    void print()
    {
        cout << "������" << name << "�������꣺" << year << endl;
    }
};

void main028()
{
    // ��ģ���޷��Զ��Ƶ���������
    Person28<string, int> p("ck", 1998);
    p.print();

    // ʹ��Ĭ����������
    Person28<string> p2("kk", 2008);
    p2.print();

}
