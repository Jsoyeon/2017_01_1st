#include<iostream>
#include<string>
using namespace std;

int main() {

	char answer[30];

	while (true) {

		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(answer, 30, '\n');

		if (strcmp(answer, "yes") == 0)
		{
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
	return 0;
}