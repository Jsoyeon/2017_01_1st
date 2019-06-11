/*
#include <iostream>
#include <string>
using namespace std;

class Student
{
int no;       //static 아님!
string name;

public:
static int count;	//static 임!


Student(int n,string na)   //생성자임다!
{   no = n;
name = na;  }

int getNo()			//멤버 함수1
{ return no; }

string getName()		//멤버 함수2
{  return name; }
};

int Student::count=0; //클래스는 '틀'이기 때문에 Static 변수는 클래스 안에서 초기화 못함!

int main()
{
Student::count=99;
cout<<"Static var value ="<<Student::count<<endl;

Student S1(123,"TDK");
cout<<"My school number is "<<S1.getNo()<<endl;
cout<<"My name is "<<S1.getName()<<endl;
cout<<"Static var value ="<<S1.count<<endl;	//이미 99로 변경해두었기 때문에 99로 출력된다.

Student S2(4260,"JSY");
cout<<"My school number is "<<S2.getNo()<<endl;
cout<<"My name is "<<S2.getName()<<endl;
cout<<"Static var value ="<<S2.count<<endl;	//99를 공통으로 쓴다.
S1.count=55;

Student S3(3221,"SY");
cout<<"My school number is "<<S3.getNo()<<endl;
cout<<"My name is "<<S3.getName()<<endl;
cout<<"Static var value ="<<S3.count<<endl;	//여기서만 55로 변경됨!

return 0;
}


*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
	int no;       //static 아님!
	string name;
	static int count;	//private로 이동함, 멤버끼리는 접근가능함
public:
	Student(int n, string na)   //생성자임다!
	{
		no = n;	   name = na; ++count;
	}	//위에서 멤버끼리는 접근가능하다고 했으니 가능, 객체는 다 생성자 도니까 count 증가

	static int getCount()	//객체없이 사용 가능. 호출시 Student::getCount()
	{
		return count;
	}		//static만 리턴가능 static은 Prog 끝날 때 까지 살아있음

	int getNo()
	{
		return no;
	}

	string getName()
	{
		return name;
	}
};

int Student::count = 0; //클래스는 '틀'이기 때문에 Static 변수는 클래스 안에서 초기화 못함!

int main()
{

	Student S1(123, "TDK");
	cout << "My school number is " << S1.getNo() << endl;
	cout << "My name is " << S1.getName() << endl;
	cout << "Static fun value =" << Student::getCount() << endl;

	Student S2(4260, "JSY");
	cout << "My school number is " << S2.getNo() << endl;
	cout << "My name is " << S2.getName() << endl;
	cout << "Static fun value =" << Student::getCount() << endl;

	Student S3(3221, "SY");
	cout << "My school number is " << S3.getNo() << endl;
	cout << "My name is " << S3.getName() << endl;
	cout << "Static fun value =" << Student::getCount() << endl;

	return 0;
}