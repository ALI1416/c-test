#include<iostream>
using namespace std;

// ����
template<class NameType, class YearType>
class Person35;

// ȫ����Ԫ����-����ʵ��
template<class NameType, class YearType>
void print2(Person35<NameType, YearType> p)
{
    cout << "ȫ����Ԫ����-����ʵ��-������" << p.name << "�������꣺" << p.year << endl;
}

template<class NameType, class YearType>
class Person35
{
private:
    NameType name;
    YearType year;
public:
    Person35(NameType name, YearType year) :name(name), year(year) {}

    // ȫ����Ԫ����-����ʵ��
    friend void print(Person35<NameType, YearType> p)
    {
        cout << "ȫ����Ԫ����-����ʵ��-������" << p.name << "�������꣺" << p.year << endl;
    }

    // ȫ����Ԫ����-��������
    // ��Ҫ���Ͽղ����б���������ģ�庯��
    friend void print2<>(Person35<NameType, YearType> p);

};

void main034()
{
    Person35<string, int> p("ck", 1998);
    print(p);
    print2(p);
}
