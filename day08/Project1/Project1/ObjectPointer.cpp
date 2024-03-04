#include<iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main()
{
	//Studnet* prt0 = new Student();  동일한 타입으로 사용하는 것이 원칙이다.
	/*
	부모타입의 객체 포인터로 자식 객체를 가르킬 수 있다
	하지만 자식타입의 객체 포인터로 부모 객체는 가리킬 수 없다
	그리고 접근은 객체 포인터의 타입을 따른다
	*/
	Person* prt1 = new Student();
	Person* prt2 = new PartTimeStudent();
	Student* prt3 = new PartTimeStudent();
	prt1->Sleep();
	prt2->Sleep();
	prt3->Study();
	delete prt1; delete prt2; delete prt3;
	return 0;
}