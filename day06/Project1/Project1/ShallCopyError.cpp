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
		cout << "������ ȣ��" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy)   //���� ���縦 ���� ���� ������ 
	{
		cout << "���� ��������� ȣ��" << endl;
		this->name = new char[strlen(copy.name) + 1];  //�޸� ���� �Ҵ��� ���ڿ� ����
		strcpy(name, copy.name);		//�Ҵ�� �޸��� �ּҰ��� ��� name�� ����
		this->age = copy.age; //����� ��� ����
	}
	void ShowPerson() const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
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

int func(int a) {  //a= 10;, num�� 10�� �����ؼ� ����Ѵ�
	a = 10 + a;
	return a;  //a�� �����Ѵ�
}

int num = 10;
int res = func(num);
