#include<iostream>
using namespace std;

class Person15
{
public:
    string name;
    int year;

    // ����()
    void operator()()
    {
        cout << "������" << name << "�������꣺" << year << endl;
    }
    // ����()������
    void operator()(string s)
    {
        cout << s << endl;
    }
};

class MyAdd
{
public:
    // �з���ֵ
    int operator()(int a, int b)
    {
        return a + b;
    }
};

// �����������ӵ���Լ����ڲ�״̬
class MyPrint
{
public:
    // �ڲ�״̬
    int count;

    MyPrint()
    {
        count = 0;
    }

    void operator()(string msg)
    {
        cout << msg << endl;
        count++;
    }
};

// ����������Ϊ��������
void doPrint(MyPrint& myPrint, string msg)
{
    myPrint(msg);
}

void main016()
{
    Person15 p;
    p.name = "ck";
    p.year = 1998;
    // ����ʹ���������ƺ������ã�����Ҳ�зº���
    p();
    // ����������������
    Person15()("Hello, World !");

    // �����з���ֵ�ĺ�������
    MyAdd myAdd;
    cout << myAdd(2, 3) << endl;

    // ����ӵ���Լ����ڲ�״̬
    MyPrint myPrint;
    myPrint("Hello");
    myPrint("World");
    myPrint("Hi");
    myPrint("C++");
    cout << myPrint.count << endl;

    // ����������Ϊ��������
    doPrint(myPrint, "Hello, World !");

}
