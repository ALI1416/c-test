#include<iostream>
using namespace std;

class Person2
{
public:
    string name;
    // ����������ݣ�����������
    int* year;

    Person2(string name, int year)
    {
        this->name = name;
        // �ڶ�������
        this->year = new int(year);
        cout << this << " ȫ�ι��캯��" << endl;
    }
    Person2(const Person2& p)
    {
        // ǳ�������򵥸�ֵ��������
        // ������ڶ�����������ռ䣬���п���
        name = p.name;
        // ��������������������������ظ��ͷŶ����ڴ棬�ᱨ��
        year = new int(*p.year);
        cout << this << " �������캯��" << endl;
    }
    ~Person2()
    {
        // �ͷŶ����ڴ�
        if (year != NULL)
        {
            delete year;
            year = NULL;
        }
        cout << this << " ��������" << endl;
    }
};

void main005()
{
     Person2 p1("ck", 1998);
     cout << "p1:������" << p1.name << "�������꣺" << *p1.year << endl;
     Person2 p2(p1);
     cout << "p2:������" << p2.name << "�������꣺" << *p2.year << endl;
}
