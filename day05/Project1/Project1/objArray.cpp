/*
	°´Ã¼¹è¿­	
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
		cout << "»ý¼ºÀÚ È£Ãâ" << endl;
		strcpy(name, hname);
		age = hage;
	}
	void HumanInfo() {
		cout << "ÀÌ¸§ : " << name << endl;
		cout << "³ªÀÌ : " << age << endl;
	}
	~Human()
	{	
		cout << "¼Ò¸êÀÚ È£Ãâ" << endl;

	}
};
int main()
{
	Human h[3] = { Human("È«±æµ¿",50),Human("±èÃ¶¼ö",40),Human("±è¿µÈñ",30) }; //°´Ã¼¹è¿­

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("°¡³ª´Ù", 50); //°´Ã¼Æ÷ÀÎÅÍ 
	delete h1;//µ¿ÀûÇÒ´ç ÇØÁ¦
	return 0;
}