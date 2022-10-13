#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print066(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

void main066()
{
    vector<int> v;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int> v3;
    // ����������������������С���������ֵ��С��������
    v3.resize(min(v.size(), v2.size()));
    // ����Ŀ��Ԫ�ص����һ��λ��+1
    // iterator set_intersection(iterator start, iterator end, iterator start2, iterator end2, iterator startDest);
    vector<int>::iterator itEnd = set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
    print066(v3);
    for (vector<int>::iterator it = v3.begin(); it != itEnd; it++)
    {
        cout << *it << ",";
    }
}
