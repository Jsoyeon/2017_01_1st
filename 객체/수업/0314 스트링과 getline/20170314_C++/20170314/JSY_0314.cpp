/*
#include <iostream>
using namespace std;

int main()
{
int width;
int height;

cout<<"�ʺ�� ���̸� �Է��ϼ���>>";
cin>>width>>height;

int area=width*height;
cout<<"������ "<<area<<"\n";

return 0;
}

#include <iostream>		//���� ����

using namespace std;
int main()
{
char name[20];
cin>>name;
cout<<name<<endl;

return 0;
}

#include <iostream>			//���� ����, @����
using namespace std;

int main()
{
char name[20];
//cin.getline(name,20,'\n');	 cin.getline(name,20);
cin.getline(name,20,'@');		//����Լ�
cout<<name<<endl;

return 0;
}

#include <iostream>		//���� ����
#include <string>
using namespace std;

int main()
{
string name;
getline(cin,name);			//�����Լ�
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

cout<<"�̸��� �Է��ϼ���...";
cin.getline(name,20,'\n');
cout<<"�й��� �Է��ϼ���...";
cin>>snum;				//�й��� ���� ����
//�й��� ����Ű���� ��ȭ��ȣ�� ������
cout<<"������ �Է��ϼ���...";
getline(cin,pnum);
cout<<"���������� �Է��ϼ���...";
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

cout<<"�̸��� �Է��ϼ���...";
cin.getline(name,20,'\n');
cout<<"�й��� �Է��ϼ���...";
cin>>snum;				//�й��� ���� ����

//getchar();		// ���� �ϳ� �б�(���Ͱ�)
fflush(stdin);

cout<<"������ �Է��ϼ���...";
getline(cin,pnum);
cout<<"���������� �Է��ϼ���...";
getline(cin,subject);

return 0;
}
*/

#include<iostream>
#include<string>
#include<cstring>		//strcmp()-�μ� �ΰ� ���� ���ڸ� ���Ͻ� 0, strlen(), strcpy()....
using namespace std;

int main()
{
	char password[11];
	cout << "��ȣ�� �Է��ϼ���" << endl;
	while (true)
	{
		cout << "��ȣ?";
		cin >> password;

		if (strcmp(password, "JSY") == 0)	//���� ���� �Է�, �ڴ� ��ȣ
		{
			cout << "���α׷��� ���� �����մϴ�" << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�." << endl;
	}
	return 0;
}

