#include<iostream>
// ���ú�������ͷ�ļ�
#include<functional>
using namespace std;

// ���ú�������(�º���)
// ��������ϵ���߼�
void main047()
{
    /* �����º��� */
    // ���ܣ�ʵ����������
    // ԭ�ͣ�plus(��)��minus(��)��multiplies(��)��divides(��)��modulus(ģ)��negate(��)
    // ����negate��һԪ���㣬�������Ƕ�Ԫ����
    // ��
    // T negate<T>(T& t);
    negate<int> n;
    cout << n(123) << endl;
    // ��
    // T plus<T>(T& t1, T& t2);
    plus<int> p;
    cout << p(123, 456) << endl;
    // ��
    // T minus<T>(T& t1, T& t2);
    minus<int> mi;
    cout << mi(123, 456) << endl;
    // ��
    // T multiplies<T>(T& t1, T& t2);
    multiplies<int> mu;
    cout << mu(123, 456) << endl;
    // ��
    // T divides<T>(T& t1, T& t2);
    divides<int> d;
    cout << d(456, 123) << endl;
    // ģ
    // T modulus<T>(T& t1, T& t2);
    modulus<int> mo;
    cout << mo(456, 123) << endl;

    /* ��ϵ�º��� */
    // ���ܣ�ʵ�ִ�С�ж�
    // ԭ�ͣ�equal_to(����)��not_equal_to(����)��greater(����)��greater_equal(���ڵ���)��less(С��)��less_equal(С�ڵ���)
    // ����
    // bool equal_to<T>(T& t1, T& t2);
    equal_to<int> eq;
    cout << eq(123, 456) << endl;
    // ����
    // bool not_equal_to<T>(T& t1, T& t2);
    not_equal_to<int> neq;
    cout << neq(123, 456) << endl;
    // ����
    // bool greater<T>(T& t1, T& t2);
    greater<int> gt;
    cout << gt(123, 456) << endl;
    // ���ڵ���
    // bool greater_equal<T>(T& t1, T& t2);
    greater_equal<int> gte;
    cout << gte(123, 456) << endl;
    // С��
    // bool less<T>(T& t1, T& t2);
    less<int> lt;
    cout << lt(123, 456) << endl;
    // С�ڵ���
    // bool less_equal<T>(T& t1, T& t2);
    less_equal<int> lte;
    cout << lte(123, 456) << endl;

    /* �߼��º��� */
    // ���ܣ�ʵ���߼�����
    // ԭ�ͣ�logical_and(�߼���)��logical_or(�߼���)��logical_not(�߼���)
    // ����logical_not��һԪ���㣬�������Ƕ�Ԫ����
    // �߼���
    // bool logical_not<T>(T& t);
    logical_not<bool> logNot;
    cout << logNot(true) << endl;
    // �߼���
    // bool logical_and<T>(T& t1, T& t2);
    logical_and<bool> logAnd;
    cout << logAnd(true, false) << endl;
    // �߼���
    // bool logical_or<T>(T& t1, T& t2);
    logical_or<bool> logOr;
    cout << logOr(true, false) << endl;

}
