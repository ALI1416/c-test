#include<iostream>
#include<fstream>
using namespace std;

class Person25
{
public:
    // string���������
    char name[32];
    int year;
    bool gender;
};

void main025()
{
    Person25 p = { "����",1998,true };
    // д�ļ�
    ofstream ofs;
    ofs.open("/2.txt", ios::out | ios::binary);
    // ����(��������,�����С)
    ofs.write((const char*)&p, sizeof(Person25));
    ofs.close();

    // ���ļ�
    ifstream ifs;
    ifs.open("/2.txt", ios::in | ios::binary);
    if (ifs.is_open())
    {
        Person25 p2;
        ifs.read((char*)&p2, sizeof(Person25));
        cout << "������" << p2.name << "���Ա�" << (p2.gender == true ? "��" : "Ů") << "�������꣺" << p2.year << endl;
    }
    ifs.close();
}
