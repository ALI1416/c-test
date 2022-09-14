#include<iostream>
#include<set>
using namespace std;

// �Զ�������
class Person044
{
    friend ostream& operator<<(ostream& cout, Person044& p);
public:
    string name;
    int year;
    Person044(string name, int year) :name(name), year(year) {};
};

// Person044���
ostream& operator<<(ostream& cout, const Person044& p)
{
    cout << "������" << p.name << "�������꣺" << p.year;
    return cout;
}

// �Զ�����������
class Person044Sort
{
public:
    // year����º���
    bool operator()(const Person044& v1, const Person044& v2) const
    {
        return v1.year < v2.year;
    }
};

// �Զ�������
class Desc
{
public:
    // ����º���
    bool operator()(const int& v1, const int& v2) const
    {
        return v1 > v2;
    }
};

// ��ӡ
void print(set<int> s)
{
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

void print2(set<int, Desc> s)
{
    for (set<int, Desc>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

void print3(set<Person044, Person044Sort> s)
{
    for (set<Person044, Person044Sort>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
}

void print4(multiset<int> s)
{
    for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;
}

// set�ǹ���ʽ�������ײ���ö������洢��Ԫ���������
// set���������ظ�ֵ��multiset�������ظ�ֵ
void main044()
{
    /* ���� */
    // �޲�(Ĭ��)
    // set<T>();
    set<int> s1;
    s1.insert(3);
    s1.insert(1);
    s1.insert(5);
    s1.insert(2);
    s1.insert(4);
    print(s1);
    // ����
    // set<T>(const set<T>& s);
    set<int> s2(s1);
    print(s1);

    /* ��ֵ */
    // set��ֵ����ǰset
    // set& operator=(const set& s);
    set<int> s3 = s2;
    print(s1);

    /* ��С���� */
    set<int> s4;
    // �ж�ջ�Ƿ�Ϊ��
    // bool empty();
    // ����ջ�ĳ���
    // int size();
    cout << "empty:" << s4.empty() << ",size:" << s4.size() << endl;
    s4.insert(1);
    s4.insert(4);
    s4.insert(7);
    cout << "empty:" << s4.empty() << ",size:" << s4.size() << endl;

    /* ��ȡ */
    set<int> s5;
    // ����
    // pair<set<T>::iterator, bool> insert(T& value);
    s5.insert(3);
    s5.insert(1);
    s5.insert(5);
    s5.insert(2);
    s5.insert(4);
    print(s5);
    // ɾ��������ָ��Ԫ��
    // iterator erase(iterator pos);
    s5.erase(--s5.end());
    print(s5);
    // ɾ��������start��end֮���Ԫ��
    // iterator erase(iterator start, iterator end);
    s5.erase(++s5.begin(), --s5.end());
    print(s5);
    // ɾ��ָ��key��Ԫ��
    // ? erase(T);
    s5.erase(4);
    // �������
    // void clear();
    s5.clear();
    print(s5);

    /* ���Һ�ͳ�� */
    set<int> s6;
    s6.insert(3);
    s6.insert(1);
    s6.insert(5);
    s6.insert(2);
    s6.insert(4);
    // �����Ƿ���ڸ�ֵ�����ڷ��ص������������ڷ���s.end();
    // iterator find(T value);
    cout << "���ҵ���ֵ:" << *s6.find(2) << endl;
    cout << "�Ƿ���ҵ�:" << (s6.find(0) != s6.end()) << endl;
    // ͳ�Ƹ���
    // int count(T value);
    cout << "����:" << s6.count(2) << endl;
    cout << "����:" << s6.count(0) << endl;

    /* �Զ������� */
    set<int, Desc> s7;
    s7.insert(3);
    s7.insert(1);
    s7.insert(5);
    s7.insert(2);
    s7.insert(4);
    print2(s7);

    /* �Զ����������� */
    set<Person044, Person044Sort> s8;
    s8.insert(Person044("ck", 1998));
    s8.insert(Person044("kk", 1990));
    s8.insert(Person044("ck", 2008));
    print3(s8);

    /* set��multiset */
    set<int> s9;
    pair<set<int>::iterator, bool> r1 = s9.insert(1);
    pair<set<int>::iterator, bool> r2 = s9.insert(1);
    print(s9);
    cout << "��һ�β����Ƿ�ɹ�:" << r1.second << ",�ڶ��β����Ƿ�ɹ�:" << r2.second << endl;
    multiset<int> s10;
    // ����
    // iterator insert(T& value);
    s10.insert(1);
    s10.insert(1);
    print4(s10);

}
