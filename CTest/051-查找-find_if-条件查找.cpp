#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool greate5(int v)
{
    return v > 5;
}

void main051()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // �������ң��ҵ����ص�һ����Ӧ��iterator���Ҳ�������end
    // iterator for_each(iterator begin, iterator end, function);
    vector<int>::iterator it1 = find_if(v.begin(), v.end(), greate5);
    if (it1 == v.end())
    {
        cout << "δ�ҵ�Ԫ�أ�" << endl;
    }
    else
    {
        cout << "�ҵ�Ԫ��:" << *it1 << endl;
    }
}
