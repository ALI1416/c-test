#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// ��ӡ
void print(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

// vector���ݽṹ����ͨ�������ƣ���Ϊ��������
// ����vector����ľ�̬�ռ䣬�ǿ��Զ�̬��չ�ģ��ҵ�������ڴ�ռ䣬��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�
void main()
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
    // ��v[begin,v.end)�����ڵ�Ԫ�ؿ������Լ�
    // vector<T>(iterator v.begin(), iterator v.end());
    vector<int> v2(v1.begin(),v1.end());
    print(v2);
    // n��Ԫ��
    // vector<T>(int n, int value);
    vector<int> v3(10,1);
    print(v3);
    // ����
    // vector<T>(const vector<T>& v);
    vector<int> v4(v3);
    print(v4);

    /* ��ֵ */
    // 


}
