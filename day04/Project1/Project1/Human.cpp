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
		cout << "나이 > " << age << endl;
		cout << "생일 > " << year << endl;
		cout << "직업 > " << job << endl;
		cout << "이름 > " << name << endl;
	}
};

int main()
{
	Human h(26, 991203, "취업준비", "홍승욱");
	h.ShowHuman();
	return 0;
}