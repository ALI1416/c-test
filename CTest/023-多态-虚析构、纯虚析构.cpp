#include<iostream>
using namespace std;

class Animal24
{
public:
    // ����virtual���η���������
    // ���Խ�������ͷ�ʱ�����಻�ͷŵ�����
    //virtual ~Animal24()
    //{
    //    cout << "Animal24������" << endl;
    //}

    // ��������������ʵ��
    virtual ~Animal24() = 0;

    virtual void speak() = 0;
};

// ʵ�ִ�������
Animal24::~Animal24()
{
    cout << "Animal24��������" << endl;
}

class Cat24 : public Animal24
{
public:
    string* name;

    Cat24(string name)
    {
        this->name = new string(name);
    }

    ~Cat24()
    {
        if (name != NULL)
        {
            cout << "Cat24����" << endl;
            delete name;
            name = NULL;
        }
    }

    void speak()
    {
        cout << "Сè[" << *name << "]��˵��" << endl;
    }
};

void main()
{
    Animal24* animal = new Cat24("����");
    animal->speak();
    delete animal;
}
