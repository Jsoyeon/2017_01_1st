#include <iostream>
#include <string>
using namespace std;
#include "JSY_Student.h"	//using 아래에다 안 쓰면 오류!!

	Student::Student() {}  
	Student::~Student()  { cout<<this->name<<"의 이름을 가진 객체가 소멸됩니다."<<endl;}  
	Student::Student(int n,string na)  { no = n; name = na; }  
	void Student::setNum(int n)   {  no = n; }	//함수 밖으로 꺼냄
	void Student::setName(string na)  { name = na; }
	int Student::getNo()   { return no; }
	string Student::getName()  {  return name; }