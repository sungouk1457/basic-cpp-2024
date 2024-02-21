/*
	반복제어문:for문
*/
#include<iostream>

using namespace std;

int main() {
	int sum = 0; //누적되는 값을 지정 할때는 반드시 0으로 초기화
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	cout << sum << endl;

	return 0;
}