#include<iostream>
// �ļ�����ͷ�ļ�fstream������д
// ifstream���ļ�
// ofstreamд�ļ�
#include<fstream>
#include<string>
using namespace std;

void main024()
{
    /* д�ļ� */
    // �����ļ����������
    ofstream ofs;
    // ���ļ�
    // ����(����ļ�·��,д��ģʽ)
    // ��дģʽ�����ģʽ��ʹ��|����
    // ios::out     д�ļ�(����)
    // ios::app     д�ļ�(׷��)
    // ios::in      ���ļ�
    // ios::binary  �����Ʒ�ʽ
    // ios::trunc   д�ļ�(����)
    // ios::ate     �ļ�β
    ofs.open("/1.txt", ios::out);
    // д������
    ofs << "Hello, World !" << endl;
    ofs << "Hello, C++ !" << endl;
    // �ر�
    ofs.close();

    /* ���ļ� */
    ifstream ifs;
    ifs.open("/1.txt", ios::in);
    // ����ļ��򿪳ɹ�
    if (ifs.is_open())
    {
        // ���ļ�
        // 1.���ݷָ�������ȡ(�ո񡢻���)
        //char buf1[1024] = {0};
        //while (ifs >> buf1)
        //{
        //    cout << buf1 << endl;
        //}
        // 2.һ�ζ�ȡһ��
        //char buf2[1024] = {0};
        //while (ifs.getline(buf2, sizeof(buf2)))
        //{
        //    cout << buf2 << endl;
        //}
        // 3.ʹ��string�⣬һ�ζ�ȡһ��(��Ҫ����string��)
        string buf3;
        while (getline(ifs, buf3))
        {
            cout << buf3 << endl;
        }
        // 4.һ�ζ�ȡһ���ֽ�(���Ƽ�)
        //char buf4;
        //while ((buf4 = ifs.get()) != EOF)
        //{
        //     cout << buf4;
        //}
    }
    ifs.close();
}
