#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

void main053()
{
    set<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.insert(i);
    }
    // ֻ��������������
    // bool binary_search(iterator begin, iterator end, T value);
    bool b = binary_search(v.begin(), v.end(), 2);
    if (b)
    {
        cout << "�ҵ�Ԫ�أ�" << endl;
    }
    else
    {
        cout << "δ�ҵ�Ԫ�أ�" <<  endl;
    }
    bool b2 = binary_search(v.begin(), v.end(), 12);
    if (b2)
    {
        cout << "�ҵ�Ԫ�أ�" << endl;
    }
    else
    {
        cout << "δ�ҵ�Ԫ�أ�" <<  endl;
    }
}
