#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void main054()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    v.push_back(2);
    // �����ҵ��ĸ���
    // int count(iterator begin, iterator end, T value);
    int n = count(v.begin(), v.end(), 2);
    cout << "�ҵ��ĸ�����" << n << endl;
}
