#include<iostream>
#include<list>
using namespace std;

// ��ӡ
void print(list<int> t)
{
    // ˫���������ֻ֧��++��--
    for (list<int>::const_iterator it = t.begin(); it != t.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

// ˫��ѭ������
// �������洢
// �����ɽڵ㹹�ɣ��ڵ���`������`��`ָ����`(����ǰָ��ͺ�ָ��)����
// |------| |------| |------| |------|
// | data | | data | | data | | data |
// |------| |------| |------| |------|
// | prev | | prev | | prev | | prev |
// | next | | next | | next | | next |
// |------| |------| |------| |------|
// ���е�һ���ڵ��prevָ��ָ�����һ���ڵ㣬���һ���ڵ��nextָ��ָ���һ���ڵ�
void main042()
{
    /* ���� */
    // �޲�(Ĭ��)
    // list<T>();
    list<int> t1;
    t1.push_back(1);
    t1.push_back(2);
    t1.push_back(3);
    print(t1);
    // ����
    // ��t[begin,end)�����ڵ�Ԫ�ؿ������Լ�
    // list<T>(const_iterator begin, const_iterator end);
    list<int> t2(t1.begin(), t1.end());
    print(t2);
    // n��Ԫ��
    // list<T>(int n, int value);
    list<int> t3(10, 1);
    print(t3);
    // ����
    // list<T>(const list<T>& d);
    list<int> t4(t3);
    print(t4);

    /* ��ֵ */
    // list��ֵ����ǰlist
    // list& operator=(const list& d);
    list<int> t5 = t1;
    print(t5);
    // ��t[begin,end)�����ڵ�Ԫ�ؿ������Լ�
    // void assign(const_iterator begin, const_iterator end);
    list<int> t6;
    t6.assign(t1.begin(), t1.end());
    print(t6);
    // n��Ԫ��
    // void assign(int n, int value);
    list<int> t7;
    t7.assign(10, 1);
    print(t7);

    /* ��С */
    list<int> t8;
    // �ж��Ƿ�Ϊ��
    // bool empty() const;
    cout << "empty:" << t8.empty();
    // ��С
    // bool size() const;
    cout << ",size:" << t8.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        t8.push_back(i);
    }
    print(t8);
    cout << "empty:" << t8.empty();
    cout << ",size:" << t8.size() << endl;
    // ����ָ��������С��������Ĭ��ֵ����С��β��ɾ��
    t8.resize(30);
    print(t8);
    t8.resize(5);
    print(t8);
    // ����ָ��������С��������ָ��ֵ����С��β��ɾ��
    t8.resize(30, 5);
    print(t8);
    t8.resize(20, 100);
    print(t8);

    /* �����ɾ�� */
    list<int> t9;
    // β������
    // void push_back(T& value);
    t9.push_back(6);
    t9.push_back(7);
    // ͷ������
    // void push_front(T& value);
    t9.push_front(8);
    t9.push_front(9);
    print(t9);
    // ɾ��β��
    // void pop_back();
    t9.pop_back();
    // ɾ��ͷ��
    // void pop_front();
    t9.pop_front();
    print(t9);
    // ������ָ��λ��ǰ����Ԫ��
    // iterator insert(const_iterator pos, T& value);
    t9.insert(t9.begin(), 10);
    print(t9);
    // ������ָ��λ��ǰ����n��Ԫ��
    // iterator insert(const_iterator pos, int count, T& value);
    t9.insert(++++t9.begin(), 5, 100);
    print(t9);
    // ɾ��������ָ��Ԫ��
    // iterator erase(const_iterator pos);
    t9.erase(--t9.end());
    print(t9);
    // ɾ��������start��end֮���Ԫ��
    // iterator erase(const_iterator start, const_iterator end);
    t9.erase(++++t9.begin(), ----t9.end());
    print(t9);
    // �Ƴ�ָ��ֵ
    // void remove(T& value);
    t9.remove(100);
    print(t9);
    // �������
    // void clear();
    t9.clear();
    print(t9);

}
