/*
#include<iostream>
using namespace std;

class point		//Ŭ������ �޸� Ȯ�� X
{				//�⺻ ����Ʈ ���� private:
	int x;		//��� ����
	int y;
};

int main(){

	point pt1;		//��ü (�޸� ����)
	point pt2;

	pt1.x=100;
	pt1.y=200;
	pt2.x=300;
	pt2.y=400;

	return 0;
}

#include<iostream>
using namespace std;

class point
{	public:
	int x;		//��� ����
	int y;
};

int main(){

	point pt1;
	point pt2;

	pt1.x=100;
	pt1.y=200;
	pt2.x=300;
	pt2.y=400;

	cout<<"pt1.x= "<<pt1.x<<" pt1.y= "<<pt1.y<<endl;
	cout<<"pt2.x= "<<pt2.x<<" pt2.y= "<<pt2.y<<endl;

	return 0;
}

#include<iostream>
using namespace std;

class point
{	public:
	int x;		//��� ����
	int y;
	void print()	//��� �Լ�
	{cout<<"x= "<<x<<" y= "<<y<<endl;	}
};

int main(){

	point pt1, pt2;

	pt1.x=100;	pt1.y=200;
	pt2.x=300;	pt2.y=400;

	pt1.print();
	pt2.print();

	//cout<<"pt1.x= "<<pt1.x<<" pt1.y= "<<pt1.y<<endl;
	//cout<<"pt2.x= "<<pt2.x<<" pt2.y= "<<pt2.y<<endl;

	return 0;
}

#include<iostream>
using namespace std;

class point
{	public:
	int x;		//��� ����
	int y;
	void print()	//��� �Լ�
	{cout<<"x= "<<x<<" y= "<<y<<endl;	}
};

int main(){

	point pt1, pt2;

	pt1.x=100;	pt1.y=200;
	pt2.x=300;	pt2.y=400;
	pt1.print();
	pt2.print();

	point pt3 = pt1;
	pt3.print();
	pt3 = pt2;
	pt3.print();

	return 0;
}

#include<iostream>
using namespace std;

class point
{	public:
	int x;		//��� ����
	int y;
	void print()	//��� �Լ�
	{cout<<this<<"  x= "<<this->x<<" y= "<<this->y<<endl;	}
};		//this�� ����Ʈ Ÿ���̸� ���� ��ü�� �ּ��̴�.

int main(){

	point pt1, pt2;

	pt1.x=100;	pt1.y=200;
	pt2.x=300;	pt2.y=400;
	pt1.print(); pt2.print();

	point pt3 = pt1;
	pt3.print();
	pt3 = pt2;
	pt3.print();

	return 0;
}
*/

#include<iostream>
using namespace std;

class point
{	public:
	int x;		//��� ����
	int y;
	void print()	//��� �Լ�
	{	int x=3333;
		//cout<<"  x= "<<x<<" y= "<<y<<endl;
		cout<<this<<"  x= "<<this->x<<" y= "<<this->y<<endl;	
	}
};		//this�� ����Ʈ Ÿ���̸� ���� ��ü�� �ּ��̴�.

int main(){

	point pt1, pt2;

	pt1.x=100;	pt1.y=200;
	pt2.x=300;	pt2.y=400;
	pt1.print(); pt2.print();

	point pt3 = pt1;
	pt3.print();
	pt3 = pt2;
	pt3.print();

	return 0;
}