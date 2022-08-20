#include<iostream>
using namespace std;

// int����
void swapInt(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

// double����
void swapDouble(double& a, double& b)
{
    double t = a;
    a = b;
    b = t;
}

// ����ģ��template<typename��class ��������>
// һ�㺯��ʹ��typename����ʹ��class
// ͨ�ý���
template<typename T>
void swapT(T& a, T& b)
{
    T t = a;
    a = b;
    b = t;
}

template<typename T>
void getT()
{
    // ʹ��typeid��ȡ��������
    cout << "�������ͣ�" << typeid(T).name() << endl;
}

void main026()
{
    int a = 123;
    int b = 456;
    cout << "a:" << a << ",b:" << b << endl;
    swapInt(a, b);
    cout << "������a:" << a << ",b:" << b << endl;

    double c = 1.23;
    double d = 4.56;
    cout << "c:" << c << ",d:" << d << endl;
    swapDouble(c, d);
    cout << "������c:" << c << ",d:" << d << endl;

    // ʹ��ģ��
    double e = 1.23;
    double f = 4.56;
    cout << "e:" << e << ",f:" << f << endl;
    // û�б����������ͣ��Զ��Ƶ�
    swapT(e, f);
    cout << "������e:" << e << ",f:" << f << endl;
    // ָ����������
    swapT<double>(e, f);
    cout << "������e:" << e << ",f:" << f << endl;

    // ��ȡ��������
    getT<int>();
    getT<string>();
}
