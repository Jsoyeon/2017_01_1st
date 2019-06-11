/*
#include <iostream>
#include <string>
using namespace std;

class Student
{
int no;       //static �ƴ�!
string name;

public:
static int count;	//static ��!


Student(int n,string na)   //�������Ӵ�!
{   no = n;
name = na;  }

int getNo()			//��� �Լ�1
{ return no; }

string getName()		//��� �Լ�2
{  return name; }
};

int Student::count=0; //Ŭ������ 'Ʋ'�̱� ������ Static ������ Ŭ���� �ȿ��� �ʱ�ȭ ����!

int main()
{
Student::count=99;
cout<<"Static var value ="<<Student::count<<endl;

Student S1(123,"TDK");
cout<<"My school number is "<<S1.getNo()<<endl;
cout<<"My name is "<<S1.getName()<<endl;
cout<<"Static var value ="<<S1.count<<endl;	//�̹� 99�� �����صξ��� ������ 99�� ��µȴ�.

Student S2(4260,"JSY");
cout<<"My school number is "<<S2.getNo()<<endl;
cout<<"My name is "<<S2.getName()<<endl;
cout<<"Static var value ="<<S2.count<<endl;	//99�� �������� ����.
S1.count=55;

Student S3(3221,"SY");
cout<<"My school number is "<<S3.getNo()<<endl;
cout<<"My name is "<<S3.getName()<<endl;
cout<<"Static var value ="<<S3.count<<endl;	//���⼭�� 55�� �����!

return 0;
}


*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
	int no;       //static �ƴ�!
	string name;
	static int count;	//private�� �̵���, ��������� ���ٰ�����
public:
	Student(int n, string na)   //�������Ӵ�!
	{
		no = n;	   name = na; ++count;
	}	//������ ��������� ���ٰ����ϴٰ� ������ ����, ��ü�� �� ������ ���ϱ� count ����

	static int getCount()	//��ü���� ��� ����. ȣ��� Student::getCount()
	{
		return count;
	}		//static�� ���ϰ��� static�� Prog ���� �� ���� �������

	int getNo()
	{
		return no;
	}

	string getName()
	{
		return name;
	}
};

int Student::count = 0; //Ŭ������ 'Ʋ'�̱� ������ Static ������ Ŭ���� �ȿ��� �ʱ�ȭ ����!

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