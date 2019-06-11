/*
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
int no;
string name;
public:
Student(){}
Student(int n, string na){ no=n; name=na; }
void setData(int n, string na)  {no=n;  name=na;}
int getNo() { return no; }
string getName() { return name; }
};

int main() {
Student SArray[3] = {Student(4260, "Soyeon"), Student(3221, "Yul"), Student(1000, "Ryong")}; //ȣ���Ϸ��� ��ȣ ����� ��
for(int i=0;i<3;i++){	//C++���� �߰��� ���� ����!!
cout<<"My student number is "<<SArray[i].getNo()<<endl;
cout<<"MY name is "<<SArray[i].getName()<<endl;
}

Student *p;	//Student *p = SArray;
p = SArray;
for(int i=0;i<3;i++){	//C++���� �߰��� ���� ����!!
cout<<"My student number is "<<p->getNo()<<endl;
cout<<"MY name is "<<p->getName()<<endl;
cout<<"My student number is "<<(*p).getNo()<<endl;
cout<<"MY name is "<<(*p).getName()<<endl;
p++;
}
return 0;
}
/*
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
int no;
string name;
public:
Student(){}
Student(int n, string na){ no=n; name=na; }
~Student(){cout<<"�Ҹ��� ���� ���� : "<<name<<endl;}
void setData(int n, string na)  {no=n;  name=na;}
int getNo() { return no; }
string getName() { return name; }
};

int main() {
Student *p, *q;	//Student *p = new Student;
p= new Student;	//new Student();
p -> setData(4260, "Soyeon");

cout<<"My student number is "<<p->getNo()<<endl;
cout<<"MY name is "<<(*p).getName()<<endl;

q= new Student(3221, "Yul");
cout<<"My student number is "<<q->getNo()<<endl;
cout<<"MY name is "<<(*q).getName()<<endl;

delete p;	//new ��� �ÿ��� ����ڰ� ���� ���ؼ� �޸� ��ȯ ����
delete q;

return 0;
}
*/
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int no;
	string name;
public:
	Student() {}
	Student(int n, string na) { no = n; name = na; }
	~Student() { cout << "�Ҹ��� ���� ���� : " << name << endl; }
	void setData(int n, string na) { no = n;  name = na; }
	int getNo() { return no; }
	string getName() { return name; }
};

int main() {
	Student *pArray = new Student[3];
	//	pArray[0].setData(4260, "Soyeon");	//�����͸� �迭ó�� �� �� �ִ�!!
	//	pArray[1].setData(3221, "Yul");
	//	pArray[2].setData(1000, "Ryong");

	pArray->setData(4260, "Soyeon");
	(pArray + 1)->setData(3221, "Yul");
	(pArray + 2)->setData(1000, "Ryong");

	for (int i = 0; i<3; i++) {
		cout << "My student number is " << pArray[i].getNo() << endl;
		cout << "MY name is " << pArray[i].getName() << endl;
	}

	delete[] pArray;		//�迭�� delete �ڿ� [] ���̱�!!!!!!!! (��ü �迭 ��ȯ)

	return 0;
}
