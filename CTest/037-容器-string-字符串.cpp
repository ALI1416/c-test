#include<iostream>
using namespace std;

// string��c++�����ַ�����������һ����
/* string��char*���� */
// char*��һ��ָ��
// string��һ���࣬�ڲ���װ��char*������������ַ�������char*�͵�����
void main037()
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

    /* ��ֵ */
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
    //       pos:0|   5|  10|  15|  20|  25|  30|  35|
    string s17 = "abcdefaabbccddeeffaaayyyyqqqqqkkkkkk";
    //       npos:|35  |30  |25  |20  |15  |10  |5   |0
    string s18 = "ddee";
    // �������Ҳ���
    // �����ַ�����һ�γ��ֵ�λ�ã���pos��ʼ(����ǰpos���ַ�)
    // int find(const string& s, int pos = 0) const;
    cout << "���ҵ�һ��:pos:" << s17.find(s18);
    cout << ",pos:" << s17.find(s18, 10);
    // ����char*�����ַ�����һ�γ��ֵ�λ�ã���pos��ʼ
    // int find(const char* s, int pos = 0) const;
    cout << ",pos:" << s17.find("aa");
    cout << ",pos:" << s17.find("aa", 10);
    // ����Ҳ��������ص���unsigned int���ͣ���-1
    // �����ӡ��������ʾ4294967295(0xFFFF FFFF)
    // ���`���==-1`�����ӡtrue(1)
    cout << ",pos:" << s17.find("z");
    cout << ",�Ƿ��ҵ�:" << (s17.find("z") == -1);
    // ����char*�����ַ�����ǰn���ַ��ĵ�һ�γ��ֵ�λ�ã���pos��ʼ
    // int find(const char* s, int pos, int n) const;
    cout << ",pos:" << s17.find("aaa", 0, 2);
    // �����ַ���һ�γ��ֵ�λ�ã���pos��ʼ
    // int find(const char c, int pos = 0) const;
    cout << ",pos:" << s17.find('a');
    cout << ",pos:" << s17.find('a', 10) << endl;
    // �����������
    // �����ַ������һ�γ��ֵ�λ��(ֻ����ǰnpos+ָ���ַ������ȸ��ַ�)
    // int rfind(const string& s, int npos = 4294967295) const;
    cout << "�������һ��:pos:" << s17.rfind(s18);
    cout << ",pos:" << s17.rfind(s18, 20);
    // ����char*�����ַ������һ�γ��ֵ�λ��
    // int rfind(const char* s, int npos = 4294967295) const;
    cout << ",pos:" << s17.rfind("aa");
    cout << ",pos:" << s17.rfind("aaa", 10);
    // ����char*�����ַ�����ǰn���ַ������һ�γ��ֵ�λ��
    // int rfind(const char* s, int npos, int n) const;
    cout << ",pos:" << s17.rfind("aaa", 100, 2);
    // �����ַ����һ�γ��ֵ�λ��
    // int rfind(const char c, int npos = 4294967295) const;
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

    /* �Ƚ� */
    string s20 = "a";
    string s21 = "a";
    // ����ASCII����бȽ�
    // =����0��>����1��<����-1
    // int compare(const string& s) const;
    cout << "�Ƚ�:" << s20.compare(s21);
    // int compare(const char* s) const;
    cout << "," << s20.compare("b");
    cout << "," << s20.compare("A") << endl;

    /* ��ȡ */
    string s22 = "abcd";
    // ͨ��[]ȡ�ַ�
    // char& operator[](int n);
    cout << "��ȡ:" << s22[2];
    s22[2] = '3';
    // ͨ��at����ȡ�ַ�
    // char& at(int n);
    cout << "," << s22.at(2);
    s22.at(2) = '4';
    cout << "," << s22.at(2) << endl;

    /* ���� */
    string s23 = "abcde";
    // ��pos������char*�����ַ���
    // string& insert(int pos, const char* s);
    cout << "����:" << s23.insert(2, "123");
    // ��pos�������ַ���
    // string& insert(int pos, string& s);
    string s24 = "!!!";
    cout << "," << s23.insert(3, s24);
    // ��pos������n���ַ�
    // string& insert(int pos, int n, char c);
    cout << "," << s23.insert(4, 5, '+') << endl;

    /* ɾ�� */
    // ��pos��ɾ��n���ַ�(nĬ�ϵ�β��)
    // string& erase(int pos, int n = npos);
    cout << "ɾ��:" << s23.erase(4, 3);
    cout << "," << s23.erase(6) << endl;

    /* �Ӵ� */
    string s25 = "abcdef";
    // ��pos����ʼ��ȡn���ַ�(nĬ�ϵ�β��)
    // string& substr(int pos = 0, int n = npos);
    cout << "ɾ��:" << s25.substr(2, 3);
    cout << "," << s25.substr(2);
    cout << "," << s25.substr() << endl;

}
