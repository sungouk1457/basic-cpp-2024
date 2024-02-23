// C++타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버함수를 가진다

#include<iostream>

typedef struct human {
	char name[20];
	int age;
	char job[20];

	void showHuman() {  //기능을 담당하는 멤버함수
		printf("name : %s age : %d job : %s\n", name, age, job);
	}
}Human;


int main() {
	int a = 10;
	human h1 = { "홍길동",50,"의적" };
	h1.showHuman();
	return 0;
}