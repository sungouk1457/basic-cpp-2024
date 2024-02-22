#include<iostream>
using namespace std;

int global1 = 100; //전역변수 - 프로그램 전체에서 사용가능
int global2 = 200;

int main() {
	int val = 100; //지역변수 - 선언된 범위에서만 사용가능
	global1 = 200;
	int global2 = 300;
	cout << "전역변수(global1): "<< global1 << endl;
	cout << "지역변수: "<< val << endl;
	cout << "전역변수(global2): " << global2 << endl; //지역변수와 전역변수의 이름이 동일할 경우 전역변수는 가려진다
	return 0;
}

void func() {
	int val = 0;
	global1 = 10;
	global2 = 10;
	val = 10;
}
/*
int main(){
	const int num = 10; //num변수를 상수화시킨다
	num = 100; // X
}
*/