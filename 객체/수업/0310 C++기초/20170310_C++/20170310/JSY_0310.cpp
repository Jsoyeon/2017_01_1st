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
cout<<"���̸� �Է��ϼ���>>";
cin>>age;
cout<<"���� ���̴� "<<age<<"  �Դϴ�."<<endl;
return 0;
}

#include <Iostream>
using namespace std;
int main()
{
int age;
char name[20];
cout<<"���̸� �Է��ϼ���>>";
cin>>age;
cout<<"�̸��� �Է��ϼ���>>";
cin>>name;

cout<<"���� ���̴� "<<age<<"  �Դϴ�."<<endl;
cout<<"���� �̸��� "<<name<<"  �Դϴ�."<<endl;
return 0;
}

#include <Iostream>
using namespace std;
int main()
{
int age;
char name[20];
cout<<"���̸� �Է��ϼ���>>";
cin>>age;
cout<<"�̸��� �Է��ϼ���>>";
cin>>name;

cout<<"���� ���̴� "<<age<<"  �Դϴ�. \n";
cout<<"���� �̸��� "<<name<<"  �Դϴ�."<<endl;
cout<<"���� �й��� "<<20164260<<"  �Դϴ�."<<'\n';
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
cout<<"������  ="  <<area(n);
}
*/
#include <Iostream>
using namespace std;
double area(int r);  //�Լ��� ����(������Ÿ��) double area(int )�� ����!

int main()
{
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "hello" << true << false << endl;
	cout << "n+5" << n + 5 << '\n';
	cout << "������  =" << area(n);
}

double area(int r) { return 3.14*r*r; }
