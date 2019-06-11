/*
#include <iostream>
#include <string>
using namespace std;

class Student{
public:
int no;					//멤버 변수 default 가 private이기 때문에 main에서 부르면 오류난다
string name;
};

int main()
{
Student S1;				//1번 객체
S1.no=20164260;
S1.name="Soyeon";
cout<<"My school number is "<<S1.no<<endl;
cout<<"My name is "<<S1.name<<endl;

Student S2;				//2번 객체
S2.no=3221;
S2.name="Yul";
cout<<"My school number is "<<S2.no<<endl;
cout<<"My name is "<<S2.name<<endl;

return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student{
private:			//이 클래스에서만 씀
int no;
string name;
public:				//private로 하면 main에서 오류나니까 멤버함수를 이용
void setNo(int n) {	no = n;	}	// return값이 없으니 void
void setName(string na)	{	name = na;	}
int getNo()	{return no;}
string getName() {return name;}
};

int main()
{
Student S1;				//1번 객체
S1.setNo(20164260);
S1.setName("Soyeon");
//S1.no=20164260;
//S1.name="Soyeon";
cout<<"My school number is "<<S1.getNo()<<endl;		//함수 뒤에 반드시 ()!!
cout<<"My name is "<<S1.getName()<<endl;

Student S2;				//2번 객체
S2.setNo(3221);
S2.setName("Yul");
//S2.no=3221;
//S2.name="Yul";
cout<<"My school number is "<<S2.getNo()<<endl;
cout<<"My name is "<<S2.getName()<<endl;

return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student{					//클래스
private:
int no;						//no=0, naume=null로 초기화됨 (내부적으로 돌아가는 생성자가 있기 때문)	디폴트값 Student() {}
string name;
public:
Student(int n, string na) {no = n; name = na;}	//생성자는 클래스 이름하고 똑같이
void setNo(int n) {	no = n;	}					//멤버 함수
void setName(string na)	{	name = na;	}
int getNo()	{return no;}
string getName() {return name;}
};

int main()
{
Student S1(20164260, "Soyeon");			//객체 만들어지니 생성자 S1(0, null)
//S1.setNo(20164260);
//S1.setName("Soyeon");
cout<<"My school number is "<<S1.getNo()<<endl;
cout<<"My name is "<<S1.getName()<<endl;
Student S2(3221, "Yul");								//디폴트 값으로 감
//S2.setNo(3221);
//S2.setName("Yul");
cout<<"My school number is "<<S2.getNo()<<endl;
cout<<"My name is "<<S2.getName()<<endl;

return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student{
private:
int no;
string name;
public:
Student() {}	//S3때문에 디폴트 생성자를 써야 함 생성자는 return 자체가 없기 때문에 앞에 안 적음 void도 틀림
Student(int n, string na) {no = n; name = na;}
void setNo(int n) {	no = n;	}
void setName(string na)	{	name = na;	}
int getNo()	{return no;}
string getName() {return name;}
};

int main()
{
Student S1(20164260, "Soyeon");
cout<<"My school number is "<<S1.getNo()<<endl;
cout<<"My name is "<<S1.getName()<<endl;

Student S2(3221, "Yul");
cout<<"My school number is "<<S2.getNo()<<endl;
cout<<"My name is "<<S2.getName()<<endl;

Student S3;
S3.setNo(1000);
S3.setName("Ryong");
cout<<"My school number is "<<S3.getNo()<<endl;
cout<<"My name is "<<S3.getName()<<endl;


return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int no;
	string name;
public:
	Student() {}
	~Student() { cout << this->name << " 의 객체가 소멸됩니다." << endl; }	//소멸자(오버로딩 자체 없음! / 얘도 return 없음)
																	//this->name 해야 이름이 보이며 역순으로 소멸되는 게 획인 됨.
	Student(int n, string na) { no = n; name = na; }
	void setNo(int n) { no = n; }
	void setName(string na) { name = na; }
	int getNo() { return no; }
	string getName() { return name; }
};

int main()
{
	Student S1(20164260, "Soyeon");
	cout << "My school number is " << S1.getNo() << endl;
	cout << "My name is " << S1.getName() << endl;

	Student S2(3221, "Yul");
	cout << "My school number is " << S2.getNo() << endl;
	cout << "My name is " << S2.getName() << endl;

	Student S3;
	S3.setNo(1000);
	S3.setName("Ryong");
	cout << "My school number is " << S3.getNo() << endl;
	cout << "My name is " << S3.getName() << endl;


	return 0;
}