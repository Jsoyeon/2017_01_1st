/*
//이 소스들 2차 레포트에 넣기~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:)
//****************************************Upcasting 이후 일반적인 함수 오버로딩 현상****************************************
#include <iostream>
#include <string>
using namespace std;

class Student	{
	int no;          
	string name;
public:
	Student(  ){no=0; name="nobody";}
	Student(int n ,string na )   {   no = n;  name = na;  }  

	void showMe( ) {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};
class Teacher : public Student	{
	string subject;
public :
	Teacher(){subject = "Nothing";}
	Teacher(string sub) { subject = sub; }
	void showMe( ) { cout<<"Teacher Subject "<<subject<<endl; }		//클래스 Student에 있는 함수와 같은 이름의 함수!
};

int main()	{
	//Student *Ps, Os;
	//Teacher *Pt, Ot;
			//Ps=&Ot;					//Upcasting 하위 클래스 객체의 주소를 상위 클래스 포인터에 넣어줌
			//Ps->showMe();				//자기 꺼 먼저 실행함 Student에 있는 showMe로!오버로딩 (자신의 클래스의 함수 오버로딩)
	Student *Ps = new Teacher("Java");	//Upcasting
			Ps->showMe();				//자신의 클래스 Student의 함수 오버로딩
}

//****************************************가상함수로 만들기 - virtual(오버라이딩)****************************************
#include <iostream>
#include <string>
using namespace std;

class Student	{
	int no;          
	string name;
public:
	Student(  ){no=0; name="nobody";}
	Student(int n ,string na )   {   no = n;  name = na;  }  

	virtual void showMe( ) {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};
class Teacher : public Student	{
	string subject;
public :
	Teacher(){subject = "Nothing";}
	Teacher(string sub) { subject = sub; }
	void showMe( ) { cout<<"Teacher Subject "<<subject<<endl; } //얘의 virtual은 생략 가능함!
};

int main()	{
	//Student *Ps, Os;
	//Teacher *Pt, Ot;
			//Ps=&Ot;					//Upcasting
			//Ps->showMe();				//virtual 키워드로 인한 가상함수화
	Student *Ps = new Teacher("Java");	//Upcasting
			Ps->showMe();				//virtual 키워드로 인한 가상함수 - 오버라이딩 컴파일이 아닌 실행 시에 바인딩 시킨다
}
//****************************************virtual(오버라이딩)이지만 상위 클래스 virtual 함수를 사용할 때 (::)****************************************
#include <iostream>
#include <string>
using namespace std;

class Student	{
	int no;          
	string name;
public:
	Student(  ){no=0; name="nobody";}
	Student(int n ,string na )   {   no = n;  name = na;  }  

	virtual void showMe( ) {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};
class Teacher : public Student	{
	string subject;
public :
	Teacher(){subject = "Nothing";}
	Teacher(string sub) { subject = sub; }
	void showMe( ) { cout<<"Teacher Subject "<<subject<<endl; } //얘의 virtual은 생략 가능함!
};

int main()	{
	//Student *Ps, Os;
	//Teacher *Pt, Ot;
			//Ps=&Ot;					//Upcasting
			//Ps->showMe();				//virtual 키워드로 인한 가상함수화
	Student *Ps = new Teacher("Java");	//Upcasting
			Ps->showMe();				//virtual 키워드로 인한 가상함수 - 오버라이딩 컴파일이 아닌 실행 시에 바인딩 시킨다
			Ps->Student::showMe();		//virtual 상위 함수 실행 (오버라이딩 아님!) 오버로딩임!
}

//순수가상함수(1) - 일반 함수의 오버로딩
#include<iostream>
#include<string>
using namespace std;

class School{
public:
	void SignSub(string name){cout<<"This school class is "<<name<<endl;}
	void ShowMe(){cout<<"This is School ShowMe..."<<endl;}
};
class Student1 : public School{
	int no;
	string name;
public:
	Student1(){no=0; name="Nobody";}
	Student1(int n, string na){no=n; name=na;}
	void SignSub(string subName){cout<<"My subName is "<<subName<<endl;}
	void showMe() {cout<<"My school number is "<<no<<endl;	cout<<"My name is "<<name<<endl;   }
};
class Student2 : public School{
	string no;
	string name;
public:
	Student2(){no="010-****-****"; name="NoBrand";}
	Student2(string n, string na){no=n; name=na;}
	void SignSub(string subPhone){cout<<"My subPhone is "<<subPhone<<endl;}
	void showMe() {cout<<"My Phone number is "<<no<<endl;	cout<<"My Phone name is "<<name<<endl;   }
};
int main(){
	School *Ps = new Student1(4260, "JSY");			//Upcasting //주소 넘겨주지 않아도 업캐스팅 된 상태!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
	//Ps는 아직 살아 있기에 아래서 Ps를 그대로 쓰면 오류난다 (포인터 재초기화 오류)
	//School *Ps = new Student2("010-1234-5678", "SAMSUNG");
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}
//순수가상함수(2) - 가상함수로 수정 - 오버라이딩
#include<iostream>
#include<string>
using namespace std;

class School{
public:
	virtual void SignSub(string name){cout<<"This school class is "<<name<<endl;}
	virtual void ShowMe(){cout<<"This is School ShowMe..."<<endl;}
};
class Student1 : public School{
	int no;
	string name;
public:
	Student1(){no=0; name="Nobody";}
	Student1(int n, string na){no=n; name=na;}
	virtual void SignSub(string subName){cout<<"My subName is "<<subName<<endl;}
	virtual	void showMe() {cout<<"My school number is "<<no<<endl;	cout<<"My name is "<<name<<endl;   }
};
class Student2 : public School{
	string no;
	string name;
public:
	Student2(){no="010-****-****"; name="NoBrand";}
	Student2(string n, string na){no=n; name=na;}
	virtual void SignSub(string subPhone){cout<<"My subPhone is "<<subPhone<<endl;}
	virtual void showMe() {cout<<"My Phone number is "<<no<<endl;	cout<<"My Phone name is "<<name<<endl;   }
};
int main(){
	School *Ps = new Student1(4260, "JSY");			//Upcasting //주소 넘겨주지 않아도 업캐스팅 된 상태!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}
//순수가상함수(3) - 순수 가상함수 수정 - virtual void f()=0;
#include<iostream>
#include<string>
using namespace std;

class School{
public:
	virtual void SignSub(string name)=0;
	virtual void ShowMe()=0;
};
class Student1 : public School{
	int no;
	string name;
public:
	Student1(){no=0; name="Nobody";}
	Student1(int n, string na){no=n; name=na;}
	void SignSub(string subName){cout<<"My subName is "<<subName<<endl;}
	void showMe() {cout<<"My school number is "<<no<<endl;	cout<<"My name is "<<name<<endl;   }
};
class Student2 : public School{
	string no;
	string name;
public:
	Student2(){no="010-****-****"; name="NoBrand";}
	Student2(string n, string na){no=n; name=na;}
	void SignSub(string subPhone){cout<<"My subPhone is "<<subPhone<<endl;}
	void showMe() {cout<<"My Phone number is "<<no<<endl;	cout<<"My Phone name is "<<name<<endl;   }
};
int main(){
	//School St; //순수가상함수 있는 추상클래스 객체 오류 But, 포인터는 괜찮음
	School *Ps = new Student1(4260, "JSY");			//Upcasting //주소 넘겨주지 않아도 업캐스팅 된 상태!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}*/

