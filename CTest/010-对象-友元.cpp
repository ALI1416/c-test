#include<iostream>
using namespace std;

// ����
class Room;

// ����
class Buliding
{
public:
    Buliding();
    Room* r;
    void visit();
};

// ����
class Room
{
    // ��Ԫ�����Է���˽�����ԡ�����
    // ȫ�ֺ���
    friend void globalFun(Room* r);
    // ��
    friend class Floor;
    // ����
    friend void Buliding::visit();

public:
    string sittingRoom = "����";
private:
    string bedRoom = "����";
};

// ¥��
class Floor
{
public:
    Floor();
    Room* r;
    void visit();
};

// ȫ�ֺ���
void globalFun(Room* r)
{
    cout << "ȫ�ֺ������ʣ�" << r->sittingRoom << endl;
    cout << "ȫ�ֺ������ʣ�" << r->bedRoom << endl;
}

// �ⲿ���巽��
Floor::Floor()
{
    r = new Room;
}
void Floor::visit()
{
    cout << "����ʣ�" << r->sittingRoom << endl;
    cout << "����ʣ�" << r->bedRoom << endl;
}
Buliding::Buliding()
{
    r = new Room;
}
void Buliding::visit()
{
    cout << "�������ʣ�" << r->sittingRoom << endl;
    cout << "�������ʣ�" << r->bedRoom << endl;
}

void main()
{
    Room r;
    globalFun(&r);

    Floor f;
    f.visit();

    Buliding b;
    b.visit();
}
