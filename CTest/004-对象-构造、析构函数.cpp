#include<iostream>
using namespace std;

class Person
{
private:
    // ����
    // ���Ը���Ĭ��ֵ
    string name = "";
    // �Ա�
    bool gender = true;
    // ������
    int year = 2000;

public:
    /* ���캯�� */
    // ���û���ֶ���ӹ��캯����ϵͳ��Ĭ�����3�����캯��
    // 1.�޲ι��캯����������Ϊ��
    // 2.�޲�����������������Ϊ��
    // 3.�������캯���������忽����������
    // ����û��������вι��캯����ϵͳ�����ṩ�޲ι��캯�������ǻ��ṩ�������캯��
    // ����û������˿������캯����ϵͳ��������������캯��
    // �޲ι��캯��
    Person()
    {
        cout << this << " �޲ι��캯��" << endl;
    }
    // ���ι��캯��
    Person(string name)
    {
        this->name = name;
        cout << this << " ���ι��캯��" << endl;
    }
    Person(bool gender)
    {
        this->gender = gender;
        cout << this << " ���ι��캯��" << endl;
    }
    // ȫ�ι��캯��
    Person(string name, bool gender, int year)
    {
        this->name = name;
        this->gender = gender;
        this->year = year;
        cout << this << " ȫ�ι��캯��" << endl;
    }
    // �������캯��
    // ʹ��const���ã���ֹ�޸ġ���ʡ�ڴ�
    Person(const Person& p)
    {
        name = p.name;
        gender = p.gender;
        year = p.year;
        cout << this << " �������캯��" << endl;
    }
    /* �������� */
    // ������ǰ����~����������ǰ���Զ�����
    ~Person()
    {
        cout << this << " ��������" << endl;
    }
    void print()
    {
        cout << "������" << name << "���Ա�" << (gender == true ? "��" : "Ů") << "�������꣺" << year << endl;
    }
};

void main004()
{
    /* ���÷�ʽ */
    // 1�����ŷ�
    // �޲ι��캯��(ע�⣺���ɼ����ţ�����ᱻʶ��Ϊ��������)
    Person p1;
    // ���ι��캯��
    Person p2("ck");
    // ȫ�ι��캯��
    Person p3("ck", true, 1998);
    // �������캯��
    Person p4(p3);
    p4.print();

    // 2����ʾ��
    Person p5 = Person();
    Person p6 = Person("kk");
    Person p7 = Person("kk", false, 2008);
    Person p8 = Person(p7);
    // ����������ִ�н�������������
    Person("cc");
    p8.print();
    // ������������ʹ�ÿ������캯��
    // ����Person(p8)�������Person p8�����л�����ض������
    // Person(p8);

    // 3����ʽת����
    // ���Զ�̽������
    Person p9 = false;
    Person p10 = p9;
    p10.print();
}
