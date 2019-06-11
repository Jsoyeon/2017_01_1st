/*
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;

public:
    Student() { cout<<name<<"  �⺻ ������ ����˴ϴ�."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" ����� ���� ������ ����˴ϴ�."<<endl; }
	~Student() {cout<<name<<"  �Ҹ��� ����˴ϴ�."<<endl; }
 // ~Student()  {cout<<name<<"  �Ҹ��� ����˴ϴ�. ���� ���̴� "<<age<<endl; }
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

int main() {

	 Student S1(19, "jasmine");
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;


return 0;
}

//call by value
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;
public:
    Student() { cout<<name<<"  �⺻ ������ ����˴ϴ�."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" ����� ���� ������ ����˴ϴ�."<<endl; }
	//~Student() {cout<<name<<"  �Ҹ��� ����˴ϴ�."<<endl; }
  ~Student()  {cout<<name<<"  �Ҹ��� ����˴ϴ�. ���� ���̴� "<<age<<endl; } //���� ���� ȣ�� ��ȭ�� �˱� ����
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student Go){		//Student Go = S1;
	int old = Go.getAge();		//call by value�� ������No(�� ���� �޾ƾ� �ϴϱ�), �Ҹ��ڸ�!
	Go.setAge(old+1);		}	// '''�� �Ҹ��ڸ� ����!! ���ư��� ������ ������

int main() {

	 Student S1(19, "jasmine");	//2��° ������
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
	 GetOld(S1);

	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
return 0;
}

//call by address
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;
public:
    Student() { cout<<name<<"  �⺻ ������ ����˴ϴ�."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" ����� ���� ������ ����˴ϴ�."<<endl; }
	//~Student() {cout<<name<<"  �Ҹ��� ����˴ϴ�."<<endl; }
  ~Student()  {cout<<name<<"  �Ҹ��� ����˴ϴ�. ���� ���̴� "<<age<<endl; }
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student *Go){			//Student *Go = S1;
	int old = Go->getAge();			// (*Go).getAget()
	Go->setAge(old+1);		}		// ����, �Ҹ��� ��� NO

int main() {

	 Student S1(19, "jasmine");	//2��° ������
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
	 GetOld(&S1);

	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
return 0;
}

//call by reference
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;
public:
    Student() { cout<<name<<"  �⺻ ������ ����˴ϴ�."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" ����� ���� ������ ����˴ϴ�."<<endl; }
	//~Student() {cout<<name<<"  �Ҹ��� ����˴ϴ�."<<endl; }
  ~Student()  {cout<<name<<"  �Ҹ��� ����˴ϴ�. ���� ���̴� "<<age<<endl; }
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student &Go){			//Student &Go = S1;
	int old = Go.getAge();			// Go.getAget()
	Go.setAge(old+1);		}		// ����, �Ҹ��� ��� NO �޸� ���� ����

int main() {

	 Student S1(19, "jasmine");	//2��° ������
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
	 GetOld(S1);

	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;
public:
    Student() { cout<<name<<"  �⺻ ������ ����˴ϴ�."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" ����� ���� ������ ����˴ϴ�."<<endl; }
	//~Student() {cout<<name<<"  �Ҹ��� ����˴ϴ�."<<endl; }
  ~Student()  {cout<<name<<"  �Ҹ��� ����˴ϴ�. ���� ���̴� "<<age<<endl; }
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student &Go){			//Student &Go = S1;
	int old = Go.getAge();			// Go.getAget()
	Go.setAge(old+1);		}		// ����, �Ҹ��� ��� NO �޸� ���� ����

int main() {

	 Student S1(19, "jasmine");	//2��° ������
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
	// GetOld(S1);			// �Լ� ���ڷ� ����
	 Student &Go = S1;		// ��ü ���� ������ ����

	 cout<<"My student number is "<<Go.getAge()<<endl;
	 cout<<"MY name is "<<Go.getName()<<endl;
	 
return 0;
}

//Return Object(1)
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;
public:
    Student() { cout<<name<<"  �⺻ ������ ����˴ϴ�."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" ����� ���� ������ ����˴ϴ�."<<endl; }
	//~Student() {cout<<name<<"  �Ҹ��� ����˴ϴ�."<<endl; }
  ~Student()  {cout<<name<<"  �Ҹ��� ����˴ϴ�. ���� ���̴� "<<age<<endl; }

	Student(Student &c)
	{	this->age = c.age;
		this->name = c.name;
		cout<<age<<" ���� ���� �����ڰ� �������Դϴ�. "<<name<<endl;	}

	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

Student GetOld(){			//�����Լ�
	Student Go(21,"Mine");	//����
	return Go;		}		//���⼭ ���� / Ż���ϸ� �Ҹ�

int main() {

	 Student S1(19, "jasmine");	//2��° ������
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;

	 S1 = GetOld();

	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
return 0;
}
*/

//Return Object(2)
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;
public:
    Student() { cout<<name<<"  �⺻ ������ ����˴ϴ�."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" ����� ���� ������ ����˴ϴ�."<<endl; }
	//~Student() {cout<<name<<"  �Ҹ��� ����˴ϴ�."<<endl; }
  ~Student()  {cout<<name<<"  �Ҹ��� ����˴ϴ�. ���� ���̴� "<<age<<endl; }

//	Student(Student &c)
//	{	this->age = c.age;
//		this->name = c.name;
//		cout<<age<<" ���� ���� �����ڰ� �������Դϴ�. "<<name<<endl;	}

	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}

	Student* Sample() {//Ŭ���� ���δ� this ��� ����
		age = age+1;
		return this;	} //������ S1, S2 ... ������ ����ϱ� this�� �����!
};

int main() {

	 Student S1(19, "jasmine");	//2��° ������
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;

	 S1.Sample();		//���� ��ü ����Լ� ȣ�� �� ���� �ޱ�!

	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
return 0;
}

