#include<iostream>
using namespace std;

class Person7
{
private:
    string name;
    bool gender;
    int year;
public:
    Person7& setName(string name)
    {
        this->name = name;
        // ����*this���Խ�����ʽ����
        return *this;
    }
    Person7& setGender(bool gender)
    {
        this->gender = gender;
        return *this;
    }
    Person7& setYear(int year)
    {
        this->year = year;
        return *this;
    }
    void print()
    {
        cout << "������" << name << "���Ա�" << (gender == true ? "��" : "Ů") << "�������꣺" << year << endl;
    }
    void print2()
    {
        cout << "print2" << endl;
    }
    void print3()
    {
        // ��ֹ��ָ����ú��������������ж�
        if (this == NULL)
        {
            return;
        }
        cout << "������" << name << endl;
    }
};

void main008()
{
    Person7 p;
    // ������ʽ����
    p.setName("ck").setGender(true).setYear(1998);
    p.print();

    Person7* p2 = NULL;
    // ��ָ����ú���
    p2->print2();
    p2->print3();
}
