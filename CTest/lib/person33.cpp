#include<iostream>
#include"person33.h"
using namespace std;

// ʵ��
template<class NameType, class YearType>
Person33<NameType, YearType>::Person33(NameType name, YearType year)
{
    this->name = name;
    this->year = year;
}

template<class NameType, class YearType>
void Person33<NameType, YearType>::print()
{
    cout << "������" << name << "�������꣺" << year << endl;
}
