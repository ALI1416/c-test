#include<iostream>
using namespace std;

// ������ʹ�ö�̳�
class Base1
{
public:
    int a = 1;
    int b = 2;
};

class Base2
{
public:
    int a = 3;
    int c = 4;
};

// �̳ж�����࣬�ö��Ÿ���
class Son : public Base1, public Base2
{
public:
    int a = 5;
    int b = 6;
    int d = 7;
};

void main019()
{
    Son s;
    // ռ��28�ֽ�
    cout << "sizeof(s):" << sizeof(s) << endl;
    // ���ʵ������������
    cout << "s.a:" << s.a << endl;
    // ���ʸ����е����������ԣ���Ҫ��������
    cout << "s.Base1::a:" << s.Base1::a << endl;
}
