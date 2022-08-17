#include<iostream>
using namespace std;

// ���μ̳�
//   ����
//  /   \
// ��    è
//  \   /
//   ��è

// ����
class Animal20
{
public:
    int year;
};

// ��
class Bear20 : public Animal20
{
};

// è
class Cat20 : public Animal20
{
};

// ��è
class Panda20 : public Bear20, public Cat20
{
};


// ����
class Animal21
{
public:
    int year;
};

// ��
// Animal21Ϊ�����
class Bear21 : virtual public Animal21
{
};

// è
class Cat21 : virtual public Animal21
{
};
// ��è
class Panda21 : public Bear21, public Cat21
{
};

void main020()
{
    Panda20 p;
    // ���ڼ̳���2���࣬������Ҫ��������
    p.Bear20::year = 2020;
    p.Cat20::year = 2022;
    // cl /d1 reportSingleClassLayoutPanda20 "020-�̳�-��̳�.cpp"
    //class Panda20   size(8):
    //        +---
    // 0      | +--- (base class Bear20)
    // 0      | | +--- (base class Animal20)
    // 0      | | | year
    //        | | +---
    //        | +---
    // 4      | +--- (base class Cat20)
    // 4      | | +--- (base class Animal20)
    // 4      | | | year
    //        | | +---
    //        | +---
    //        +---
    // ռ����8���ֽڣ�Bear20ռ4����Cat20ռ4��
    cout << "sizeof(p):" << sizeof(p) << endl;
    cout << "p.Bear20::year" << p.Bear20::year << endl;
    cout << "p.Cat20::year" << p.Cat20::year << endl;

    // ����ֻ��һ�ݾͿ��ԣ������������ϼ������η�virtual��������̳�
    Panda21 p2;
    p2.Bear21::year = 2023;
    p2.Cat21::year = 2025;
    // �����������ԣ�ֻ��һ�ݣ����Կ���ֱ�Ӹ�ֵ�����ô���������
    p2.year = 2027;
    // cl /d1 reportSingleClassLayoutPanda21 "020-�̳�-��̳�.cpp"
    //class Panda21   size(12):
    //        +---
    // 0      | +--- (base class Bear21)
    // 0      | | {vbptr} virtual base pointer ���ָ�룬ָ�������(vbtable)��ռ��4�ֽ�
    //        | +--- ��������$vbtable@Bear21������ƫ����Ϊ8��0+8=8��ָ��8�ŵ�ַ����year����
    // 4      | +--- (base class Cat21)
    // 4      | | {vbptr} ���ָ�룬ռ��4�ֽ�
    //        | +--- ��������$vbtable@Cat21������ƫ����Ϊ4��4+4=8��ָ��8�ŵ�ַ����year����
    //        +---
    //        +--- (virtual base Animal21)
    // 8      | year int���ͣ�ռ��4�ֽ�
    //        +---
    // ����� virtual base table
    //Panda21::$vbtable@Bear21@:
    // 0      | 0
    // 1      | 8 (Panda21d(Bear21+0)Animal21)
    //Panda21::$vbtable@Cat21@:
    // 0      | 0
    // 1      | 4 (Panda21d(Cat21+0)Animal21))
    //vbi:       class  offset o.vbptr  o.vbte fVtorDispe
    //        Animal21       8       0       4 0
    cout << "sizeof(p2):" << sizeof(p2) << endl;
    cout << "p2.Bear21::year" << p2.Bear21::year << endl;
    cout << "p2.Cat21::year" << p2.Cat21::year << endl;
    cout << "p2.year" << p2.year << endl;
}