//순수가상함수(4) - 순수가상함수 - 추상클래스 - 순수가상함수를 파생클래스에서 구현하지 않으면 파생클래스도 추상클래스가 된다!(추상클래스는 절대 객체 생성ㄴㄴ)
#include<iostream>
#include<string>
using namespace std;

class School{
public:
	virtual void SignSub(string name)=0;
	virtual void ShowMe()=0;
};
class Student1 : public School{		//이 클래스도 추상클래스라 객체 생성 불가
	int no;
	string name;
public:
	Student1(){no=0; name="Nobody";}
	Student1(int n, string na){no=n; name=na;}
	//상위 추상클래스를 상속 받았는 데 순수 가상함수 구현하지 않으면 이또한 추상클래스
};
class Student2 : public School{
	string no;
	string name;
public:
	Student2(){no="010-****-****"; name="NoBrand";}
	Student2(string n, string na){no=n; name=na;}
	virtual void SignSub(string subPhone){cout<<"My subPhone is "<<subPhone<<endl;}
	virtual void showMe() {cout<<"My Phone number is "<<no<<endl;	cout<<"My Phone name is "<<name<<endl;   }
};
int main(){
	//School St; //순수가상함수 있는 추상클래스 객체 오류 But, 포인터는 괜찮음
	School *Ps = new Student1(4260, "JSY");			//Upcasting //주소 넘겨주지 않아도 업캐스팅 된 상태!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}
