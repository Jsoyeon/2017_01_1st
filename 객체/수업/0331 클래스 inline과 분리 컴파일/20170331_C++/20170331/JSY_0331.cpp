/*#include <iostream>
#include <string>
using namespace std;

class Student   //Ŭ���� ����
{
  private:
      int no;      //member variable(��� ����)
      string name;
  public:
     Student() {}  
    ~Student()  { cout<<this->name<<"�� �̸��� ���� ��ü�� �Ҹ�˴ϴ�."<<endl;}  
     Student(int n,string na)  {  no = n;name = na;  }  

 void setNum(int n)   {  no = n; }
 void setName(string na)    { name = na; }
 int getNo()    { return no; }
 string getName()  {  return name; }
};
int main()     //���� ����
 {  
	 Student S1(123,"TDK");  
       cout<<"My school number is "<<S1.getNo()<<endl;
       cout<<"My name is "<<S1.getName()<<endl;

    Student S2(456,"Candy");
       cout<<"My school number is "<<S2.getNo()<<endl;
	   cout<<"My name is "<<S2.getName()<<endl;

    Student S3; 
      S3.setNum(789);
      S3.setName("Anne");
        cout<<"My school number is "<<S3.getNo()<<endl;
        cout<<"My name is "<<S3.getName()<<endl; return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student   //Ŭ���� ����
{
  private:
      int no;      //member variable(��� ����)
      string name;
  public:
     Student();  //������Ÿ��. �����
    ~Student();
     Student(int n,string na);
	void setNum(int n);	
	void setName(string na);
	int getNo();
	string getName();
};
	Student::Student() {}  
	Student::~Student()  { cout<<this->name<<"�� �̸��� ���� ��ü�� �Ҹ�˴ϴ�."<<endl;}  
	Student::Student(int n,string na)  { no = n; name = na; }  
	void Student::setNum(int n)   {  no = n; }	//�Լ� ������ ����
	void Student::setName(string na)  { name = na; }
	int Student::getNo()   { return no; }
	string Student::getName()  {  return name; }
	//int f(int x) {return x;} �����Լ�
	//Student P1, P2; ������ü

int main()     //���� ����
 {  
	 Student S1(4260,"JSY");  
       cout<<"My school number is "<<S1.getNo()<<endl;
       cout<<"My name is "<<S1.getName()<<endl;

    Student S2(3221,"SY");
       cout<<"My school number is "<<S2.getNo()<<endl;
	   cout<<"My name is "<<S2.getName()<<endl;

    Student S3; 
      S3.setNum(1000);
      S3.setName("KSR");
        cout<<"My school number is "<<S3.getNo()<<endl;
        cout<<"My name is "<<S3.getName()<<endl; return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Student   //Ŭ���� ����
{
  private:
      int no;      //member variable(��� ����)
      string name;
  public:
     Student();  //������Ÿ��. �����
    ~Student();
     Student(int n,string na);
	void setNum(int n);	
	void setName(string na);
	int getNo();
	string getName();
};
	inline Student::Student() {}  
	inline Student::~Student()  { cout<<this->name<<"�� �̸��� ���� ��ü�� �Ҹ�˴ϴ�."<<endl;}  
	inline Student::Student(int n,string na)  { no = n; name = na; }  
	inline void Student::setNum(int n)   {  no = n; }	//�Լ� ������ ����
	inline void Student::setName(string na)  { name = na; }
	inline int Student::getNo()   { return no; }
	inline string Student::getName()  {  return name; }

int main()     //���� ����
 {  
	 Student S1(4260,"JSY");  
       cout<<"My school number is "<<S1.getNo()<<endl;
       cout<<"My name is "<<S1.getName()<<endl;

    Student S2(3221,"SY");
       cout<<"My school number is "<<S2.getNo()<<endl;
	   cout<<"My name is "<<S2.getName()<<endl;

    Student S3; 
      S3.setNum(1000);
      S3.setName("KSR");
      cout<<"My school number is "<<S3.getNo()<<endl;
      cout<<"My name is "<<S3.getName()<<endl; return 0;
}
*/

