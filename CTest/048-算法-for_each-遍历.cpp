#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print01(int value)
{
    cout << value << " ";
}

class Print02
{
public:
    void operator()(int value)
    {
        cout << value << " ";
    }
};

class Person048
{
public:
    int year;
    bool gender;
    Person048(int year, bool gender) :year(year), gender(gender) {};
};

void printPerson01(Person048 value)
{
    cout << value.year << "," << value.gender << " ";
}

// �㷨��Ҫ��ͷ�ļ�algorithm��functional��numeric���
// algorithm������STLͷ�ļ�������һ�������бȽϡ����������������ơ��޸ĵ�
// numeric�����С��ֻ��������������������м���ѧ�����ģ�庯��
// functional������һЩģ���࣬����������������
void main048()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    // void for_each(iterator begin, iterator end, function);
    // ʹ�ú�������
    for_each(v.begin(), v.end(), print01);
    cout << endl;
    // ʹ�÷º�������
    for_each(v.begin(), v.end(), Print02());
    cout << endl;
    // ��������
    vector<Person048> v2;
    v2.push_back(Person048(1998, true));
    v2.push_back(Person048(1999, false));
    for_each(v2.begin(), v2.end(), printPerson01);
}
