#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void main067()
{
    vector<int> v;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int> v3;
    // �������������������������������ֵ��������֮��
    v3.resize(v.size() + v2.size());
    // ����Ŀ��Ԫ�ص����һ��λ��+1(�������ϱ����������)
    // iterator set_union(iterator start, iterator end, iterator start2, iterator end2, iterator startDest);
    vector<int>::iterator itEnd = set_union(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
    for (vector<int>::iterator it = v3.begin(); it != itEnd; it++)
    {
        cout << *it << ",";
    }
}
