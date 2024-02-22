//매개변수
#include<iostream>

using namespace std;

void func(); //함수 선언

int main() {
	func();
	return 0;
}
void func() { //사용자 함수
	cout << "func()" << endl;
}