#include<iostream>

using namespace std;

void add(int a,int b) {
	int result = 0;
	result = a + b;
	cout << "���ϱ�:" << result << endl;
}
void min(int a, int b) {
	int result = 0;
	result = a - b;
	cout << "����:" << result << endl;
}
void mul(int a, int b) {
	int result = 0;
	result = a * b;
	cout << "���ϱ�:" << result << endl;
}
void dev(int a, int b) {
	int result = 0;
	result = a / b;
	cout << "������:" << result << endl;
}

int main() {
	int x, y;
	char op;

	cout << "�ΰ��������� �Է��ϼ���: ";
	cin >> x >> y;
	cout << "�����ڸ� �Է��ϼ���:";
	cin >> op;
	if(op == '+'){
		add(x, y);
	}
	else if (op == '-') {
		min(x, y);
	}
	else if (op == 'x') {
		mul(x, y);
	}
	else if (op == '/') {
		dev(x, y);
	}
	return 0;
}

/*
int main() {
	int x, y;
	char op;
	int result = 0;
	int sum = 0;

	cout << "�ΰ��������� �Է��ϼ���: ";
	cin >> x >> y;
	cout << "�����ڸ� �Է��ϼ���:";
	cin >> op;
	if (op == '+') {
		sum(x, y);
	}
	int sum(int x, int y); {
		result = x + y;
		return x+y;
	}
}
*/