#include<iostream>
using namespace std;

// ���� �ɶԵ�����
void main043()
{
    /* ����ͻ�ȡ */
    // ����
    // pair<T1,T2>();
    pair<string, int> ck("ChengKai", 1998);
    // pari<T1,T2> make_pair(const T1& t1, const T1& t1);
    pair<string, int> kk = make_pair("Kai", 2008);
    // ��ȡ
    cout << "������" << ck.first << "�������꣺" << ck.second << endl;
    cout << "������" << kk.first << "�������꣺" << kk.second << endl;
}
