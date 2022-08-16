#include<iostream>
using namespace std;

// C++�������ص������
// ˫Ŀ���������  +(��)��-(��)��*(��)��/(��)��%(ģ)
// ��ϵ�����      ==(����)��!=(������)��<(С��)��>(����)��<=(С�ڵ���)��>=(���ڵ���)
// �߼������      ||(�߼���)��&&(�߼���)��!(�߼���)
// ��Ŀ�����      +(��)��-(��)��*(ָ��)��&(ȡַ)
// �����Լ������  ++(����)��--(�Լ�)
// λ�����        &(��λ��)��|(��λ��)��~(��λȡ��)��^(��λ���)��<<(����)��>>(����)
// ��ֵ�����      =��+=��-=��*=��/=��%=��&=��|=��^=��<<=��>>=
// �ռ��������ͷ�  new��delete��new[]��delete[]
// ���������      ()(��������)��->(��Ա����)��->*(��Աָ�����)��,(����)��[](�±�)
//
// �������ص������
// .(��Ա���������)��.*(��Աָ����������)��::(�������)��sizeof(���������)��?:(�����������

class Person10
{
public:
    // ���
    int height;
    // ����
    int weight;

    Person10() {}
    Person10(int height, int weight) :height(height), weight(weight) {}

    // ���������+
    Person10 operator+(Person10& p)
    {
        Person10 t;
        t.height = this->height + p.height;
        t.weight = this->weight + p.weight;
        return t;
    }
};

// ȫ�ֺ������������-
Person10 operator-(Person10& p1, Person10& p2)
{
    Person10 t;
    t.height = p1.height - p2.height;
    t.weight = p1.weight - p2.weight;
    return t;
}

void main011()
{
    Person10 p1(174, 63);
    Person10 p2(180, 70);
    // ��ͬ��
    // Person10 p3 = p1.operator+(p2);
    Person10 p3 = p1 + p2;
    cout << "p1��ߣ�" << p1.height << "�����أ�" << p1.weight << endl;
    cout << "p2��ߣ�" << p2.height << "�����أ�" << p2.weight << endl;
    cout << "p3=p1+p2��ߣ�" << p3.height << "�����أ�" << p3.weight << endl;
    // ��ͬ��
    // Person10 p4 = operator-(p2, p1);
    Person10 p4 = p2 - p1;
    cout << "p4=p2-p1��ߣ�" << p4.height << "�����أ�" << p4.weight << endl;
}
