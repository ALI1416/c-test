#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// ��ӡ
void print(vector<int> v)
{
    // ������ʵ����� ֧������
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

// vector���ݽṹ����ͨ�������ƣ���Ϊ��������
// ����vector����ľ�̬�ռ䣬�ǿ��Զ�̬��չ�ģ��ҵ�������ڴ�ռ䣬��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�
void main038()
{
    /* ���� */
    // �޲�(Ĭ��)
    // vector<T>();
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    print(v1);
    // ����
    // ��v[begin,end)�����ڵ�Ԫ�ؿ������Լ�
    // vector<T>(iterator begin, iterator end);
    vector<int> v2(v1.begin(), v1.end());
    print(v2);
    // n��Ԫ��
    // vector<T>(int n, int value);
    vector<int> v3(10, 1);
    print(v3);
    // ����
    // vector<T>(const vector<T>& v);
    vector<int> v4(v3);
    print(v4);

    /* ��ֵ */
    // vector��ֵ����ǰvector
    // vector& operator=(const vector& v);
    vector<int> v5 = v1;
    print(v5);
    // ��v[begin,end)�����ڵ�Ԫ�ؿ������Լ�
    // void assign(iterator begin, iterator end);
    vector<int> v6;
    v6.assign(v1.begin(), v1.end());
    print(v6);
    // n��Ԫ��
    // void assign(int n, int value);
    vector<int> v7;
    v7.assign(10, 1);
    print(v7);

    /* �����ʹ�С */
    vector<int> v8;
    // �ж��Ƿ�Ϊ��
    // bool empty() const;
    cout << "empty:" << v8.empty();
    // ����
    // bool capacity() const;
    cout << ",capacity:" << v8.capacity();
    // ��С
    // bool size() const;
    cout << ",size:" << v8.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        v8.push_back(i);
    }
    print(v8);
    cout << "empty:" << v8.empty();
    cout << ",capacity:" << v8.capacity();
    cout << ",size:" << v8.size() << endl;
    // ����ָ��������С��������Ĭ��ֵ(capacity��size����Ϊָ����С)����С��β��ɾ��(capacity���䣬size��Ϊָ����С)
    v8.resize(30);
    print(v8);
    cout << "capacity:" << v8.capacity();
    cout << ",size:" << v8.size() << endl;
    v8.resize(5);
    print(v8);
    cout << "capacity:" << v8.capacity();
    cout << ",size:" << v8.size() << endl;
    // ����ָ��������С��������ָ��ֵ����С��β��ɾ��
    v8.resize(30, 5);
    print(v8);
    v8.resize(20, 100);
    print(v8);

    /* �����ɾ�� */
    vector<int> v9;
    // β������
    // void push_back(T& value);
    v9.push_back(6);
    v9.push_back(7);
    v9.push_back(8);
    v9.push_back(9);
    print(v9);
    // ɾ��β��
    // void pop_back();
    v9.pop_back();
    print(v9);
    // ������ָ��λ��ǰ����Ԫ��
    // iterator insert(iterator pos, T& value);
    v9.insert(v9.begin(), 10);
    print(v9);
    // ������ָ��λ��ǰ����n��Ԫ��
    // iterator insert(iterator pos, int count, T& value);
    v9.insert(v9.begin() + 2, 5, 100);
    print(v9);
    // ɾ��������ָ��Ԫ��
    // iterator erase(iterator pos);
    v9.erase(v9.end() - 1);
    print(v9);
    // ɾ��������start��end֮���Ԫ��
    // iterator erase(iterator start, iterator end);
    v9.erase(v9.begin() + 2, v9.end() - 2);
    print(v9);
    // �������(capacity�����)
    // void clear();
    cout << "capacity:" << v9.capacity();
    cout << ",size:" << v9.size() << endl;
    v9.clear();
    print(v9);
    cout << "capacity:" << v9.capacity();
    cout << ",size:" << v9.size() << endl;

    /* ��ȡ */
    vector<int> v10;
    for (int i = 0; i < 10; i++)
    {
        v10.push_back(i);
    }
    print(v10);
    // ��������Ԫ��
    // T& at(int index);
    cout << "at:" << v10.at(3);
    // ��������Ԫ��
    // T& operator[](int index);
    cout << ",operator[]:" << v10[3];
    // ���ص�һ��Ԫ��
    // T& front();
    cout << ",front:" << v10.front();
    // �������һ��Ԫ��
    // T& back();
    cout << ",back:" << v10.back() << endl;

    /* �������� */
    vector<int> v11;
    vector<int> v12;
    for (int i = 0; i < 10; i++)
    {
        v11.push_back(i);
    }
    for (int i = 0; i < 50; i++)
    {
        v12.push_back(i + 100);
    }
    print(v11);
    print(v12);
    cout << "v11:capacity:" << v11.capacity();
    cout << ",size:" << v11.size() << endl;
    cout << "v12:capacity:" << v12.capacity();
    cout << ",size:" << v12.size() << endl;
    // ��������(�����ʹ�С��Ҳ����)
    // void swap(vector& v);
    v11.swap(v12);
    print(v11);
    print(v12);
    cout << "v11:capacity:" << v11.capacity();
    cout << ",size:" << v11.size() << endl;
    cout << "v12:capacity:" << v12.capacity();
    cout << ",size:" << v12.size() << endl;
    // �����÷��������ڴ�ռ�
    vector<int> v13;
    for (int i = 0; i < 10000; i++)
    {
        v13.push_back(i);
    }
    cout << "capacity:" << v13.capacity();
    cout << ",size:" << v13.size() << endl;
    v13.resize(15);
    // ���ô�С��capacity����
    cout << "capacity:" << v13.capacity();
    cout << ",size:" << v13.size() << endl;
    // ʹ�ø�vector���������������󣬲������ռ�
    // ��������ᱻϵͳϵͳ�Զ��ͷ�
    // capacity��С��sizeһ����
    vector<int>(v13).swap(v13);
    cout << "capacity:" << v13.capacity();
    cout << ",size:" << v13.size() << endl;

    /* Ԥ���ռ� */
    vector<int> v14;
    // ͳ���ڴ�ռ����¿��ٵĴ���
    int n = 0;
    int* p = NULL;
    for (int i = 0; i < 100000; i++)
    {
        v14.push_back(i);
        // ���¿����ڴ�ռ䣬�׵�ַ��ı�
        if (p != &v14[0])
        {
            p = &v14[0];
            n++;
            cout << "n:" << n << ",p:" << p << ",size:" << v14.size() << ",capacity:" << v14.capacity() << endl;
        }
    }
    cout << "n:" << n << ",p:" << p << ",size:" << v14.size() << ",capacity:" << v14.capacity() << endl;
    vector<int> v15;
    // Ԥ��len��Ԫ�س��ȣ�����ʼ�������ɷ���(capacity��ֵΪ��)
    v15.reserve(100000);
    cout << "capacity:" << v15.capacity();
    cout << ",size:" << v15.size() << endl;

    /* ����ͷ�ת */
    vector<int> v16;
    v16.push_back(1);
    v16.push_back(5);
    v16.push_back(2);
    v16.push_back(4);
    v16.push_back(3);
    // Ĭ����������(��ı�ԭ����)
    // void sort(iterator start, iterator end);
    sort(v16.begin(), v16.end());
    print(v16);

}
