//const

#include<iostream>

using namespace std;

int main() {
	const int num = 20; // 상수를 선언할때는 바로 초기화를 해야만 한다
	int& ref = num;
	ref += 10;
	cout << num << endl;
	return 0;
}