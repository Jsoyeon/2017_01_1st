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
	id2.setName("�𽺹�");

	cout << "���� �й��� "<<id1.getNo()<<" �̴�. " << endl;
	cout << "���� �̸��� "<<id1.getName()<<" �̴�. " << endl;
	cout << "���� �й��� "<<id2.getNo()<<" �̴�. " << endl;
	cout << "���� �̸��� "<<id2.getName()<<" �̴�. " << endl;
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
	id2.setName("�𽺹�");

	cout << "���� �й��� "<<id1.getNo()<<" �̴�. " << endl;
	cout << "���� �̸��� "<<id1.getName()<<" �̴�. " << endl;
	cout << "���� �й��� "<<id2.getNo()<<" �̴�. " << endl;
	cout << "���� �̸��� "<<id2.getName()<<" �̴�. " << endl;
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

	cout << "���� �ڵ����� �ӵ��� " << BmwCar.speed << " �Դϴ�." << endl;
	cout << "���� �ڵ����� ������ " << BmwCar.color<< " �Դϴ�." << endl;
	BmwCar.speedUp();
	cout << "���� �ڵ����� �ӵ��� " << BmwCar.speed << " �Դϴ�." << endl;
	BmwCar.speedDown();
	cout << "���� �ڵ����� �ӵ��� " << BmwCar.speed << " �Դϴ�." << endl;
	BmwCar.speedDown();
	cout << "���� �ڵ����� �ӵ��� " << BmwCar.speed << " �Դϴ�." << endl;

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

	cout << "���� �ڵ����� �ӵ��� " << BmwCar.getSpeed() << " �Դϴ�." << endl;
	cout << "���� �ڵ����� ������ " << BmwCar.getColor() << " �Դϴ�." << endl;
	BmwCar.speedUp();
	cout << "���� �ڵ����� �ӵ��� " << BmwCar.getSpeed() << " �Դϴ�." << endl;
	BmwCar.speedDown();
	cout << "���� �ڵ����� �ӵ��� " << BmwCar.getSpeed() << " �Դϴ�." << endl;
	BmwCar.speedDown();
	cout << "���� �ڵ����� �ӵ��� " << BmwCar.getSpeed() << " �Դϴ�." << endl;

	return 0;
}
