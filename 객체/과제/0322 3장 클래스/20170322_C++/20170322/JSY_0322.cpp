#include<iostream>
using namespace std;

class volleyball 
{
public:
	int num;		//��� ����
	int height;
	void member()	//��� �Լ�
	{
		cout<<"  ���ȣ= "<<num<<" ����= "<<height<<endl;
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
