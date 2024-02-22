// 매개변수
#include<iostream>

using namespace std;


int Adder(int num1 = 1, int num2 = 2); //함수 선언

int main(void) {
	cout << Adder() << endl; //함수 호출:Adder()
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;
	return 0;
}

int Adder(int num1, int num2) { //함수 정의
	return num1 + num2;
}



// 클래스안에 들어가는 함수를 메서드라고 부른다