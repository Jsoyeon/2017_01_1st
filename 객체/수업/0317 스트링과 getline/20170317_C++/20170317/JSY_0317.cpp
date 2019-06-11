/*
#include<iostream>
#include<string>
using namespace std;

int main(){
	string song = "Falling in love with you";	//두가지 방법 (같음)
	string elvis = string("Elvis Presley");		
	string singer;								//데이터 키보드로 입력

	cout<<song + "를 부른 가수는 ";
	cout<<"(힌트 : 첫 글자" <<elvis[0]<<")?";

	getline(cin,singer);

	if(singer == elvis)
		cout<<"맞았습니다.";
	else
		cout<<"틀렸습니다." + elvis + "입니다."<<endl;

	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main(){
	string me("Jeong SoYeon");					//세가지 방법
	string song = "Falling in love with you";
	string elvis = string("Elvis Presley");
	string singer;								//데이터 키보드로 입력

	cout<<song + "를 부른 가수는 ";
	cout<<"(힌트 : 첫 글자" <<elvis[0]<<")?";

	getline(cin,singer);

	if(singer == elvis)
		cout<<"맞았습니다." + me <<endl;
	else
		cout<<"틀렸습니다." + elvis + "입니다."<<endl;

	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main(){
	string me("Jeong SoYeon");					//세가지 방법
	string song = "Falling in love with you";
	string elvis = string("Elvis Presley");
	string singer;								//데이터 키보드로 입력

	while(1){			//while (true)
	cout<<song + "를 부른 가수는 ";
	cout<<"(힌트 : 첫 글자" <<elvis[0]<<")?";

	getline(cin,singer);

	if(singer == elvis){
		cout<<"맞았습니다." + elvis + "입니다." <<endl;
		break;
	}
	else
		cout<<"틀렸습니다." + me + "다시 한번 생각해 보세요."<<endl;
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


	cout<<"이    름 : ";
	getline(cin, name);
	cout<<"학    번 : ";
	getline(cin, num);
	cout<<"전화번호 : ";
	getline(cin, tel);

	cout<<"수강과목 : ";
	getline(cin, sub);
	cout<<"주    소 : ";
	getline(cin, add);

	return 0;
}
