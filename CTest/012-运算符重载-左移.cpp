#include<iostream>
using namespace std;

class Person11
{
    // ���������˽�еģ���Ҫ������Ԫ����
    friend ostream& operator<<(ostream& cout, Person11& p);

private:
    string name;
public:
    Person11(string name):name(name){}
    // ���������ڲ���������<<�������p.operator<<(cout)����Ϊp << cout����Ϊcout���Ҳ�
    //void Person11 operator<<(cout)
};

// ��Ҫ����ostream& cout�����ܽ�����ʽ����
ostream& operator<<(ostream& cout, Person11& p)
{
    cout << p.name;
    return cout;
}

void main012()
{
    Person11 p("ck");
    cout << "������" << p << endl;
}
