#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool greate6(int v)
{
    return v > 6;
}

void main055()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // ���ظ��������ҵ��ĸ���
    // int count_if(iterator begin, iterator end, function);
    int n = count_if(v.begin(), v.end(), greate6);
    cout << "�ҵ��ĸ�����" << n << endl;
}
