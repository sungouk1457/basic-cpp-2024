#include<iostream>
using namespace std;

class AA
{
	int a;
	int b;
public:
	AA(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	void AAInfo()
	{
		cout << a << " " << b << endl;
	}
};
int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();

	AA obj2(obj1); //복사생성자가 없지만 컴파일러가 자동적으로 호출
	obj2.AAInfo();
	return 0;
}