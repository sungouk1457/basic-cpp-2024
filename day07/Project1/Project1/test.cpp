#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

{
private:
	int age;
	char *name;
public:
	Person(int page,const char *pname)
	{
		int len = strlen(pname) + 1;
		name = new char[len];
		strcpy(name, pname);
		age = page;
	}
	void PesronInfo() const
	{
		cout << "���� : " << age << endl;
		cout << "�̸� : " << name << endl;
	}
	Person(Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};
int main()
{
	Person p(26,"ȫ�¿�");
	p.PesronInfo();
	
	Person copyp(p);
	copyp.PesronInfo();
	return 0;
}