#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int transform01(int v)
{
    return v;
}

void print02(int value)
{
    cout << value << " ";
}

void main049()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // Ŀ������
    vector<int> vTarget;
    // ��Ҫ��Ŀ��������ǰ����ռ�
    vTarget.resize(v.size());
    // void transform(iterator begin, iterator end, iterator beginDest, function);
    transform(v.begin(), v.end(), vTarget.begin(), transform01);
    for_each(v.begin(), v.end(), print02);
    cout << endl;
    for_each(vTarget.begin(), vTarget.end(), print02);
}
