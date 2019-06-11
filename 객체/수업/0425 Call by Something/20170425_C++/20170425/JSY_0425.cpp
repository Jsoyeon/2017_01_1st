/*
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
	int age;
	string name;

public:
    Student() { cout<<name<<"  기본 생성자 수행됩니다."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" 사용자 정의 생성자 수행됩니다."<<endl; }
	~Student() {cout<<name<<"  소멸자 수행됩니다."<<endl; }
 // ~Student()  {cout<<name<<"  소멸자 수행됩니다. 현재 나이는 "<<age<<endl; }
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
    Student() { cout<<name<<"  기본 생성자 수행됩니다."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" 사용자 정의 생성자 수행됩니다."<<endl; }
	//~Student() {cout<<name<<"  소멸자 수행됩니다."<<endl; }
  ~Student()  {cout<<name<<"  소멸자 수행됩니다. 현재 나이는 "<<age<<endl; } //값에 의한 호출 변화를 알기 위해
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student Go){		//Student Go = S1;
	int old = Go.getAge();		//call by value는 생성자No(준 값을 받아야 하니까), 소멸자만!
	Go.setAge(old+1);		}	// '''는 소멸자만 실행!! 돌아가면 원래의 값으로

int main() {

	 Student S1(19, "jasmine");	//2번째 생성자
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
    Student() { cout<<name<<"  기본 생성자 수행됩니다."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" 사용자 정의 생성자 수행됩니다."<<endl; }
	//~Student() {cout<<name<<"  소멸자 수행됩니다."<<endl; }
  ~Student()  {cout<<name<<"  소멸자 수행됩니다. 현재 나이는 "<<age<<endl; }
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student *Go){			//Student *Go = S1;
	int old = Go->getAge();			// (*Go).getAget()
	Go->setAge(old+1);		}		// 생성, 소멸자 사용 NO

int main() {

	 Student S1(19, "jasmine");	//2번째 생성자
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
    Student() { cout<<name<<"  기본 생성자 수행됩니다."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" 사용자 정의 생성자 수행됩니다."<<endl; }
	//~Student() {cout<<name<<"  소멸자 수행됩니다."<<endl; }
  ~Student()  {cout<<name<<"  소멸자 수행됩니다. 현재 나이는 "<<age<<endl; }
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student &Go){			//Student &Go = S1;
	int old = Go.getAge();			// Go.getAget()
	Go.setAge(old+1);		}		// 생성, 소멸자 사용 NO 메모리 따로 없음

int main() {

	 Student S1(19, "jasmine");	//2번째 생성자
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
    Student() { cout<<name<<"  기본 생성자 수행됩니다."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" 사용자 정의 생성자 수행됩니다."<<endl; }
	//~Student() {cout<<name<<"  소멸자 수행됩니다."<<endl; }
  ~Student()  {cout<<name<<"  소멸자 수행됩니다. 현재 나이는 "<<age<<endl; }
	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

void GetOld(Student &Go){			//Student &Go = S1;
	int old = Go.getAge();			// Go.getAget()
	Go.setAge(old+1);		}		// 생성, 소멸자 사용 NO 메모리 따로 없음

int main() {

	 Student S1(19, "jasmine");	//2번째 생성자
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
	// GetOld(S1);			// 함수 인자로 접근
	 Student &Go = S1;		// 객체 참조 변수로 접근

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
    Student() { cout<<name<<"  기본 생성자 수행됩니다."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" 사용자 정의 생성자 수행됩니다."<<endl; }
	//~Student() {cout<<name<<"  소멸자 수행됩니다."<<endl; }
  ~Student()  {cout<<name<<"  소멸자 수행됩니다. 현재 나이는 "<<age<<endl; }

	Student(Student &c)
	{	this->age = c.age;
		this->name = c.name;
		cout<<age<<" 지금 복사 생성자가 수행중입니다. "<<name<<endl;	}

	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}
};

Student GetOld(){			//전역함수
	Student Go(21,"Mine");	//생성
	return Go;		}		//여기서 복사 / 탈출하며 소멸

int main() {

	 Student S1(19, "jasmine");	//2번째 생성자
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
    Student() { cout<<name<<"  기본 생성자 수행됩니다."<<endl; }
	Student(int a, string na)
               { age=a;  name=na;
                 cout<<name<<" 사용자 정의 생성자 수행됩니다."<<endl; }
	//~Student() {cout<<name<<"  소멸자 수행됩니다."<<endl; }
  ~Student()  {cout<<name<<"  소멸자 수행됩니다. 현재 나이는 "<<age<<endl; }

//	Student(Student &c)
//	{	this->age = c.age;
//		this->name = c.name;
//		cout<<age<<" 지금 복사 생성자가 수행중입니다. "<<name<<endl;	}

	 int getAge() { return age; }
	 string getName() { return name; }
    void setAge(int a)  { age=a;}
    void setName(int n)  { name=n;}
  //void setData(int a, string na)  {age=a;  name=na;}

	Student* Sample() {//클래스 내부니 this 사용 가능
		age = age+1;
		return this;	} //일일이 S1, S2 ... 만들기는 힘드니까 this를 사용함!
};

int main() {

	 Student S1(19, "jasmine");	//2번째 생성자
	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;

	 S1.Sample();		//현재 객체 멤버함수 호출 후 리턴 받기!

	 cout<<"My student number is "<<S1.getAge()<<endl;
	 cout<<"MY name is "<<S1.getName()<<endl;
	 
return 0;
}

