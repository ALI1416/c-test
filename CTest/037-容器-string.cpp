#include<iostream>
// ����string�ַ�����
#include<string>
// �����׼�㷨��
#include<algorithm>
using namespace std;

// string��c++�����ַ�����������һ����
/* string��char*���� */
// char*��һ��ָ��
// string��һ���࣬�ڲ���װ��char*������������ַ�������char*�͵�����
void main()
{

    /* ���� */
    // ���ַ���(Ĭ��)
    // string();
    string s1;
    // ʹ���ַ���s��ʼ��
    // string(const char* s);
    const char* s = "�ַ���";
    string s2(s);
    // �ȼ�const char*
    string s3("string");
    // ʹ��һ��string�����ʼ����һ��string����(��������)
    // string(const string& s);
    string s4(s2);
    // ʹ��n���ַ�c��ʼ��
    // string(int n, char c);
    string s5(10, 'a');
    cout << "����:s1:" << s1 << ",s2:" << s2 << ",s3:" << s3 << ",s4:" << s4 << ",s5:" << s5 << endl;

    /* ��ֵ���� */
    // char*�����ַ�����ֵ����ǰ�ַ���
    // string& operator=(const char* s);
    string s6 = "hello";
    // �ַ�����ֵ����ǰ�ַ���
    // string& operator=(const string& s);
    string s7 = s6;
    // �ַ���ֵ����ǰ�ַ���
    // string& operator=(const char c);
    string s8;
    s8 = 'a';
    // char*�����ַ�����ֵ����ǰ�ַ���
    // string& assign(const char* s);
    string s9;
    s9.assign("world");
    // char*�����ַ�����ǰn���ַ���ֵ����ǰ�ַ���
    // string& assign(const char* s, int n);
    string s10;
    s10.assign("string", 3);
    // �ַ�����ֵ����ǰ�ַ���
    // string& assign(const string& s);
    string s11;
    s11.assign(s10);
    // ʹ��n���ַ���ֵ����ǰ�ַ���
    // string& assign(int n, char c);
    string s12;
    s12.assign(3, 'b');
    cout << "��ֵ:s6:" << s6 << ",s7:" << s7 << ",s8:" << s8 << ",s9:" << s9 << ",s10:" << s10 << ",s11:" << s11 << ",s12:" << s12 << endl;

    /* ƴ�� */
    // ��ǰ�ַ���׷��char*�����ַ���
    // string& operator+=(const char* s);
    string s13 = "he";
    s13 += "llo ";
    cout << "ƴ��:s13:" << s13;
    // ��ǰ�ַ���׷���ַ�
    // string& operator+=(const char c);
    s13 += 'w';
    cout << ",s13:" << s13;
    // ��ǰ�ַ���׷���ַ���
    // string& operator+=(const string& s);
    string s14 = "orld";
    s13 += s14;
    cout << ",s13:" << s13;
    // ��ǰ�ַ���׷��char*�����ַ���
    // string& append(const char* s);
    s13.append(" hi");
    // ��ǰ�ַ���׷��char*�����ַ�����ǰn���ַ�
    // string& append(const char* s, int n);
    s13.append(" C++++", 4);
    cout << ",s13:" << s13;
    // ��ǰ�ַ���׷���ַ���
    // string& append(const string& s);
    string s15 = " ��ã�";
    s13.append(s15);
    cout << ",s13:" << s13;
    // ��ǰ�ַ���׷���ַ�������pos��ʼ��ǰn���ַ�
    // string& append(const string& s, int pos, int n);
    string s16 = "��ã����磡��";
    // 1�����֣�ռ2���ַ�
    s13.append(s16, 6, 6);
    cout << ",s13:" << s13 << endl;

    /* ���� */
    // �������Ҳ���
    // �����ַ�����һ�γ��ֵ�λ�ã���pos��ʼ
    // int find(const string& s, int pos = 0) const;
    string s17 = "abcdefaabbccddeeffaaaffeeddbbccaafedbca";
    string s18 = "aa";
    cout << "���ҵ�һ��:pos:" << s17.find(s18);
    cout << ",pos:" << s17.find(s18, 10);
    // ����char*�����ַ�����һ�γ��ֵ�λ�ã���pos��ʼ
    // int find(const char* s, int pos = 0) const;
    cout << ",pos:" << s17.find("aa");
    cout << ",pos:" << s17.find("aa", 10);
    // ����char*�����ַ�����ǰn���ַ��ĵ�һ�γ��ֵ�λ�ã���pos��ʼ
    // int find(const char* s, int pos, int n) const;
    cout << ",pos:" << s17.find("aaa", 0, 2);
    // �����ַ���һ�γ��ֵ�λ�ã���pos��ʼ
    // int find(const char c, int pos = 0) const;
    cout << ",pos:" << s17.find('a');
    cout << ",pos:" << s17.find('a', 10) << endl;
    // �����������
    // �����ַ������һ�γ��ֵ�λ�ã���npos��ʼ
    // int rfind(const string& s, int npos = 0) const;
    cout << "�������һ��:pos:" << s17.rfind(s18);
    cout << ",pos:" << s17.rfind(s18, 10);
    // ����char*�����ַ������һ�γ��ֵ�λ�ã���npos��ʼ
    // int rfind(const char* s, int npos = 0) const;
    cout << ",pos:" << s17.rfind("aa");
    cout << ",pos:" << s17.rfind("aa", 10);
    // ����char*�����ַ�����ǰn���ַ������һ�γ��ֵ�λ�ã���npos��ʼ
    // int rfind(const char* s, int npos, int n) const;
    cout << ",pos:" << s17.rfind("aaa", 100, 2);
    // �����ַ����һ�γ��ֵ�λ�ã���npos��ʼ
    // int rfind(const char c, int npos = 0) const;
    cout << ",pos:" << s17.rfind('a');
    cout << ",pos:" << s17.rfind('a', 10) << endl;

    /* �滻 */
    // �滻Ϊָ���ַ�������pos��ʼ��n���ַ�
    // string& replace(int pos, int n, const string& s);
    string s19 = "12345";
    s17.replace(0, 3, s19);
    cout << "�滻:s17:" << s17 << endl;
    // �滻Ϊָ��char*�����ַ�������pos��ʼ��n���ַ�
    // string& replace(int pos, int n, const char* s);
    s17.replace(10, 3, "12345");
    cout << "�滻:s17:" << s17 << endl;

}
