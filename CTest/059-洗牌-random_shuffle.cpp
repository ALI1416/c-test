#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

void print059(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
}

void main059()
{
    // ������ӣ���Ҫ����ctime��
    srand((unsigned int)time(NULL));
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // ϴ��
    // void reverse(iterator start, iterator end);
    random_shuffle(v.begin(), v.end());
    print059(v);
}
