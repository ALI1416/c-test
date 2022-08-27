#include<iostream>
using namespace std;
#include"lib/MyArray.hpp"

void main035()
{
    MyArray<int> a1(5);
    MyArray<int> a2(a1);
    MyArray<int> a3(10);
    a3 = a2 = a1;

    a1.push(1);
    a1.push(2);
    a1.push(3);
    a1.push(4);
    a1.push(5);
    // ����ʧ��
    a1.push(6);
    try {
        cout << a1.pop() << endl;
        cout << a1.pop() << endl;
        a1.del();
        a1.del();
        cout << a1.pop() << endl;
        // �����쳣
        cout << a1.pop() << endl;
    }
    // �����쳣�ַ���
    catch (const char* c)
    {
        cout << "�쳣��" << c << endl;
    }

    a1.push(1);
    a1.push(2);
    a1.push(3);
    cout << a1[1] << endl;
    // �޸��±��Ӧ��ֵ
    a1[1] = 100;
    cout << a1[1] << endl;

    cout << "������" << a1.getCapacity() << endl;
    cout << "���ȣ�" << a1.getSize() << endl;

}
