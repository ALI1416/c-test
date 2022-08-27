#pragma once
#ifndef __MY_ARRAY_H__
#define __MY_ARRAY_H__

/// <summary>
/// �Զ���������
/// </summary>
/// <typeparam name="T">��������</typeparam>
template<class T>
class MyArray
{
private:
    // ����
    int capacity;
    // ��С
    int size;
    // �����׵�ַ
    T* data;

public:
    /// <summary>
    /// ���캯��
    /// </summary>
    /// <param name="capacity">����</param>
    MyArray(int capacity)
    {
        cout << this << " ���캯��" << endl;
        this->capacity = capacity;
        this->size = 0;
        this->data = new T[capacity];
    }

    /// <summary>
    /// ��������
    /// </summary>
    /// <param name="arr">ԭ����</param>
    MyArray(const MyArray& arr)
    {
        cout << this << " ��������" << endl;
        this->capacity = arr.capacity;
        this->size = arr.size;
        // �����������
        this->data = new T[arr.capacity];
        // ��ֵ���ƹ���
        for (int i = 0; i < size; i++)
        {
            this->data[i] = arr.data[i];
        }
    }

    /// <summary>
    /// ����=������
    /// </summary>
    /// <param name="arr">ԭ����</param>
    /// <returns>MyArray</returns>
    MyArray& operator=(const MyArray& arr)
    {
        cout << this << " ����=������" << endl;
        /* 1.���� */
        // �ͷŶ�������
        if (this->data != NULL)
        {
            delete[] this->data;
            this->data = NULL;
        }
        /* 2.�������� */
        this->capacity = arr.capacity;
        this->size = arr.size;
        // �����������
        this->data = new T[arr.capacity];
        // ��ֵ���ƹ���
        for (int i = 0; i < size; i++)
        {
            this->data[i] = arr.data[i];
        }
        // 3.����*this
        return *this;
    }

    // ��������
    ~MyArray()
    {
        cout << this << " ��������" << endl;
        // �ͷŶ�������
        if (this->data != NULL)
        {
            delete[] this->data;
            this->data = NULL;
        }
    }

    /// <summary>
    /// ���뵽β��
    /// </summary>
    /// <param name="v">��ֵ</param>
    void push(const T& v)
    {
        // ��������
        if (this->size == this->capacity)
        {
            return;
        }
        // ���뵽β����size++
        this->data[this->size++] = v;
    }

    /// <summary>
    /// ����β��ֵ
    /// </summary>
    /// <returns>β��ֵ</returns>
    T& pop()
    {
        // û��ֵ���׳��쳣�ַ���
        if (this->size == 0)
        {
            throw "���鳤��Ϊ0";
        }
        size--;
        // ����β��ֵ
        return data[this->size];
    }

    /// <summary>
    /// ��β��ɾ��
    /// </summary>
    void del()
    {
        // û��ֵ���׳��쳣�ַ���
        if (this->size == 0)
        {
            throw "���鳤��Ϊ0";
        }
        size--;
    }

    /// <summary>
    /// �±���ʺ��޸�
    /// </summary>
    /// <param name="index">�±�</param>
    /// <returns>�±��Ӧ��ֵ</returns>
    T& operator[](int index)
    {
        return this->data[index];
    }

    /// <summary>
    /// ��������
    /// </summary>
    /// <returns></returns>
    int getCapacity()
    {
        return this->capacity;
    }

    /// <summary>
    /// ���ش�С
    /// </summary>
    /// <returns></returns>
    int getSize()
    {
        return this->size;
    }

};

#endif
