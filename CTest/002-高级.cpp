#include<iostream>
#include"lib/fun.h"
using namespace std;

// ���ؾֲ�����������
int& ref01()
{
    int a = 10;
    return a;
}

// ���ؾ�̬����������
int& ref02()
{
    static int a = 20;
    return a;
}

// ��������
void print2(const int& s)
{
    // ֵ�����޸�
    // s = 100;
    cout << "print��" << s << endl;
}

// ������Ĭ��ֵ
void add(int a, int b = 2, int c = 3)
{
    cout << "add��" << a + b + c << endl;
}

// ������ʵ�֣�ֻ����һ����Ĭ��ֵ��Ҫ��Ȼ�ᱨ��
void add2(int a, int b = 2, int c = 3);

void add2(int a, int b, int c)
{
    cout << "add2��" << a + b + c << endl;
}

// ռλ���������봫�ݣ��������ã�Ҳ���Ը���Ĭ��ֵ
void add3(int a, int b, int c, int)
{
    cout << "add3��" << a + b + c << endl;
}

// ����
void add4(int a, int b, int c)
{
    cout << "add4��" << a + b + c << endl;
}

void add4(int a, int b)
{
    cout << "add4��" << a + b << endl;
}

void main002()
{
    /* ������������ */
    // ��������
    int* p = new int(123);
    cout << "int��" << *p << endl;
    // �ͷŶ���ʹ��delete
    delete p;

    /* ������������ */
    int* p2 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        p2[i] = i;
    }
    cout << "int[]��";
    for (int i = 0; i < 10; i++)
    {
        cout << p2[i] << "��";
    }
    cout << endl;
    // �ͷ��������ʹ��delete[]
    delete[] p2;

    /* ���� */
    int a = 10;
    // ���ã��൱�ڸ���������������Ƕ���ָ��ͬһ����ַ
    // ���ñ����ʼ�������Ҳ����޸�
    // һ���޸ģ�������Ҳ���޸�
    // ���õı�����ָ�볣��
    // `int& b = a;`���Զ�תΪ`int* const b = &a;`
    int& b = a;
    cout << a << endl;
    a = 20;
    cout << b << endl;
    // �ڲ����ֱ���b���������ͣ����Զ�תΪ`*b = 30;`
    b = 30;
    cout << a << endl;

    /* �������� */
    int num1 = 1111, num2 = 22222;
    cout << "num1��" << num1 << "��num2��" << num2 << endl;
    // ���ô��ݣ���ı�ԭ����
    swap03(num1, num2);
    cout << "num1��" << num1 << "��num2��" << num2 << endl;

    /* ����ֵ���� */
    // �������н����󣬾ֲ������ᱻ�ͷŵ�
    int& a1 = ref01();
    // ��һ�λ�ȡ����ȷ����ֵ��������ס��
    cout << a1 << endl;
    // �ڶ��λ�ȡ�Ǵ���ģ��ѱ��ͷ�(x86)
    cout << a1 << endl;
    // ��̬�������������н�����ϵͳ�ͷ�
    int& a2 = ref02();
    // �������ж��ٴΣ������������
    cout << a2 << endl;
    cout << a2 << endl;

    /* �������� */
    int c = 666;
    print2(c);

    /* ����Ĭ��ֵ */
    add(1, 2, 3);
    add(1, 2);
    add(1);
    add2(1, 2, 3);

    /* ռλ���� */
    add3(1, 2, 3, 4);

    /* ���� */
    add4(1, 2);
    add4(1, 2, 3);
}
