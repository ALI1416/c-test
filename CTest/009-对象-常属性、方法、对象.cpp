#include<iostream>
using namespace std;

class Person8
{
public:
    // �����ԣ�������Ĭ��ֵ
    const string name ="ck";
    // mutable�ɱ�ģ����������޸�
    mutable bool gender;
    int year;

    void print()
    {
        cout << "������" << name << "���Ա�" << (gender == true ? "��" : "Ů") << "�������꣺" << year << endl;
    }

    // ������
    void print2() const
    {
        // ������ֻ���޸�mutable���η�����
        this->gender = true;
        cout << "�Ա�" << (gender == true ? "��" : "Ů") << endl;
    }

};

class Person9
{
public:
    mutable bool gender;

    void print()
    {
        cout << "�Ա�" << (gender == true ? "��" : "Ů") << endl;
    }

    void print2() const
    {
        cout << "�Ա�" << (gender == true ? "��" : "Ů") << endl;
    }
};

void main009()
{
    Person8 p;
    p.gender = false;
    p.year = 1998;
    p.print();
    p.print2();

    // ������ֻ�ܵ��ó�����
    // ע�⣺���ܴ���const����
    const Person9 p2;
    p2.gender = false;
    p2.print2();
}
