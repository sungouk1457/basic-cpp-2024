#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Grade
{
private:
	char* name;
	int kr, math, english;
public:
	Grade(const char* myname, int mykr , int mymath, int myenglish)
	{
		strcpy(name, myname);
		int kr = mykr;
		int math = mymath;
		int english = myenglish;
	}
	Grade operator+(const Grade& num) const
	{
		return Grade(kr + num.kr, math + num.math, english + num.english);
	}
	friend ostream& operator<<(ostream& os, const Grade& num);

	
};


int main()
{	
	return 0;
}