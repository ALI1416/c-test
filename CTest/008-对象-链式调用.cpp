#include<iostream>
using namespace std;

class Person7
{
private:
    string name;
    bool gender;
    int year;
public:
    Person7 setName(string name)
    {
        this->name = name;
        // ����*this���Խ�����ʽ����
        return *this;
    }
    Person7 setGender(bool gender)
    {
        this->gender = gender;
        return *this;
    }
    Person7 setYear(int year)
    {
        this->year = year;
        return *this;
    }
    void print()
    {
        cout << "������" << name << "���Ա�" << (gender == true ? "��" : "Ů") << "�������꣺" << year << endl;
    }
};

void main()
{
    Person7 p;
    // ������ʽ����
    p.setName("ck").setGender(true).setYear(1998);
    p.print();
}
