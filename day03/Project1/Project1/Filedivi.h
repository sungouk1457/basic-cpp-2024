#pragma once
/*
	FIledivi.h 헤더파일: 선언
*/
class AClass {
	int num;

public:				//접근제어지시자
	AClass(int anum); //생성자:초기화담당
	void Alnfo();
};

class Human {
	char name; 
	int age; 
	char job;
public:
	Human(char hname, int hage, char hjob);
	void humanlnfo();
};