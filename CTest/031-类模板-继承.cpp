#include<iostream>
using namespace std;

template<class T>
class Base31
{
public:
    T t;
    void showType()
    {
        cout << "Base31����T��" << typeid(T).name() << endl;
    }
};

// ����̳���ģ�壬��Ҫָ����������
class Son31 :public Base31<int>
{
};

// ���಻ָ���������ͣ����԰�����Ҳ�����ģ��
template<class T1, class T2>
class Son32 :public Base31<T1>
{
public:
    T2 t;
    void showType2()
    {
        cout << "Son33����T2��" << typeid(T2).name() << endl;
    }
};

void main031()
{
    Son31 s1;
    s1.showType();
    Son32<bool, double> s2;
    s2.showType2();
    s2.showType();
}