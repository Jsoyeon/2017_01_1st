#include<iostream>
#include<string>
using namespace std;

int main() {

	char answer[30];

	while (true) {

		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(answer, 30, '\n');

		if (strcmp(answer, "yes") == 0)
		{
			cout << "종료합니다..." << endl;
			break;
		}
	}
	return 0;
}