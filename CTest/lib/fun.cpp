#include<iostream>
using namespace std;

// ���庯��
void print(int num)
{
    cout << "���������Ϊ��" << num << endl;
}

// ����-ֵ����
void swap01(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "swap01��num1��" << num1 << "��num2��" << num2 << endl;
}

// ����-��ַ����
void swap02(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    cout << "swap02��num1��" << *num1 << "��num2��" << *num2 << endl;
}

// ����-���ô���
void swap03(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "swap03��num1��" << num1 << "��num2��" << num2 << endl;
}
