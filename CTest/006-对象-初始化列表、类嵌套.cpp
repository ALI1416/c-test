#include<iostream>
using namespace std;

// �ֻ���
class Phone
{
public:
    string name;
    Phone(string name) :name(name) {}
};

class Person3
{
public:
    string name;
    bool gender;
    int year;
    // �ֻ���
    Phone phone;

    // ��ͨ��ʼ������
    //Person3(string name, bool gender, int year)
    //{
    //    this->name = name;
    //    this->gender = gender;
    //    this->year = year;
    //    cout << this << " ȫ�ι��캯��" << endl;
    //}

    // ��ʼ���б�
    Person3(string name, bool gender, int year, string phoneName) :name(name), gender(gender), year(year), phone(phoneName)
    {
        cout << "��ʼ���б�" << endl;
    }
};

void main006()
{
    Person3 p1("ck", true, 1998, "iPhone 12 Pro Max");
    cout << "������" << p1.name << "���Ա�" << (p1.gender == true ? "��" : "Ů") << "�������꣺" << p1.year << "���ֻ���" << p1.phone.name << endl;
}
