#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void print056(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

void main056()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    // Ĭ����������(��ı�ԭ����)
    // void sort(iterator start, iterator end);
    sort(v.begin(), v.end());
    print056(v);
    // �������У�ʹ��functional���greater����
    sort(v.begin(), v.end(), greater<int>());
    print056(v);
}
