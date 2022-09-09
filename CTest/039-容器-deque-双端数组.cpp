#include<iostream>
#include<deque>
using namespace std;

// ��ӡ
void print(deque<int> d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

/* vector��deque���� */
// vector��ͷ�������ɾ��Ч�ʵ�
// vector����Ԫ���ٶȿ�
// dequeû����������
/* deque�洢�ṹ */
// �ڲ���һ��`�п���`�����ڼ�¼`������`�ĵ�ַ��`������`��������
//  �п���                  ������
// |------|
// | 0x01 |  ->  | Ԫ�� | Ԫ�� | Ԫ�� | Ԫ�� |
// | 0x02 |  ->  | Ԫ�� | Ԫ�� | Ԫ�� | Ԫ�� |
// | 0x03 |  ->  | Ԫ�� | Ԫ�� | Ԫ�� | Ԫ�� |
// | .... |
// |------|
void main039()
{
    /* ���� */
    // �޲�(Ĭ��)
    // deque<T>();
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    print(d1);
    // ����
    // ��d[begin,end)�����ڵ�Ԫ�ؿ������Լ�
    // deque<T>(iterator begin, iterator end);
    deque<int> d2(d1.begin(), d1.end());
    print(d2);
    // n��Ԫ��
    // deque<T>(int n, int value);
    deque<int> d3(10, 1);
    print(d3);
    // ����
    // deque<T>(const deque<T>& d);
    deque<int> d4(d3);
    print(d4);
    
    /* ��ֵ */
    // deque��ֵ����ǰdeque
    // deque& operator=(const deque& d);
    deque<int> d5 = d1;
    print(d5);
    // ��d[begin,end)�����ڵ�Ԫ�ؿ������Լ�
    // void assign(iterator begin, iterator end);
    deque<int> d6;
    d6.assign(d1.begin(), d1.end());
    print(d6);
    // n��Ԫ��
    // void assign(int n, int value);
    deque<int> d7;
    d7.assign(10, 1);
    print(d7);

    /* ��С */
    deque<int> d8;
    // �ж��Ƿ�Ϊ��
    // bool empty() const;
    cout << "empty:" << d8.empty();
    // ��С
    // bool size() const;
    cout << ",size:" << d8.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        d8.push_back(i);
    }
    print(d8);
    cout << "empty:" << d8.empty();
    cout << ",size:" << d8.size() << endl;
    // ����ָ��������С��������Ĭ��ֵ����С��β��ɾ��
    d8.resize(30);
    print(d8);
    d8.resize(5);
    print(d8);
    // ����ָ��������С��������ָ��ֵ����С��β��ɾ��
    d8.resize(30, 5);
    print(d8);
    d8.resize(20, 100);
    print(d8);

    /* �����ɾ�� */
    deque<int> d9;
    // β������
    // void push_back(T& value);
    d9.push_back(6);
    d9.push_back(7);
    // ͷ������
    // void push_front(T& value);
    d9.push_front(8);
    d9.push_front(9);
    print(d9);
    // ɾ��β��
    // void pop_back();
    d9.pop_back();
    // ɾ��ͷ��
    // void pop_front();
    d9.pop_front();
    print(d9);
    // ������ָ��λ��ǰ����Ԫ��
    // iterator insert(iterator pos, T& value);
    d9.insert(d9.begin(), 10);
    print(d9);
    // ������ָ��λ��ǰ����n��Ԫ��
    // iterator insert(iterator pos, int count, T& value);
    d9.insert(d9.begin() + 2, 5, 100);
    print(d9);
    // ɾ��������ָ��Ԫ��
    // iterator erase(iterator pos);
    d9.erase(d9.end() - 1);
    print(d9);
    // ɾ��������start��end֮���Ԫ��
    // iterator erase(iterator start, iterator end);
    d9.erase(d9.begin() + 2, d9.end() - 2);
    print(d9);
    // �������
    // void clear();
    d9.clear();
    print(d9);

    /* ��ȡ */
    deque<int> d10;
    for (int i = 0; i < 10; i++)
    {
        d10.push_back(i);
    }
    print(d10);
    // ��������Ԫ��
    // T& at(int index);
    cout << "at:" << d10.at(3);
    // ��������Ԫ��
    // T& operator[](int index);
    cout << ",operator[]:" << d10[3];
    // ���ص�һ��Ԫ��
    // T& front();
    cout << ",front:" << d10.front();
    // �������һ��Ԫ��
    // T& back();
    cout << ",back:" << d10.back() << endl;

}
