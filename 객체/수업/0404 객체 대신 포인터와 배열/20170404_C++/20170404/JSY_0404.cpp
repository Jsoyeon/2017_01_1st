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
	cout<<"My student number is "<<p->getNo()<<endl;		//�����ʹ� ȭ��ǥ��!!!
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
	Student(){}		//����Ʈ(�⺻) ������ �ʿ� ��ü�迭
	Student(int n, string na){ no=n; name=na; }
	int getNo() { return no; }
	string getName() { return name; }
	void setData(int n, string na)  {no=n;  name=na;}
};

int main() {

	Student SArray[3];			//�̰� ������ �⺻ ������ ������ ����
			SArray[0].setData(4260, "Soyeon");	//����Լ��� ���� ����, 2��° ������ ���
			SArray[1].setData(3221, "Seoyul");
			SArray[2].setData(1000, "Ryong");

	for(int i=0;i<3;i++){	//C++���� �ȿ��� �������� ����!
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
	Student(){}		//����Ʈ(�⺻) ������ �ʿ� ��ü�迭
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
			 p= SArray;		//�迭�̸��� ù���� �ּҰ��� ������!!
	for(int i=0;i<3;i++){
		cout<<"My student number is "<<p->getNo()<<endl;
		cout<<"MY name is "<<p->getName()<<endl;
		p++;	//������ ����Ű�� ����
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
	Student(){}		//����Ʈ(�⺻) ������ �ʿ� ��ü�迭
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
			 p= SArray;		//�迭�̸��� ù���� �ּҰ��� ������!!
	for(int i=0;i<3;i++){
		cout<<"My student number is "<<(*p).getNo()<<endl;		//p�� ����Ű�� ��ü ���Ѵ�
		cout<<"MY name is "<<(*p).getName()<<endl;
		p++;	//������ ����Ű�� ����
	}

	return 0;
}