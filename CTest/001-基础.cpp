// ���ÿ⣬<>��ϵͳ�⣬""�Ǳ��ؿ�
// ���ù��ܣ�����iostream������
#include<iostream>
#include"lib/fun.h"
// ʹ��#define���峣��
#define PI 3.1415926

// ���������ռ�
using namespace std;

// �����ṹ��
struct Student
{
    // ����
    string name;
    // �Ա�
    bool gender;
    // ������
    int year;
};

// ʹ��ָ�봫��ֵ�����Խ�ʡ�ڴ�
// ʹ��const���β��������Է�ֹ�����
void printStudent(const struct Student* s)
{
    // ʹ��`->`������ָ��ṹ���е�����
    cout << "������" << s->name << "���Ա�" << s->gender << "�������꣺" << s->year << endl;
}

// ջ
// ���غ����ھֲ������ĵ�ַ
int* stack()
{
    int a = 10;
    return &a;
}

// ��
int* heap()
{
    // ʹ��new�ؼ��֣��������ѣ�����һ����ַ����ָ�����
    int* p = new int(20);
    return p;
}

void main001()
{
    /* ���� */
    // cout�����<<���ƴ�ӣ�endl����
    cout << "Hello," << " World !" << endl;
    // ��ͣ
    system("pause");
    // ���峤���α���
    long a = 111;
    cout << "intռ�ÿռ�Ϊ��" << sizeof(int) << "�ֽ�" << "������aռ�ÿռ�Ϊ��" << sizeof(a) << "�ֽ�" << endl;
    // �����ַ�������
    string str;
    // ����������뵽����str�����з���������
    cout << "�������ַ�����";
    cin >> str;
    cout << "������ַ���Ϊ��\"" << str << "\"" << endl;
    // ���ú���
    print(222);
    // ʹ��const���峣��
    const double e = 2.718281828;
    cout << "�У�" << PI << "��e��" << e << endl;

    /* ָ�� */
    int b = 333;
    // ʹ��`ԭ�������� * ָ�������`������ָ��
    // ʹ��`&����`����ȡ�ñ����ĵ�ַ
    int* p = &b;
    // ʹ��`*ָ�������`����ȡԭ������ֵ
    cout << "����b�ĵ�ַΪ��" << p << "��ֵΪ��" << *p << endl;
    // ����ָ����ʲô���ͣ�32λռ��4�ֽڣ�64λռ��8�ֽ�
    cout << "ָ��pռ��" << sizeof(p) << "�ֽ�" << endl;
    // ��ָ�룬ָ���ַ0(NULL)��һ�����ڳ�ʼ����ʱ��ֵ
    // ��ַ0-255��ϵͳ�ڴ棬���ɷ���
    int* p1 = NULL;
    cout << "����p1�ĵ�ַΪ��" << p1 << endl;
    // Ұָ�룬ָ����Լ�����ĵ�ַ�����ɷ���
    int* p2 = (int*)0x1234;
    // ǿ�Ʒ��ʻᱨ��
    // cout << "����p2�ĵ�ַΪ��" << *p2 << endl;

    /* const����ָ�� */
    // `����ָ��`��ָ����޸ģ�ֵ�����޸ģ��൱��(const int)*
    const int* p3 = &b;
    cout << "ָ��p3��ֵ(b)��" << *p3 << endl;
    // *p3�������޸ģ��������ᱨ��
    // *p3 = 444;
    // ���ǿ����޸ı���b��ֵ
    b = 444;
    cout << "ָ��p3��ֵ(b)��" << *p3 << endl;
    // �޸�ָ��
    int c = 555;
    p3 = &c;
    cout << "ָ��p3��ֵ(c)��" << *p3 << endl;
    // `ָ�볣��`��ֵ�����޸ģ�ָ�벻���޸ģ��൱��(int)* const
    int* const p4 = &c;
    cout << "ָ��p4��ֵ(c)��" << *p4 << endl;
    // �޸�ֵ
    *p4 = 666;
    cout << "ָ��p4��ֵ��" << *p4 << endl;
    // �����޸�ָ�룬�������ᱨ��
    // p4 = &b;
    // const����ָ��ͳ�����ֵ��ָ�붼�����޸ģ�(const int)* const
    const int* const p5 = &c;
    cout << "ָ��p5��ֵ(c)��" << *p5 << endl;

    /* ָ������� */
    int arr[] = { 1,2,3,4,5 };
    // ָ��ָ�����飬���ü�&
    int* p6 = arr;
    // ���ʵ��ǵ�һ��Ԫ��
    cout << "arr[0]��" << *p6 << endl;
    cout << "arr[]��";
    for (int i = 0; i < 5; i++)
    {
        cout << *p6 << ",";
        // ָ��+1��������һ��Ԫ��
        p6++;
    }
    cout << endl;

    /* ָ��ͺ��� */
    int num1 = 1111, num2 = 22222;
    // ֵ���ݣ����ı�ԭ����
    swap01(num1, num2);
    cout << "num1��" << num1 << "��num2��" << num2 << endl;
    // ָ�봫�ݣ���ı�ԭ����
    swap02(&num1, &num2);
    cout << "num1��" << num1 << "��num2��" << num2 << endl;

    /* ָ��ͽṹ�� */
    Student s = { "ck",true,1998 };
    // ʹ��`.`�����ʽṹ���е�����
    cout << "������" << s.name << "���Ա�" << s.gender << "�������꣺" << s.year << endl;
    printStudent(&s);

    /* ָ��Ͷ�ջ */
    // ջ��ϵͳ�Զ��ͷ�
    // �������н����󣬾ֲ������ᱻ�ͷŵ�
    int* p7 = stack();
    // ��һ�λ�ȡ����ȷ����ֵ��������ס��
    cout << *p7 << endl;
    // �ڶ��λ�ȡ�Ǵ���ģ��ѱ��ͷ�(x86)
    cout << *p7 << endl;
    // �ѣ��ֶ��ͷ�
    int* p8 = heap();
    // �������ж��ٴΣ������������
    cout << *p8 << endl;
    cout << *p8 << endl;
    // ʹ�ùؼ���deleteȥ�ͷ��ڴ�
    delete p8;
    // �ٴζ�ȡ���ᱨ��
    // cout << *p8 << endl;
}
