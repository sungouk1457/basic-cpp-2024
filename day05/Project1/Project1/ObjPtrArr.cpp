#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
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
	Person* parr[3]; //객체포인터배열
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름 > ";
		cin >> namestr;
		cout << "나이 > ";
		cin >> age;
		parr[i] = new Person(namestr, age); //힙영역에 객체를 생성한다
	}

	parr[0]->ShowPersonInfo();  //객페포인트를 가지고 멤버에 접근한다
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];
	return 0;
}