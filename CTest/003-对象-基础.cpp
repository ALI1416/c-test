#include<iostream>
using namespace std;
#define PI 3.14

// ����һ����
class Circle
{
    /* ����Ȩ�� */
    // ����Ȩ����3��
    // public       ����  �����ⶼ�ɷ���
    // protected    ����  ���ڿɷ��ʣ����ⲻ�ɷ���
    // private      ˽��  ���ڿɷ��ʣ����ⲻ�ɷ��ʣ����಻�ɷ���
    // �������η���Ĭ��private
public:
    /* ���� */
    // Բ�İ뾶
    int r;

    /* ���� */
    // ��ȡԲ���ܳ�
    double getCircumference()
    {
        return 2 * PI * r;
    }

    /* һ��ʹ��get / set����ȥȡֵ / ��ֵ������ʹ��private���� */
    // ��ȡԲ�İ뾶
    int getR()
    {
        return r;
    }

    // ����Բ�İ뾶
    void setR(int r)
    {
        // this��ָ�룬����ǰ����
        this->r = r;
    }

    // �ж��Ƿ���ͬһ��Բ
    // ʹ��&���ã����⸴�ƣ���ʡ�ڴ�
    bool isSame(Circle& c)
    {
        return r == c.r;
    }

};

// �ж��Ƿ���ͬһ��Բ
// ʹ��&���ã����⸴�ƣ���ʡ�ڴ�
bool isSame(Circle& c1, Circle& c2)
{
    return c1.r == c2.r;
}

void main003()
{
    Circle c1;
    // public����ֱ�Ӹ�ֵ
    c1.r = 10;
    cout << "Բ1���ܳ�Ϊ��" << c1.getCircumference() << endl;
    Circle c2;
    // ʹ��set���������Ը�ֵ
    c2.setR(20);
    cout << "Բ2�İ뾶Ϊ��" << c2.getR() << endl;
    cout << "�Ƿ�Ϊͬһ��Բ��" << isSame(c1, c2) << endl;
    cout << "�Ƿ�Ϊͬһ��Բ��" << c1.isSame( c2) << endl;
}
