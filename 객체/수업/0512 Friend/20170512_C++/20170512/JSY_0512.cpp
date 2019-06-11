/*
#include <iostream>
#include <string>
using namespace std;

class Student{
private:
int no;
string name;
public:
Student() {}
Student(int n, string na)
{   no = n;		name = na;  }
int getNo()
{ return no; }
string getName()
{  return name; }
friend void Disp();
};

void Disp(){
Student S3;
S3.no=2525;
S3.name="NN";
cout<<"My school number is "<<S3.no<<endl;
cout<<"My name is "<<S3.name<<endl;
}

int main() {
Student S1(4260,"JSY");
cout<<"My school number is "<<S1.getNo()<<endl;
cout<<"My name is "<<S1.getName()<<endl;

Student S2(3221,"SY");
cout<<"My school number is "<<S2.getNo()<<endl;
cout<<"My name is "<<S2.getName()<<endl;
Disp();
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
Student() {}
Student(int n, string na)
{   no = n;		name = na;  }
int getNo()
{ return no; }
string getName()
{  return name; }
void Disp(){
cout<<"My school number is "<<no<<endl;
cout<<"My name is "<<name<<endl;
}
friend void Show(Student &S);
};

void Show(Student &S){
S.no =  2525;
S.name = "NN";
}

int main() {
Student S1(4260,"JSY");
S1.Disp();
Student S2(3221,"SY");
S2.Disp();
Show(S2);
S2.Disp();
}

*/

#include <iostream>
using namespace std;
class xPoint {
	int xx;
public:
	xPoint(int x) { xx = x; }
	friend int plus2(xPoint a);
};

int plus2(xPoint a) { return a.xx + 2; }

void main() {
	xPoint a(2);
	cout << plus2(a) << endl;
}