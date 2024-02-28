#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy)   //깊은 복사를 위한 복사 생성자 
	{
		cout << "깊은 복사생성자 호출" << endl;
		this->name = new char[strlen(copy.name) + 1];  //메모리 공간 할당후 문자열 복사
		strcpy(name, copy.name);		//할당된 메모리의 주소값을 멤버 name에 저장
		this->age = copy.age; //멤버대 멤버 복사
	}
	void ShowPerson() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};
int main()
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPerson();
	man2.ShowPerson();
	return 0;
}

int func(int a) {  //a= 10;, num의 10을 복사해서 사용한다
	a = 10 + a;
	return a;  //a를 리턴한다
}

int num = 10;
int res = func(num);
