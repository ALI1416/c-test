#include<iostream>
using namespace std;

class Person4
{
public:
    // ��̬����
    // 1.���ж�����һ������
    // 2.����׶η����ڴ�
    // 3.���������������ʼ��
    static string name;

    // ��̬���������ж�����һ������
    static void print()
    {
        // ��̬����ֻ�ܷ��ʾ�̬����
        cout << "��̬������������" << name << endl;
    }
};

// ��̬���ԣ������ʼ��(����)
string Person4::name = "ck";

class Person5
{
};

class Person6
{
    int year;
};

void main007() {
    /* ���ʾ�̬���� */
    // 1.ͨ���������
    Person4 p1;
    cout << "������" << p1.name << endl;
    // 2.ͨ����������
    p1.name = "kk";
    cout << "������" << Person4::name << endl;

    /* ���ʾ�̬���� */
    // 1.ͨ���������
    Person4 p2;
    p2.print();
    // 2.ͨ����������
    Person4::print();

    /* �ռ�ռ����� */
    // �����κ����Ժͷ������࣬ռ��1���ֽ�
    Person5 p3;
    cout << "Person5��ռ���ֽ�����" << sizeof(p3) << endl;
    // �ǿ����Ե��࣬ռ�����зǾ�̬����ռ�õĿռ�
    Person6 p4;
    cout << "Person6��ռ���ֽ�����" << sizeof(p4) << endl;
    // ��ռ���ֽ�����ֻ����ǿ�����ռ�õĿռ䣬���û�У���ռ��1���ֽ�
    Person4 p5;
    cout << "Person4��ռ���ֽ�����" << sizeof(p5) << endl;
}
