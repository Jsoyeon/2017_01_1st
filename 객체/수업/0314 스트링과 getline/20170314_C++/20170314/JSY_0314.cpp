/*
#include <iostream>
using namespace std;

int main()
{
int width;
int height;

cout<<"너비와 높이를 입력하세요>>";
cin>>width>>height;

int area=width*height;
cout<<"면적은 "<<area<<"\n";

return 0;
}

#include <iostream>		//공백 못함

using namespace std;
int main()
{
char name[20];
cin>>name;
cout<<name<<endl;

return 0;
}

#include <iostream>			//공백 가능, @가능
using namespace std;

int main()
{
char name[20];
//cin.getline(name,20,'\n');	 cin.getline(name,20);
cin.getline(name,20,'@');		//멤버함수
cout<<name<<endl;

return 0;
}

#include <iostream>		//공백 가능
#include <string>
using namespace std;

int main()
{
string name;
getline(cin,name);			//전역함수
cout<<name<<endl;

return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
char name[20];
int snum;
string pnum;
string subject;

cout<<"이름을 입력하세요...";
cin.getline(name,20,'\n');
cout<<"학번을 입력하세요...";
cin>>snum;				//학번은 공백 없음
//학번의 엔터키값을 전화번호가 가져감
cout<<"전번을 입력하세요...";
getline(cin,pnum);
cout<<"수강과목을 입력하세요...";
getline(cin,subject);

return 0;
}

#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main()
{
char name[20];
int snum;
string pnum;
string subject;

cout<<"이름을 입력하세요...";
cin.getline(name,20,'\n');
cout<<"학번을 입력하세요...";
cin>>snum;				//학번은 공백 없음

//getchar();		// 문자 하나 읽기(엔터값)
fflush(stdin);

cout<<"전번을 입력하세요...";
getline(cin,pnum);
cout<<"수강과목을 입력하세요...";
getline(cin,subject);

return 0;
}
*/

#include<iostream>
#include<string>
#include<cstring>		//strcmp()-인수 두개 같은 문자면 리턴시 0, strlen(), strcpy()....
using namespace std;

int main()
{
	char password[11];
	cout << "암호를 입력하세요" << endl;
	while (true)
	{
		cout << "암호?";
		cin >> password;

		if (strcmp(password, "JSY") == 0)	//앞은 내가 입력, 뒤는 암호
		{
			cout << "프로그램을 정상 종료합니다" << endl;
			break;
		}
		else
			cout << "암호가 틀립니다." << endl;
	}
	return 0;
}

