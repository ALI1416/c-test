#include<iostream>
using namespace std;

template<class NameType, class YearType>
class Person32
{
public:
    NameType name;
    YearType year;

    Person32(NameType name, YearType year);

    void print();
};

// ����ʵ�ֹ��캯��
template<class NameType, class YearType>
Person32<NameType, YearType>::Person32(NameType name, YearType year)
{
    this->name = name;
    this->year = year;
}

// ����ʵ����ͨ����
template<class NameType, class YearType>
void Person32<NameType, YearType>::print()
{
    cout << "������" << name << "�������꣺" << year << endl;
}

void main032()
{
    Person32<string, int> p("ck", 1998);
    p.print();
}
