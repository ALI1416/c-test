#include<iostream>
using namespace std;

int addInt(int a, int b)
{
    return a + b;
}

template<typename T>
T addT(T a, T b)
{
    return a + b;
}

void printAdd(int a, int b)
{
    cout << "��ͨ����printAdd:" << a + b << endl;
}

template<typename T>
void printAdd(T a, T b)
{
    cout << "����ģ��printAdd:" << a + b << endl;
}

template<typename T>
void printAdd(T a, T b, T c)
{
    cout << "����ģ��printAdd:" << a + b + c << endl;
}

void main()
{
    int a = 123;
    int b = 456;
    // ASCII:97
    char c = 'a';
    // ASCII:98
    char d = 'b';
    int e = 789;
    // ��ͨ��������ʱ���ᷢ��������ʽת��
    cout << "a+b=" << addInt(a, c) << endl;
    // ģ�岻�ᣬ��Ҫָ����������
    cout << "a+b=" << addT<int>(a, c) << endl;

    // �����ͨ�����뺯��ģ��ͬ������Ĭ�ϵ�����ͨ����
    printAdd(a, b);
    // ���Ҫǿ�Ƶ��ú���ģ�壬��Ҫ���Ͽղ����б�
    printAdd<>(a, b);

    // �������ģ���ܲ������õ�ƥ�䣬���ȵ��ú���ģ��
    // ���������ͨ��������Ҫ����2����ʽת��
    printAdd(c, d);

    // ģ�庯������
    printAdd(a, b, e);
}
