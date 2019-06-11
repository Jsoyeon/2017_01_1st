/*
// ****************************** public ��� ********************************
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
			Te.setNo(4260);				//����Base class ����
			Te.setName("JSY");			//����Base class ����
			Te.setSubject("C++");
			Te.showStudent();			//����Base class ����
			Te.showSubject();
}

// ****************************** private ��� ********************************
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
	// 2) ����ȭ �� ��� �Լ� ���� Student�� ��� �Լ��� ���� ȣ��~
	void callNo(int n){setNo(n);}			// 1-1)setNo()�Լ��� ����public�̳� ��ӽ� private�� �����
	void callName(string s){setName(s);}
	void callShow(){showStudent();}
};	// 1) class Student�� ������ ��� �Լ��� ��� private �Ǿ class Teacher�� �� ����

int main(){
	Teacher Te;
			//Te.setNo(4260);				//����Base class ���� error
			  Te.callNo(4260);				//public ��� �Լ� ������ �� ȣ��
			//Te.setName("JSY");			//����Base class ���� error
			  Te.callName("JSY");			//public ��� �Լ� ������ �� ȣ��
			Te.setSubject("C++");
			  Te.callShow();				//public ��� �Լ� ������ �� ȣ��
			//Te.showStudent();				//����Base class ���� error
			Te.showSubject();
}

// ****************************** protected ��� ********************************
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
	// 2) ����ȭ �� ��� �Լ� ���� Student�� ��� �Լ��� ���� ȣ��~
	void callNo(int n){setNo(n);}			// 1-1)setNo()�Լ��� ����public�̳� ��ӽ� protected�� �����
	void callName(string s){setName(s);}
	void callShow(){showStudent();}
};	// 1) class Student�� ������ ��� �Լ��� ��� private �Ǿ class Teacher�� �� ����

int main(){
	Teacher Te;
			//Te.setNo(4260);				//����Base class ���� error
			  Te.callNo(4260);				//public ��� �Լ� ������ �� ȣ��
			//Te.setName("JSY");			//����Base class ���� error
			  Te.callName("JSY");			//public ��� �Լ� ������ �� ȣ��
			Te.setSubject("C++");
			  Te.callShow();				//public ��� �Լ� ������ �� ȣ��
			//Te.showStudent();				//����Base class ���� error
			Te.showSubject();
}

// ****************************** ��� Ŭ���� ��� ������ private, protected ��� ���� ********************************
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

	void callNo(int n){no=n;}			//error ���� ���� no ���� ����
	void callName(string s){name=s;}	//error ���� ���� name ���� ����
	void callShow(){showStudent();}
};

int main(){
	Teacher Te;

			  Te.callNo(4260);				// error �μ��� ���� ���� ��� ���� ���� ����
			  Te.callName("JSY");	
			  Te.callShow();
}

// ****************************** ��� Ŭ���� ��� ������ private, protected ��� ���� ********************************
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

	void callNo(int n){no=n;}			// protected no ��� ����
	void callName(string s){name=s;}	// protected name ��� ����
	void callShow(){showStudent();}
};

int main(){
	Teacher Te;
			  Te.callNo(4260);			// ��ӵ� protected no ���� ����
			  Te.callName("JSY");		// ��ӵ� protected name ���� ����
			  Te.callShow();
}
*/

// ****************************** Upcasting�� Downcasting ********************************
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

	Student *pS = &Te;					// ���� Ŭ������ Upcasting
			 pS ->setNo(4260);
			 pS ->setName("JSY");
			 pS ->showStudent();
		   //pS ->setSubject("C++");	// ���� Ŭ���� ������ ���� ���� (Stuent���� showSubject�� ���� ����!)
			 ((Teacher*)pS)->setSubject("C++");		//Downcasting
}
