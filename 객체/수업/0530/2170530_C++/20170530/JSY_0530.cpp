/*
//�� �ҽ��� 2�� ����Ʈ�� �ֱ�~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:)
//****************************************Upcasting ���� �Ϲ����� �Լ� �����ε� ����****************************************
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
	void showMe( ) { cout<<"Teacher Subject "<<subject<<endl; }		//Ŭ���� Student�� �ִ� �Լ��� ���� �̸��� �Լ�!
};

int main()	{
	//Student *Ps, Os;
	//Teacher *Pt, Ot;
			//Ps=&Ot;					//Upcasting ���� Ŭ���� ��ü�� �ּҸ� ���� Ŭ���� �����Ϳ� �־���
			//Ps->showMe();				//�ڱ� �� ���� ������ Student�� �ִ� showMe��!�����ε� (�ڽ��� Ŭ������ �Լ� �����ε�)
	Student *Ps = new Teacher("Java");	//Upcasting
			Ps->showMe();				//�ڽ��� Ŭ���� Student�� �Լ� �����ε�
}

//****************************************�����Լ��� ����� - virtual(�������̵�)****************************************
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
	void showMe( ) { cout<<"Teacher Subject "<<subject<<endl; } //���� virtual�� ���� ������!
};

int main()	{
	//Student *Ps, Os;
	//Teacher *Pt, Ot;
			//Ps=&Ot;					//Upcasting
			//Ps->showMe();				//virtual Ű����� ���� �����Լ�ȭ
	Student *Ps = new Teacher("Java");	//Upcasting
			Ps->showMe();				//virtual Ű����� ���� �����Լ� - �������̵� �������� �ƴ� ���� �ÿ� ���ε� ��Ų��
}
//****************************************virtual(�������̵�)������ ���� Ŭ���� virtual �Լ��� ����� �� (::)****************************************
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
	void showMe( ) { cout<<"Teacher Subject "<<subject<<endl; } //���� virtual�� ���� ������!
};

int main()	{
	//Student *Ps, Os;
	//Teacher *Pt, Ot;
			//Ps=&Ot;					//Upcasting
			//Ps->showMe();				//virtual Ű����� ���� �����Լ�ȭ
	Student *Ps = new Teacher("Java");	//Upcasting
			Ps->showMe();				//virtual Ű����� ���� �����Լ� - �������̵� �������� �ƴ� ���� �ÿ� ���ε� ��Ų��
			Ps->Student::showMe();		//virtual ���� �Լ� ���� (�������̵� �ƴ�!) �����ε���!
}

//���������Լ�(1) - �Ϲ� �Լ��� �����ε�
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
	School *Ps = new Student1(4260, "JSY");			//Upcasting //�ּ� �Ѱ����� �ʾƵ� ��ĳ���� �� ����!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
	//Ps�� ���� ��� �ֱ⿡ �Ʒ��� Ps�� �״�� ���� �������� (������ ���ʱ�ȭ ����)
	//School *Ps = new Student2("010-1234-5678", "SAMSUNG");
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}
//���������Լ�(2) - �����Լ��� ���� - �������̵�
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
	School *Ps = new Student1(4260, "JSY");			//Upcasting //�ּ� �Ѱ����� �ʾƵ� ��ĳ���� �� ����!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}
//���������Լ�(3) - ���� �����Լ� ���� - virtual void f()=0;
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
	//School St; //���������Լ� �ִ� �߻�Ŭ���� ��ü ���� But, �����ʹ� ������
	School *Ps = new Student1(4260, "JSY");			//Upcasting //�ּ� �Ѱ����� �ʾƵ� ��ĳ���� �� ����!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}*/

//���������Լ�(4) - ���������Լ� - �߻�Ŭ���� - ���������Լ��� �Ļ�Ŭ�������� �������� ������ �Ļ�Ŭ������ �߻�Ŭ������ �ȴ�!(�߻�Ŭ������ ���� ��ü ��������)
#include<iostream>
#include<string>
using namespace std;

class School{
public:
	virtual void SignSub(string name)=0;
	virtual void ShowMe()=0;
};
class Student1 : public School{		//�� Ŭ������ �߻�Ŭ������ ��ü ���� �Ұ�
	int no;
	string name;
public:
	Student1(){no=0; name="Nobody";}
	Student1(int n, string na){no=n; name=na;}
	//���� �߻�Ŭ������ ��� �޾Ҵ� �� ���� �����Լ� �������� ������ �̶��� �߻�Ŭ����
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
	//School St; //���������Լ� �ִ� �߻�Ŭ���� ��ü ���� But, �����ʹ� ������
	School *Ps = new Student1(4260, "JSY");			//Upcasting //�ּ� �Ѱ����� �ʾƵ� ��ĳ���� �� ����!
			Ps->SignSub("Paradise");
			Ps->ShowMe();
			Student2 St2("010-1234-5678", "SAMSUNG");
			Ps=&St2;	//Upcasting
			Ps->SignSub("I-Phone");
			Ps->ShowMe();
}
