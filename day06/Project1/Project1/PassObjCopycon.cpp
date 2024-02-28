#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple & copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()  //멤버함수 --> 객체 생성하고 사용이 가능하다
	{
		cout << "num : " << endl;
	}
};

void SimpleFuncobj(SoSimple ob) //전역함수 --> 누가나 접근 가능
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncobj(obj);
	cout << "함수호출 후" << endl;
	return 0;
}