/*
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int no;
	string name;

public:
	Student(int n, string na){ no=n; name=na; }
	int getNo() { return no; }
	string getName() { return name; }

	//void setData(int n, string na)  {no=n;  name=na;}
};

int main() {

	 Student S1(123, "jasmine");
	 cout<<"My student number is "<<S1.getNo()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;

	 Student *p;
			  p = &S1;
	cout<<"My student number is "<<p->getNo()<<endl;		//포인터는 화살표로!!!
	cout<<"MY name is "<<p->getName()<<endl;

	cout<<"My student number is "<<(*p).getNo()<<endl;	
	cout<<"MY name is "<<(*p).getName()<<endl;

	return 0;
}


#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int no;
	string name;

public:
	Student(){}		//디폴트(기본) 생성자 필요 객체배열
	Student(int n, string na){ no=n; name=na; }
	int getNo() { return no; }
	string getName() { return name; }
	void setData(int n, string na)  {no=n;  name=na;}
};

int main() {

	Student SArray[3];			//이거 때문에 기본 생성자 위에서 만듬
			SArray[0].setData(4260, "Soyeon");	//멤버함수를 통해 세팅, 2번째 생성자 사용
			SArray[1].setData(3221, "Seoyul");
			SArray[2].setData(1000, "Ryong");

	for(int i=0;i<3;i++){	//C++에선 안에서 변수선언 가능!
		cout<<"My student number is "<<SArray[i].getNo()<<endl;
		cout<<"MY name is "<<SArray[i].getName()<<endl;
	}

	return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int no;
	string name;

public:
	Student(){}		//디폴트(기본) 생성자 필요 객체배열
	Student(int n, string na){ no=n; name=na; }
	int getNo() { return no; }
	string getName() { return name; }
	void setData(int n, string na)  {no=n;  name=na;}
};

int main() {

	Student SArray[3];
			SArray[0].setData(4260, "Soyeon");
			SArray[1].setData(3221, "Seoyul");
			SArray[2].setData(1000, "Ryong");

	for(int i=0;i<3;i++){
		cout<<"My student number is "<<SArray[i].getNo()<<endl;
		cout<<"MY name is "<<SArray[i].getName()<<endl;
	}
	Student *p;
			 p= SArray;		//배열이름이 첫번재 주소값을 가진다!!
	for(int i=0;i<3;i++){
		cout<<"My student number is "<<p->getNo()<<endl;
		cout<<"MY name is "<<p->getName()<<endl;
		p++;	//다음을 가리키기 위해
	}

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
	Student(){}		//디폴트(기본) 생성자 필요 객체배열
	Student(int n, string na){ no=n; name=na; }
	int getNo() { return no; }
	string getName() { return name; }
	void setData(int n, string na)  {no=n;  name=na;}
};

int main() {

	Student SArray[3];
			SArray[0].setData(4260, "Soyeon");
			SArray[1].setData(3221, "Seoyul");
			SArray[2].setData(1000, "Ryong");

	for(int i=0;i<3;i++){
		cout<<"My student number is "<<SArray[i].getNo()<<endl;
		cout<<"MY name is "<<SArray[i].getName()<<endl;
	}
	Student *p;
			 p= SArray;		//배열이름이 첫번재 주소값을 가진다!!
	for(int i=0;i<3;i++){
		cout<<"My student number is "<<(*p).getNo()<<endl;		//p가 가리키는 객체 말한다
		cout<<"MY name is "<<(*p).getName()<<endl;
		p++;	//다음을 가리키기 위해
	}

	return 0;
}