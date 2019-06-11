/*
#include<iostream>
using namespace std;

class point		//클래스는 메모리 확보 X
{				//기본 디폴트 접근 private:
	int x;		//멤버 변수
	int y;
};

int main(){

	point pt1;		//객체 (메모리 있음)
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
	int x;		//멤버 변수
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
	int x;		//멤버 변수
	int y;
	void print()	//멤버 함수
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
	int x;		//멤버 변수
	int y;
	void print()	//멤버 함수
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
	int x;		//멤버 변수
	int y;
	void print()	//멤버 함수
	{cout<<this<<"  x= "<<this->x<<" y= "<<this->y<<endl;	}
};		//this는 포인트 타입이며 현재 객체의 주소이다.

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
	int x;		//멤버 변수
	int y;
	void print()	//멤버 함수
	{	int x=3333;
		//cout<<"  x= "<<x<<" y= "<<y<<endl;
		cout<<this<<"  x= "<<this->x<<" y= "<<this->y<<endl;	
	}
};		//this는 포인트 타입이며 현재 객체의 주소이다.

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