/*
// ****************************** public 상속 ********************************
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	int no;          
	string name;
public:
	Student(  ){  }
	Student(int n ,string na )   {   no = n;  name = na;  }  
	void setNo(int n) { no =n ;}
	void setName(string na) { name = na; }
	int getNo( ) { return no; }
	string getName( ) {  return name; }
	void showStudent() {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};

class Teacher: public Student{
private:
	string subject;
public:
	Teacher() {}
	Teacher(string sub) {subject = sub;}
	void setSubject(string sub) {subject = sub;}
	void showSubject() {cout<<"Teacher subject = "<<subject<<endl;}
};

int main(){
	Teacher Te;
			Te.setNo(4260);				//상위Base class 접근
			Te.setName("JSY");			//상위Base class 접근
			Te.setSubject("C++");
			Te.showStudent();			//상위Base class 접근
			Te.showSubject();
}

// ****************************** private 상속 ********************************
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	int no;          
	string name;
public:
	Student(  ){  }
	Student(int n ,string na )   {   no = n;  name = na;  }  
	void setNo(int n) { no =n ;}
	void setName(string na) { name = na; }
	int getNo( ) { return no; }
	string getName( ) {  return name; }
	void showStudent() {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};

class Teacher: private Student{
private:
	string subject;
public:
	Teacher() {}
	Teacher(string sub) {subject = sub;}
	void setSubject(string sub) {subject = sub;}
	void showSubject() {cout<<"Teacher subject = "<<subject<<endl;}
	// 2) 공개화 된 멤버 함수 만들어서 Student의 멤버 함수를 직접 호출~
	void callNo(int n){setNo(n);}			// 1-1)setNo()함수는 상위public이나 상속시 private로 변경됨
	void callName(string s){setName(s);}
	void callShow(){showStudent();}
};	// 1) class Student의 공개된 멤버 함수가 모두 private 되어서 class Teacher은 못 읽음

int main(){
	Teacher Te;
			//Te.setNo(4260);				//상위Base class 접근 error
			  Te.callNo(4260);				//public 멤버 함수 생성한 후 호출
			//Te.setName("JSY");			//상위Base class 접근 error
			  Te.callName("JSY");			//public 멤버 함수 생성한 후 호출
			Te.setSubject("C++");
			  Te.callShow();				//public 멤버 함수 생성한 후 호출
			//Te.showStudent();				//상위Base class 접근 error
			Te.showSubject();
}

// ****************************** protected 상속 ********************************
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	int no;          
	string name;
public:
	Student(  ){  }
	Student(int n ,string na )   {   no = n;  name = na;  }  
	void setNo(int n) { no =n ;}
	void setName(string na) { name = na; }
	int getNo( ) { return no; }
	string getName( ) {  return name; }
	void showStudent() {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};

class Teacher: protected Student{
private:
	string subject;
public:
	Teacher() {}
	Teacher(string sub) {subject = sub;}
	void setSubject(string sub) {subject = sub;}
	void showSubject() {cout<<"Teacher subject = "<<subject<<endl;}
	// 2) 공개화 된 멤버 함수 만들어서 Student의 멤버 함수를 직접 호출~
	void callNo(int n){setNo(n);}			// 1-1)setNo()함수는 상위public이나 상속시 protected로 변경됨
	void callName(string s){setName(s);}
	void callShow(){showStudent();}
};	// 1) class Student의 공개된 멤버 함수가 모두 private 되어서 class Teacher은 못 읽음

int main(){
	Teacher Te;
			//Te.setNo(4260);				//상위Base class 접근 error
			  Te.callNo(4260);				//public 멤버 함수 생성한 후 호출
			//Te.setName("JSY");			//상위Base class 접근 error
			  Te.callName("JSY");			//public 멤버 함수 생성한 후 호출
			Te.setSubject("C++");
			  Te.callShow();				//public 멤버 함수 생성한 후 호출
			//Te.showStudent();				//상위Base class 접근 error
			Te.showSubject();
}

// ****************************** 상속 클래스 멤버 변수의 private, protected 상속 차이 ********************************
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	int no;          
	string name;
public:
	Student(  ){  }
	Student(int n ,string na )   {   no = n;  name = na;  }  
	void setNo(int n) { no =n ;}
	void setName(string na) { name = na; }
	int getNo( ) { return no; }
	string getName( ) {  return name; }
	void showStudent() {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};

class Teacher: public Student{
private:
	string subject;
public:
	Teacher() {}
	Teacher(string sub) {subject = sub;}
	void setSubject(string sub) {subject = sub;}
	void showSubject() {cout<<"Teacher subject = "<<subject<<endl;}

	void callNo(int n){no=n;}			//error 상위 변수 no 접근 오류
	void callName(string s){name=s;}	//error 상위 변수 name 접근 오류
	void callShow(){showStudent();}
};

int main(){
	Teacher Te;

			  Te.callNo(4260);				// error 인수값 전달 상위 멤버 변수 접근 오류
			  Te.callName("JSY");	
			  Te.callShow();
}

// ****************************** 상속 클래스 멤버 변수의 private, protected 상속 차이 ********************************
#include <iostream>
#include <string>
using namespace std;

class Student{
protected:
	int no;          
	string name;
public:
	Student(  ){  }
	Student(int n ,string na )   {   no = n;  name = na;  }  
	void setNo(int n) { no =n ;}
	void setName(string na) { name = na; }
	int getNo( ) { return no; }
	string getName( ) {  return name; }
	void showStudent() {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};

class Teacher: public Student{
private:
	string subject;
public:
	Teacher() {}
	Teacher(string sub) {subject = sub;}
	void setSubject(string sub) {subject = sub;}
	void showSubject() {cout<<"Teacher subject = "<<subject<<endl;}

	void callNo(int n){no=n;}			// protected no 상속 가능
	void callName(string s){name=s;}	// protected name 상속 가능
	void callShow(){showStudent();}
};

int main(){
	Teacher Te;
			  Te.callNo(4260);			// 상속된 protected no 접근 가능
			  Te.callName("JSY");		// 상속된 protected name 접근 가능
			  Te.callShow();
}
*/

// ****************************** Upcasting과 Downcasting ********************************
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	int no;          
	string name;
public:
	Student(  ){  }
	Student(int n ,string na )   {   no = n;  name = na;  }  
	void setNo(int n) { no =n ;}
	void setName(string na) { name = na; }
	int getNo( ) { return no; }
	string getName( ) {  return name; }
	void showStudent() {
		cout<<"My school number is "<<no<<endl;
		cout<<"My name is "<<name<<endl;   }
};

class Teacher: public Student{
private:
	string subject;
public:
	Teacher() {}
	Teacher(string sub) {subject = sub;}
	void setSubject(string sub) {subject = sub;}
	void showSubject() {cout<<"Teacher subject = "<<subject<<endl;}
};

int main(){
	Teacher Te;
	Teacher *pT;

	Student *pS = &Te;					// 상위 클래스로 Upcasting
			 pS ->setNo(4260);
			 pS ->setName("JSY");
			 pS ->showStudent();
		   //pS ->setSubject("C++");	// 상위 클래스 포인터 정보 없음 (Stuent에는 showSubject가 없기 때문!)
			 ((Teacher*)pS)->setSubject("C++");		//Downcasting
}
