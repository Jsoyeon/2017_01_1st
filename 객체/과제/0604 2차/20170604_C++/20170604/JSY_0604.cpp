#include <iostream>
#include <string>
using namespace std;

class BurgerKing {
	string menu;
	int cost;
public:
	BurgerKing() { menu = "Whopper"; cost = 5600; }
	void OrderM(string me) { menu = me; }
	void OrderC(int co) { cost = co; }
	void MakeB1() { cout << "1���մ�, �ֹ��Ͻ� �޴��� " << menu << "�̰� �ݾ��� " << cost << "���Դϴ�." << endl; }
	void MakeB2() { cout << "2���մ�, �ֹ��Ͻ� �޴��� " << menu << "�̰� �ݾ��� " << cost << "���Դϴ�." << endl; }
};

int main() {
	BurgerKing B1, B2;
	B1.MakeB1();
	B2.MakeB2();
}