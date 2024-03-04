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
	//Studnet* prt0 = new Student();  ������ Ÿ������ ����ϴ� ���� ��Ģ�̴�.
	/*
	�θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� �ִ�
	������ �ڽ�Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų �� ����
	�׸��� ������ ��ü �������� Ÿ���� ������
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