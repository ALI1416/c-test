#include<iostream>
using namespace std;

// ��̬
// ��̬��̬���������ء����������
//          ������ַ���->����׶�ȷ��������ַ
// ��̬��̬�����ࡢ�麯��
//          ������ַ���->���н׶�ȷ��������ַ
class Animal22
{
public:
    void speak()
    {
        cout << "������˵��" << endl;
    }
    // �麯��
    virtual void speak2()
    {
        cout << "������˵��2" << endl;
    }
};

class Cat22 : public Animal22
{
public:
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
    // ��д�麯��
    virtual void speak2()
    {
        cout << "Сè��˵��2" << endl;
    }
};

// �ڱ���׶��Ѱ󶨺�����ַ��������ε��ã������Animal22������
void doSpeak(Animal22& animal)
{
    animal.speak();
}

// ��̬��̬
// ����̳и��࣬��д������麯��
void doSpeak2(Animal22& animal)
{
    animal.speak2();
}

void main021()
{
    Cat22 cat;
    doSpeak(cat);
    doSpeak2(cat);
    cout << "sizeof(Cat22):" << sizeof(Cat22) << endl;
    // cl /d1 reportSingleClassLayoutCat22 "021-��̬-�麯��.cpp"
    //class Cat22     size(4):
    //        +---
    // 0      | +--- (base class Animal22)
    // 0      | | {vfptr} virtual funcation pointer �麯��ָ�룬ռ��4�ֽڣ�ָ��vftable
    //        | +---
    //        +---
    //Cat22::$vftable@: virtual funcation table �麯����
    //        | &Cat22_meta
    //        |  0
    // 0      | &Cat22::speak2 Cat22��д���麯��speak2
    //Cat22::speak2 this adjustor: 0
}
