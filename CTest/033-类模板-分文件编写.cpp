#include<iostream>
using namespace std;
// �����ģ����ļ���д��ֻ�ܰ���cpp�ļ���h�ļ���Ч
#include"lib/person33.cpp"
// ��������ʵ�֣��ŵ�ͬһ���ļ������Ϊhpp�ļ�
#include"lib/person34.hpp"

void main033()
{
    Person33<string, int> p("ck", 1998);
    p.print();
    Person34<string, int> p2("cc", 2222);
    p2.print();
}
