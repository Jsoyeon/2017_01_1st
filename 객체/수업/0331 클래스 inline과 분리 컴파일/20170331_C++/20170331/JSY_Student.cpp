#include <iostream>
#include <string>
using namespace std;
#include "JSY_Student.h"	//using �Ʒ����� �� ���� ����!!

	Student::Student() {}  
	Student::~Student()  { cout<<this->name<<"�� �̸��� ���� ��ü�� �Ҹ�˴ϴ�."<<endl;}  
	Student::Student(int n,string na)  { no = n; name = na; }  
	void Student::setNum(int n)   {  no = n; }	//�Լ� ������ ����
	void Student::setName(string na)  { name = na; }
	int Student::getNo()   { return no; }
	string Student::getName()  {  return name; }