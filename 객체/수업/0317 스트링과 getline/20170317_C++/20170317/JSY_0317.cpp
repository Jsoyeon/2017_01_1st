/*
#include<iostream>
#include<string>
using namespace std;

int main(){
	string song = "Falling in love with you";	//�ΰ��� ��� (����)
	string elvis = string("Elvis Presley");		
	string singer;								//������ Ű����� �Է�

	cout<<song + "�� �θ� ������ ";
	cout<<"(��Ʈ : ù ����" <<elvis[0]<<")?";

	getline(cin,singer);

	if(singer == elvis)
		cout<<"�¾ҽ��ϴ�.";
	else
		cout<<"Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�."<<endl;

	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main(){
	string me("Jeong SoYeon");					//������ ���
	string song = "Falling in love with you";
	string elvis = string("Elvis Presley");
	string singer;								//������ Ű����� �Է�

	cout<<song + "�� �θ� ������ ";
	cout<<"(��Ʈ : ù ����" <<elvis[0]<<")?";

	getline(cin,singer);

	if(singer == elvis)
		cout<<"�¾ҽ��ϴ�." + me <<endl;
	else
		cout<<"Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�."<<endl;

	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main(){
	string me("Jeong SoYeon");					//������ ���
	string song = "Falling in love with you";
	string elvis = string("Elvis Presley");
	string singer;								//������ Ű����� �Է�

	while(1){			//while (true)
	cout<<song + "�� �θ� ������ ";
	cout<<"(��Ʈ : ù ����" <<elvis[0]<<")?";

	getline(cin,singer);

	if(singer == elvis){
		cout<<"�¾ҽ��ϴ�." + elvis + "�Դϴ�." <<endl;
		break;
	}
	else
		cout<<"Ʋ�Ƚ��ϴ�." + me + "�ٽ� �ѹ� ������ ������."<<endl;
	}
	return 0;
}
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	string num;
	string tel;
	string sub;
	string add;


	cout<<"��    �� : ";
	getline(cin, name);
	cout<<"��    �� : ";
	getline(cin, num);
	cout<<"��ȭ��ȣ : ";
	getline(cin, tel);

	cout<<"�������� : ";
	getline(cin, sub);
	cout<<"��    �� : ";
	getline(cin, add);

	return 0;
}
