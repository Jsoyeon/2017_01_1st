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
	void MakeB1() { cout << "1번손님, 주문하신 메뉴는 " << menu << "이고 금액은 " << cost << "원입니다." << endl; }
	void MakeB2() { cout << "2번손님, 주문하신 메뉴는 " << menu << "이고 금액은 " << cost << "원입니다." << endl; }
};

int main() {
	BurgerKing B1, B2;
	B1.MakeB1();
	B2.MakeB2();
}