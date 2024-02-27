/*
	복사생성자
*/
#include<iostream>
using namespace std;

class A 
{
public:
	A()
	{
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int n)
	{
		cout << "A(int n) 생성자 호출" << endl;
	}
	A(const A& r) //복사 생성자
	{
		cout << "A(const A& r) 생성자 호출" << endl;
	}
};

void func(int a)
{
	a++;
}

int main()
{
	int n = 10;
	A obj1;    //디폴트 생성자로 객체 생성
	A obj2(10); //입력하나 가지는 생성자 호출
	A obj3(obj2); //복사생성자 호출
	func(n);
	return 0;
}