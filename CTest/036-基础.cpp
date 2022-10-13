#include<iostream>
// ����vector�����
#include<vector>
// �����׼�㷨��
#include<algorithm>
using namespace std;

/* �������� */
// STL (Standard Template Library) ��׼ģ���
// �����Ϊ3�֣�����(container)���㷨(algorithm)��������(iterator)
// `����`��`�㷨`֮�䣬ͨ��`������`�����޷�����
// STL�������еĴ��붼������ģ�������ģ�庯��
/* ������� */
// 1�����������ݽṹ����string[�ַ���]��vector[��������]��deque[˫������]��stack[ջ]��queue[����]��list[˫��ѭ������]��pari[����]��(multi)set[(���ظ�)����]��(multi)map[(���ظ�)ӳ��]��
// 2���㷨�������㷨����for_each[����]��transform[ת��]��find(_if)[(����)����]��adjacent_find[����Ԫ�ز���]��binary_search[����]��count(_if)[(����)����]��sort[����]��merge[�ϲ�]��reverse[��ת]��random_shuffle[ϴ��]��copy[����]��replace(_if)[(����)�滻]��swap[����]��accumulate[�ۼ�]��fill[���]��set_intersection[����]��set_union[����]��set_difference[�]��
// 3����������������`����`��`�㷨`֮��Ľ��ϼ�
// 4���º�������Ϊ����`����`������Ϊ�㷨��ĳ�ֲ���
// 5����������һ����������`����`����`�º���`����`�������ӿ�`�Ķ���
// 6���ռ�������������ռ����ú͹���
/* ���� */
// - ����ʽ����������
// - ����ʽ���������򣬶������洢
/* �㷨 */
// - �ʱ��㷨����ı�Ԫ������
// - ���ʱ��㷨������ı�Ԫ������
/* ������ */
// 1�����������  ֻ��  ++��==��!=
// 2�����������  ֻд  ++
// 3��ǰ�������  ��д��ǰ��   ++��==��!=
// 4��˫�������  ��д��ǰ����  ++��--
// 5��������ʵ�����    ��д����Ծ�ƽ�     ++��--��[n]��-n��<��<=��>��>=
// �����г���`˫�������`��`������ʵ�����`

// ��ӡ
void myPrint(int v)
{
    cout << v << endl;
}

void main036()
{
    // ����vector`����`
    vector<int> v;

    // �������в�������
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);

    // ͨ��`������`����`����`�е�����
    // ��ʼ��������ָ�������еĵ�һ��Ԫ��(����ָ��)
    vector<int>::iterator itBegin = v.begin();
    // ������������ָ�������е����һ��Ԫ�ص���һ��λ��
    vector<int>::iterator itEnd = v.end();

    // ��һ�ֱ�����ʽ,while
    cout << "while" << endl;
    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }

    // �ڶ��ֱ�����ʽ,for
    cout << "for" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // �����ֱ�����ʽ,for_each(algorithm���ṩ���㷨)
    cout << "for_each" << endl;
    // ��ʼ������+1����������
    for_each(v.begin(), v.end(), myPrint);

}
