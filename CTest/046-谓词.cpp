#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print046(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

// ��5��
class GreaterFive
{
public:
    bool operator()(int v)
    {
        return v > 5;
    }
};

// ����
class Desc
{
public:
    bool operator()(const int& v1, const int& v2) const
    {
        return v1 > v2;
    }
};

// ����bool���͵�`�º���`����`ν��`
// ���operator()����1����������һԪν��
// ���operator()����2���������ж�Ԫν��
void main046()
{
    /* һԪν�� */
    vector<int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(1);
    v.push_back(9);
    // ���ұ�5���ֵ
    // iterator find_if(iterator begin, iterator end, function)
    // GreaterFive()��������������
    vector<int>::iterator vr = find_if(v.begin(), v.end(), GreaterFive());
    if (vr == v.end())
    {
        cout << "δ�ҵ���" << endl;
    }
    else
    {
        cout << "�ҵ��˱�5�������Ϊ��" << *vr << endl;
    }

    /* ��Ԫν�� */
    print046(v);
    sort(v.begin(), v.end(), Desc());
    print046(v);

}
