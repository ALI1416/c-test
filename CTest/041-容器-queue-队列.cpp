#include<iostream>
#include<queue>
using namespace std;

// ����(Queue) �Ƚ��ȳ� FIFO(First In First Out)
void main041()
{
    /* ���� */
    // �޲�(Ĭ��)
    // queue<T>();
    queue<int> q1;
    q1.push(123);
    cout << q1.front() << endl;
    // ����
    // queue<T>(const queue<T>& q);
    queue<int> q2(q1);
    cout << q2.front() << endl;

    /* ��ֵ */
    // queue��ֵ����ǰqueue
    // queue& operator=(const queue& q);
    queue<int> q3 = q2;
    cout << q3.front() << endl;

    /* ��ȡ */
    queue<int> q4;
    // ѹ��Ԫ��
    // void push(T& value);
    q4.push(123);
    q4.push(456);
    q4.push(789);
    // ȡ��ͷ��Ԫ��
    // T& front();
    cout << q4.front() << endl;
    // ȡ��β��Ԫ��
    // T& back();
    cout << q4.back() << endl;
    // ����ͷ��Ԫ��
    // void pop();
    q4.pop();
    cout << q4.front() << endl;

    /* ��С���� */
    queue<int> q5;
    // �ж϶����Ƿ�Ϊ��
    // bool empty();
    // ���ض��еĳ���
    // int size();
    cout << "empty:" << q5.empty() << ",size:" << q5.size() << endl;
    q5.push(1);
    q5.push(4);
    q5.push(7);
    cout << "empty:" << q5.empty() << ",size:" << q5.size() << endl;

}
