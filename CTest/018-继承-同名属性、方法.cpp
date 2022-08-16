#include<iostream>
using namespace std;

class Animal2
{
public:
    int year = 2020;
    static bool gender;
    void printYear()
    {
        cout << "Animal2.year:" << year << endl;
    }
    void printYear(int year)
    {
        cout << "Animal2.year:" << year << endl;
    }
    static void print()
    {
        cout << "Animal2.print()" << endl;
    }
};

bool Animal2::gender = true;

class Cat2 : public Animal2
{
public:
    int year = 2021;
    static bool gender;
    void printYear()
    {
        cout << "Cat2.year:" << year << endl;
    }
    static void print()
    {
        cout << "Cat2.print()" << endl;
    }
};

bool Cat2::gender = false;

void main018()
{
    Cat2 cat;
    // ͬ�����Ի򷽷���������ʣ���ʾ�����ֵ
    cout << "cat.year:" << cat.year << endl;
    // ������ʸ��࣬��Ҫ���ϸ��������
    cout << "cat.Animal2::year:" << cat.Animal2::year << endl;
    cat.printYear();
    cat.Animal2::printYear();
    // ����Ḳ�ǵ����������е�ͬ�����������Դ˴���Ҫ���ϸ�������
    cat.Animal2::printYear(1234);

    // ��̬
    cout << "Cat2::gender:" << Cat2::gender << endl;
    // ͨ��Cat2�����ʸ���Animal2�е�����gender
    cout << "Cat2::Animal2::gender:" << Cat2::Animal2::gender << endl;
    cout << "Animal2::gender:" << Animal2::gender << endl;
    Cat2::print();
    Cat2::Animal2::print();
    Animal2::print();
}
