#include<iostream>
using namespace std;

class Person12
{
public:
    int year;

    // ǰ��++(��++�ٷ���)
    // ����*this�����ܽ�����ʽ����
    Person12& operator++()
    {
        year++;
        return *this;
    }

    // ����++(�ȷ�����++)
    // ��Ҫ��һ��ռλ�����������
    Person12 operator++(int)
    {
        // �ȼ�¼��ԭʼ���
        Person12 p =*this;
        // ����
        year++;
        // ����ԭʼ���
        return p;
    }
};

ostream& operator<<(ostream& cout, Person12 p)
{
    cout << p.year;
    return cout;
}

void main013()
{
    Person12 p;
    p.year = 1998;
    cout << "ԭʼ�����꣺" << p << endl;
    cout << "������++p��" << ++p << endl;
    cout << "������++p��" << p << endl;
    cout << "������p++��" << p++ << endl;
    cout << "������p++��" << p << endl;
}
