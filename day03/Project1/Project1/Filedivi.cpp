#include<iostream>
#include"Filedivi.h"

AClass::AClass(int anum)
{
	num = anum;
}
void AClass::Alnfo()
{
	std::cout << "AClass::num : " << num << std::endl;
}
Human::Human(char hname, int hage, char hjob) {
	char name = hname;
	int age = hage;
	char job = hjob;
}
void Human::humanlnfo()
{
	std::cout << "���� " << age << "����" << job << name << "�Դϴ�" << std::endl;
}
int main() {
	AClass a(10);
	a.Alnfo();

	Human h("ȫ�浿", 50, "���");
	h.humanlnfo();
	return 0;
}