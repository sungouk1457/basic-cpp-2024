#include<iostream>
using namespace std;

class Human
{
	 int age;
	const int year;
	char job[20];
	char name[20];

public:
	Human(int aage, int ayear, const char* ajob, const char* aname) :year(ayear) {
		age = aage;
		strcpy(job, ajob);
		strcpy(name, aname);
	}
	void ShowHuman()
	{
		cout << "���� > " << age << endl;
		cout << "���� > " << year << endl;
		cout << "���� > " << job << endl;
		cout << "�̸� > " << name << endl;
	}
};

int main()
{
	Human h(26, 991203, "����غ�", "ȫ�¿�");
	h.ShowHuman();
	return 0;
}