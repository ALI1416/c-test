#include<iostream>
using namespace std;

class Person13
{
public:
    string name;
    int* year;

    Person13(string name, int year)
    {
        this->name = name;
        // ���
        this->year = new int(year);
    }

    // �������ṩ�ĵ�4�����캯��
    // ���ظ�ֵ�����������ǳ����
    // �˴��滻�����
    // ����*this��Ϊ�˿�����ʽ����
    Person13& operator=(Person13& p)
    {
        name = p.name;
        // ���
        year = new int(*p.year);
        return *this;
    }

    ~Person13()
    {
        // �ͷŶ����ڴ�
        if (year != NULL)
        {
            delete year;
            year = NULL;
        }
    }
};

void main014()
{
    Person13 p1("ck", 1998);
    Person13 p2("kk", 1999);
    Person13 p3("cc", 2000);
    cout << "p1:������" << p1.name << "�������꣺" << *p1.year << endl;
    p1 = p2;
    cout << "p1:������" << p1.name << "�������꣺" << *p1.year << endl;
    p1 = p2 = p3;
    cout << "p1:������" << p1.name << "�������꣺" << *p1.year << endl;
}
