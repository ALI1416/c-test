#include<iostream>
using namespace std;

// ���д��麯�����࣬Ҳ�г�����
class Animal23
{
public:
    // ���麯����������һ������ʵ�ַ���
    virtual void speak() = 0;
};

class Cat23 : public Animal23
{
public:
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

void main022()
{
    Animal23* animal = new Cat23;
    animal->speak();
    delete animal;
}
