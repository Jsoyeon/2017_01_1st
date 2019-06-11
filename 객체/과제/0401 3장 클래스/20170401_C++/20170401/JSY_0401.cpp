/*
#include<iostream>
#include<string>
using namespace std;

class Student{
private:
int no;
string name;
public:
void setNo(int n)	{ no = n; }
void setName(string na)	{ name = na; }
int getNo()	{ return no; }
string getName()	{ return name; }
};

int main() {
	Student id1, id2;
	id1.setNo(123);
	id2.setNo(201212345);
	id1.setName("Jasmine");
	id2.setName("쟈스민");

	cout << "나의 학번은 "<<id1.getNo()<<" 이다. " << endl;
	cout << "나의 이름은 "<<id1.getName()<<" 이다. " << endl;
	cout << "나의 학번은 "<<id2.getNo()<<" 이다. " << endl;
	cout << "나의 이름은 "<<id2.getName()<<" 이다. " << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	int no;
	string name;
public:
	void setNo(int n);
	void setName(string na);
	int getNo();
	string getName();
};
void Student ::setNo(int n)	{	no = n;}
void Student::setName(string na)	{	name = na;}
int Student::getNo()	{	return no;}
string Student::getName()	{	return name;}

int main() {
	Student id1, id2;
	id1.setNo(123);
	id2.setNo(201212345);
	id1.setName("Jasmine");
	id2.setName("쟈스민");

	cout << "나의 학번은 "<<id1.getNo()<<" 이다. " << endl;
	cout << "나의 이름은 "<<id1.getName()<<" 이다. " << endl;
	cout << "나의 학번은 "<<id2.getNo()<<" 이다. " << endl;
	cout << "나의 이름은 "<<id2.getName()<<" 이다. " << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int speed;
	int gear;
	string color;
	void speedUp() { speed += 10; }
	void speedDown() { speed -= 10; }
};

int main() {
	Car BmwCar;
	BmwCar.speed = 100;
	BmwCar.color = "white";

	cout << "현재 자동차의 속도는 " << BmwCar.speed << " 입니다." << endl;
	cout << "현재 자동차의 색상은 " << BmwCar.color<< " 입니다." << endl;
	BmwCar.speedUp();
	cout << "현재 자동차의 속도는 " << BmwCar.speed << " 입니다." << endl;
	BmwCar.speedDown();
	cout << "현재 자동차의 속도는 " << BmwCar.speed << " 입니다." << endl;
	BmwCar.speedDown();
	cout << "현재 자동차의 속도는 " << BmwCar.speed << " 입니다." << endl;

	return 0;
}
*/


#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	void setSpeed(int s) { speed = s; }
	void setGear(int g) { gear = g; }
	void setColor(string c) { color = c; }

	int getSpeed() { return speed; }
	int getGear() { return gear; }
	string getColor() { return color; }

	void speedUp() { speed += 10; }
	void speedDown() { speed -= 10; }
};

int main() {
	Car BmwCar;
	BmwCar.setSpeed(100);
	BmwCar.setColor("white");

	cout << "현재 자동차의 속도는 " << BmwCar.getSpeed() << " 입니다." << endl;
	cout << "현재 자동차의 색상은 " << BmwCar.getColor() << " 입니다." << endl;
	BmwCar.speedUp();
	cout << "현재 자동차의 속도는 " << BmwCar.getSpeed() << " 입니다." << endl;
	BmwCar.speedDown();
	cout << "현재 자동차의 속도는 " << BmwCar.getSpeed() << " 입니다." << endl;
	BmwCar.speedDown();
	cout << "현재 자동차의 속도는 " << BmwCar.getSpeed() << " 입니다." << endl;

	return 0;
}
