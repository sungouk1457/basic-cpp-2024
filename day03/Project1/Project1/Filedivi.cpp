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
	std::cout << "나는 " << age << "살인" << job << name << "입니다" << std::endl;
}
int main() {
	AClass a(10);
	a.Alnfo();

	Human h("홍길동", 50, "백수");
	h.humanlnfo();
	return 0;
}