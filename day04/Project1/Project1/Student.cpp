#include<iostream>
using namespace std;

class StudentClass
{
	int age;
	const int ID;
	char major[20]; //문자열배열을 선언하고 바로 초기화하지 않는경우는 strcpy()를 통하여 초기화 한다
	char name[20];

public:  //문자열은 주소기 때문에 포이터 변수에 넣어서 사용한다. -문자열의 첫번째 문자 주소가 저장된다
		 //멤버이니셜라이즈는 객체 생성시 초기화 되지않는 멤버들을 초기화할때 사용한다.
		 //즉 객체생성과 상관없이 미리초기화 되는 것
	StudentClass(int aage,int aID,const char *amajor,const char *aname) : ID(aID)//멤버 이니셜라이즈
	{
		age = aage;
		//ID = aID;
		strcpy(major, amajor); //문자열배열을 선언하고 바로 초기화하지 않는경우는 strcpy()를 통하여 초기화 한다
		strcpy(name, aname);

	}

	void StudentInfo()
	{
		cout << "나이 : " << age << endl;
		cout << "학번 : " << ID << endl;
		cout << "전공 : " << major << endl;
		cout << "이름 : " << name << endl;
	}
};
int main()
{
	StudentClass s1(25, 20220398, "AI컴퓨터", "홍승욱");
	s1.StudentInfo();
	return 0;
}