#include<iostream>
#include<stack>
using namespace std;

// ջ(Stack) �Ƚ���� FILO(First In Last Out)
void main040()
{
    /* ���� */
    // �޲�(Ĭ��)
    // stack<T>();
    stack<int> s1;
    s1.push(123);
    cout << s1.top() << endl;
    // ����
    // stack<T>(const stack<T>& s);
    stack<int> s2(s1);
    cout << s2.top() << endl;

    /* ��ֵ */
    // stack��ֵ����ǰstack
    // stack& operator=(const stack& s);
    stack<int> s3 = s2;
    cout << s3.top() << endl;

    /* ��ȡ */
    stack<int> s4;
    // ѹ��Ԫ��
    // void push(T& value);
    s4.push(123);
    s4.push(456);
    s4.push(789);
    // ȡ��Ԫ��
    // T& top();
    cout << s4.top() << endl;
    // ����Ԫ��
    // void pop();
    s4.pop();
    cout << s4.top() << endl;

    /* ��С���� */
    stack<int> s5;
    // �ж�ջ�Ƿ�Ϊ��
    // bool empty();
    // ����ջ�ĳ���
    // int size();
    cout << "empty:" << s5.empty() << ",size:" << s5.size() << endl;
    s5.push(1);
    s5.push(4);
    s5.push(7);
    cout << "empty:" << s5.empty() << ",size:" << s5.size() << endl;

}
