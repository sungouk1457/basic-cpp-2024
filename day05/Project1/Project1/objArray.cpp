/*
	��ü�迭	
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;
public:
	Human(const char *hname, int hage )
	{
		cout << "������ ȣ��" << endl;
		strcpy(name, hname);
		age = hage;
	}
	void HumanInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Human()
	{	
		cout << "�Ҹ��� ȣ��" << endl;

	}
};
int main()
{
	Human h[3] = { Human("ȫ�浿",50),Human("��ö��",40),Human("�迵��",30) }; //��ü�迭

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 50); //��ü������ 
	delete h1;//�����Ҵ� ����
	return 0;
}