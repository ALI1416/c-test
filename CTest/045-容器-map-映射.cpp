#include<iostream>
#include<map>
using namespace std;

// ��ӡ
void print(map<int, int> m)
{
    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        // ���ʷ�ʽ2
        cout << "key:" << (*it).first << ",value:" << (*it).second << "; ";
    }
    cout << endl;
}

// �Զ�������
class Desc2
{
public:
    // ����º���
    bool operator()(const int& v1, const int& v2) const
    {
        return v1 > v2;
    }
};

void main045() {

    /* ���� */
    // �޲�(Ĭ��)
    // map<T1, T2>();
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(make_pair(2, 20));
    m1.insert(make_pair(3, 30));
    m1.insert(make_pair(4, 40));
    print(m1);
    // ����
    // map<T1, T2>(const map<T1, T2>& m);
    map<int, int> m2(m1);
    print(m1);

    /* ��ֵ */
    // map��ֵ����ǰmap
    // map& operator=(const map& s);
    map<int, int> m3 = m2;
    print(m3);

    /* ��С���� */
    map<int, int> m4;
    // �ж�ջ�Ƿ�Ϊ��
    // bool empty();
    // ����ջ�ĳ���
    // int size();
    cout << "empty:" << m4.empty() << ",size:" << m4.size() << endl;
    m4.insert(make_pair(2, 20));
    m4.insert(make_pair(3, 30));
    m4.insert(make_pair(4, 40));
    cout << "empty:" << m4.empty() << ",size:" << m4.size() << endl;

    /* ��ȡ */
    map<int, int> m5;
    // ����
    // pair<map<T1, T2>::iterator, bool> insert(pair<map<T1, T2>& value);
    // ���뷽ʽ1
    m5.insert(pair<int, int>(1, 10));
    // ���뷽ʽ2
    m5.insert(make_pair(2, 20));
    // ���뷽ʽ3(������)
    m5[3] = 30;
    m5.insert(make_pair(5, 50));
    m5.insert(make_pair(4, 40));
    // ���ʷ�ʽ1
    cout << m5[4] << endl;
    print(m5);
    // ɾ��������ָ��Ԫ��
    // iterator erase(iterator pos);
    m5.erase(--m5.end());
    print(m5);
    // ɾ��������start��end֮���Ԫ��
    // iterator erase(iterator start, iterator end);
    m5.erase(++m5.begin(), --m5.end());
    print(m5);
    // ɾ��ָ��key��Ԫ��
    // ? erase(T1);
    m5.erase(4);
    print(m5);
    // �������
    // void clear();
    m5.clear();
    print(m5);

    /* ���Һ�ͳ�� */
    map<int, int> m6;
    m6.insert(make_pair(4, 40));
    m6.insert(make_pair(2, 20));
    m6.insert(make_pair(5, 50));
    m6.insert(make_pair(1, 10));
    m6.insert(make_pair(3, 30));
    // �����Ƿ���ڸ�ֵ�����ڷ��ص������������ڷ���s.end();
    // iterator find(T value);
    cout << "���ҵ���ֵ:" << (*m6.find(2)).second << endl;
    cout << "�Ƿ���ҵ�:" << (m6.find(0) != m6.end()) << endl;
    // ͳ�Ƹ���
    // int count(T value);
    cout << "����:" << m6.count(2) << endl;
    cout << "����:" << m6.count(0) << endl;

    /* �Զ������� */
    map<int, int, Desc2> m7;
    m7.insert(make_pair(4, 40));
    m7.insert(make_pair(2, 20));
    m7.insert(make_pair(5, 50));
    m7.insert(make_pair(1, 10));
    m7.insert(make_pair(3, 30));
    for (map<int, int, Desc2>::const_iterator it = m7.begin(); it != m7.end(); it++)
    {
        cout << "key:" << (*it).first << ",value:" << (*it).second << "; ";
    }
    cout << endl;

}
