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
Student SArray[3] = {Student(4260, "Soyeon"), Student(3221, "Yul"), Student(1000, "Ryong")}; //호출하려면 괄호 열어야 함
for(int i=0;i<3;i++){	//C++에선 중간에 선언 가능!!
cout<<"My student number is "<<SArray[i].getNo()<<endl;
cout<<"MY name is "<<SArray[i].getName()<<endl;
}

Student *p;	//Student *p = SArray;
p = SArray;
for(int i=0;i<3;i++){	//C++에선 중간에 선언 가능!!
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
~Student(){cout<<"소멸자 실행 순서 : "<<name<<endl;}
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

delete p;	//new 사용 시에는 사용자가 순서 정해서 메모리 반환 가능
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
	~Student() { cout << "소멸자 실행 순서 : " << name << endl; }
	void setData(int n, string na) { no = n;  name = na; }
	int getNo() { return no; }
	string getName() { return name; }
};

int main() {
	Student *pArray = new Student[3];
	//	pArray[0].setData(4260, "Soyeon");	//포인터를 배열처럼 쓸 수 있다!!
	//	pArray[1].setData(3221, "Yul");
	//	pArray[2].setData(1000, "Ryong");

	pArray->setData(4260, "Soyeon");
	(pArray + 1)->setData(3221, "Yul");
	(pArray + 2)->setData(1000, "Ryong");

	for (int i = 0; i<3; i++) {
		cout << "My student number is " << pArray[i].getNo() << endl;
		cout << "MY name is " << pArray[i].getName() << endl;
	}

	delete[] pArray;		//배열은 delete 뒤에 [] 붙이기!!!!!!!! (객체 배열 반환)

	return 0;
}
