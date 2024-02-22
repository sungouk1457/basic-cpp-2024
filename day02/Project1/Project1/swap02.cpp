//swap 함수 구현하기

#include <iostream>
using namespace std;

void swap(int* aa, int* ab) {   //주소를 받을수 있는 포인터변수를 선언
	int temp;
	temp = *aa;					//주소의 데이터를 참조
	*aa = *ab;                 
	*ab = temp;
}

int main() {
	int a = 100; //지역변수
	int b = 200;

	cout << "before" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	
	swap(&a, &b); //변수의 주소를 전달

	cout << "after" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	return 0;
}

/*
int num = 10; //일반적인 변수 선언
int* ptr = &num1; //num1의 주소를 저장
*/