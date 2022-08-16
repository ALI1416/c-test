#include<iostream>
using namespace std;

// ����(����)
// ������
class Animal
{
public:
    int year;
protected:
    string name;
private:
    bool gender;
public:
    Animal()
    {
        cout << "Animal����" << endl;
    }
    ~Animal()
    {
        cout << "Animal����" << endl;
    }
};

// ����(������)
// �̳з�ʽ
// public       �����̳�    public->public      protected->protected    private���ɷ���
// protected    �����̳�    public->protected   protected->protected    private���ɷ���
// private      ˽�м̳�    public->private     protected->private      private���ɷ���
//

// è��
class Cat : public Animal
{
// �̳�����������
//public:
//    int year;
//protected:
//    string name;
public:
    // ����˳�򣺸���->����
    // ����˳������->����
    Cat(int year)
    {
        cout << "Cat����" << endl;
        this->year = year;
        name = "è";
    }
    ~Cat()
    {
        cout << "Cat����" << endl;
    }
    void print()
    {
        cout << "������" << name << "�������꣺" << year << endl;
    }
};

// ����
class Dog : protected Animal
{
// �̳�����������
//protected:
//    int year;
//protected:
//    string name;
public:
    int a;
    Dog()
    {
        year = 2021;
        name = "��";
    }
    void print()
    {
        cout << "������" << name << "�������꣺" << year << endl;
    }
};

// ����
class Rat : private Animal
{
// �̳�����������
//private:
//    int year;
//private:
//    string name;
public:
    Rat()
    {
        year = 2020;
        name = "��";
    }
    void print()
    {
        cout << "������" << name << "�������꣺" << year << endl;
    }
};

void main017()
{
    Cat cat(2022);
    cat.print();
    cat.year = 2023;
    cat.print();
    Dog dog;
    dog.print();
    Rat rat;
    rat.print();

    // x86 28�ֽ� x64 40�ֽ�
    cout << "sizeof(string):" << sizeof(string) << endl;
    cout << "sizeof(Animal):" << sizeof(Animal) << endl;
    // �����еķǾ�̬���ԣ�Ҳ������̳��ˣ����Ǳ������ˣ��޷�����
    cout << "sizeof(Cat):" << sizeof(Cat) << endl;
    // ����ʹ����������ѯ ����ģ��
    // cl /d1 reportSingleClassLayout���� cpp�ļ���
    // ���� cl /d1 reportSingleClassLayoutDog "017-�̳�-����.cpp"
    // ��ʾ����
    //class Dog       size(36): �ܹ�ռ��36�ֽڣ�ʵ��ռ��40�ֽ�(string����4�ֽ�)
    //        +---
    // 0      | +--- (base class Animal) �̳и���Animal
    // 0      | | year ����int����ռ��4�ֽ�(4-0=4)
    // 4      | | ?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@ name ����string����ռ��24�ֽ�(28-4=24)��ʵ��ռ��28�ֽ�(string����4�ֽ�)
    //28      | | gender ����bool����ռ��4�ֽ�(32-28=4)
    //        | | <alignment member> (size=3) �ܹ�3������
    //        | +---
    //32      | a �Լ�int����ռ��4�ֽ�(36-32=4)
    //        +---
    cout << "sizeof(Dog):" << sizeof(Dog) << endl;
}
