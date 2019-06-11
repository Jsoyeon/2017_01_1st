#include<iostream>
using namespace std;

class volleyball 
{
public:
	int num;		//멤버 변수
	int height;
	void member()	//멤버 함수
	{
		cout<<"  등번호= "<<num<<" 신장= "<<height<<endl;
	}
};	

int main() {

	volleyball YU, RYU;

	YU.num = 7;	YU.height = 184;
	RYU.num = 8;	RYU.height = 196;
	YU.member(); RYU.member();

	volleyball WHO = YU;
		WHO.member();
		WHO = RYU;
		WHO.member();

	return 0;
}
