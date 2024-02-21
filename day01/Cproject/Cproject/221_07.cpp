#include<iostream>

using namespace std;

void add(int a,int b) {
	int result = 0;
	result = a + b;
	cout << "더하기:" << result << endl;
}
void min(int a, int b) {
	int result = 0;
	result = a - b;
	cout << "빼기:" << result << endl;
}
void mul(int a, int b) {
	int result = 0;
	result = a * b;
	cout << "곱하기:" << result << endl;
}
void dev(int a, int b) {
	int result = 0;
	result = a / b;
	cout << "나누기:" << result << endl;
}

int main() {
	int x, y;
	char op;

	cout << "두개의정수를 입력하세요: ";
	cin >> x >> y;
	cout << "연산자를 입력하세요:";
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

	cout << "두개의정수를 입력하세요: ";
	cin >> x >> y;
	cout << "연산자를 입력하세요:";
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