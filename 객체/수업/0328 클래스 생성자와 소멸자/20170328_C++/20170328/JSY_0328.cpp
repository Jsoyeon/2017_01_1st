/*
#include <iostream>
#include <string>
using namespace std;

class Student{
public:
int no;					//��� ���� default �� private�̱� ������ main���� �θ��� ��������
string name;
};

int main()
{
Student S1;				//1�� ��ü
S1.no=20164260;
S1.name="Soyeon";
cout<<"My school number is "<<S1.no<<endl;
cout<<"My name is "<<S1.name<<endl;

Student S2;				//2�� ��ü
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
private:			//�� Ŭ���������� ��
int no;
string name;
public:				//private�� �ϸ� main���� �������ϱ� ����Լ��� �̿�
void setNo(int n) {	no = n;	}	// return���� ������ void
void setName(string na)	{	name = na;	}
int getNo()	{return no;}
string getName() {return name;}
};

int main()
{
Student S1;				//1�� ��ü
S1.setNo(20164260);
S1.setName("Soyeon");
//S1.no=20164260;
//S1.name="Soyeon";
cout<<"My school number is "<<S1.getNo()<<endl;		//�Լ� �ڿ� �ݵ�� ()!!
cout<<"My name is "<<S1.getName()<<endl;

Student S2;				//2�� ��ü
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

class Student{					//Ŭ����
private:
int no;						//no=0, naume=null�� �ʱ�ȭ�� (���������� ���ư��� �����ڰ� �ֱ� ����)	����Ʈ�� Student() {}
string name;
public:
Student(int n, string na) {no = n; name = na;}	//�����ڴ� Ŭ���� �̸��ϰ� �Ȱ���
void setNo(int n) {	no = n;	}					//��� �Լ�
void setName(string na)	{	name = na;	}
int getNo()	{return no;}
string getName() {return name;}
};

int main()
{
Student S1(20164260, "Soyeon");			//��ü ��������� ������ S1(0, null)
//S1.setNo(20164260);
//S1.setName("Soyeon");
cout<<"My school number is "<<S1.getNo()<<endl;
cout<<"My name is "<<S1.getName()<<endl;
Student S2(3221, "Yul");								//����Ʈ ������ ��
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
Student() {}	//S3������ ����Ʈ �����ڸ� ��� �� �����ڴ� return ��ü�� ���� ������ �տ� �� ���� void�� Ʋ��
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
	~Student() { cout << this->name << " �� ��ü�� �Ҹ�˴ϴ�." << endl; }	//�Ҹ���(�����ε� ��ü ����! / �굵 return ����)
																	//this->name �ؾ� �̸��� ���̸� �������� �Ҹ�Ǵ� �� ȹ�� ��.
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