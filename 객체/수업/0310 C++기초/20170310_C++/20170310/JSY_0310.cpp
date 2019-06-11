/*
#include <Iostream>

int main()
{
std::cout<<"hello";
return 0;
}

#include <Iostream>

int main()
{
std::cout<<"hello"<<std::endl;
return 0;
}

#include <Iostream>
using namespace std;
int main()
{
cout<<"hello"<<endl;
return 0;
}

#include <Iostream>
using namespace std;
int main()
{
int age;
cout<<"나이를 입력하세요>>";
cin>>age;
cout<<"나의 나이는 "<<age<<"  입니다."<<endl;
return 0;
}

#include <Iostream>
using namespace std;
int main()
{
int age;
char name[20];
cout<<"나이를 입력하세요>>";
cin>>age;
cout<<"이름을 입력하세요>>";
cin>>name;

cout<<"나의 나이는 "<<age<<"  입니다."<<endl;
cout<<"나의 이름은 "<<name<<"  입니다."<<endl;
return 0;
}

#include <Iostream>
using namespace std;
int main()
{
int age;
char name[20];
cout<<"나이를 입력하세요>>";
cin>>age;
cout<<"이름을 입력하세요>>";
cin>>name;

cout<<"나의 나이는 "<<age<<"  입니다. \n";
cout<<"나의 이름은 "<<name<<"  입니다."<<endl;
cout<<"나의 학번은 "<<20164260<<"  입니다."<<'\n';
return 0;
}

#include <Iostream>
using namespace std;

double area(int r)
{
double sum;
sum = 3.14*r*r;
return sum;
}

int main()
{
int n=3;
char c='#';
cout<<c<<5.5<<'-'<<n<<"hello"<<true<<false<<endl;
cout<<"n+5"<<n+5<<'\n';
cout<<"면적은  ="  <<area(n);
}
*/
#include <Iostream>
using namespace std;
double area(int r);  //함수의 원형(프로토타입) double area(int )도 가능!

int main()
{
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "hello" << true << false << endl;
	cout << "n+5" << n + 5 << '\n';
	cout << "면적은  =" << area(n);
}

double area(int r) { return 3.14*r*r; }
