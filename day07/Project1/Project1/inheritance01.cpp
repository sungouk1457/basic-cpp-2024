#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
private:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage)
	{
		cout << "부모 생성자 실행" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void whatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void howOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
	string major;
public:
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage)
	{
		cout << "자식 생성자 실행" << endl;
		this->major = major;
	}
	void whoAreYour() const
	{
		whatYourName();
		howOldAreYou();
		cout << "My major is " << major << endl;
	}
};

int main()
{
	UnivStudent s("홍승욱", 26, "개발자");
	s.whoAreYour();
	return 0;
}