#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Myclass
{
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname, int myage)
	{
		strcpy(name, myname);
		age = myage;
	}
	string getname() const
	{
		return name;
	}
	int getage() const
	{
		return age;
	}

};

class MyInfo : public Myclass
{
private:
	char pNumber[20];
public:
	MyInfo(const char* myname, int myage, const char* mypNumber) : Myclass(myname, myage)
	{
		strcpy(pNumber, mypNumber);
	}
	void printMyInfo()
	{
		cout << "���� �̸��� " << getname() << " �̰� ���̴� " << getage() << " ���̸� ��ȭ��ȣ�� " << pNumber << " �Դϴ�." << endl;
	}
};

int main()
{
	MyInfo my("ȫ�¿�", 26, "010-6413-6994");
	my.printMyInfo();
	return 0;
}