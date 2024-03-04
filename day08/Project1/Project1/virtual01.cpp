#include<iostream>
using namespace std;

class Base
{
public:
	Base() {};
	~Base() {};
	virtual void func1() { cout << "Base::func1" << endl; }
	virtual void func2() { cout << "Base::func2" << endl; }
	void func3() { cout << "Base::func3" << endl; }
};

class Derived : public Base
{
public:
	void func1() { cout << "Base::func1" << endl; }
	void func3() { cout << "Base::func3" << endl; }
	void func4() { cout << "Base::func4" << endl; }
};
int main()
{
	Base b; //BaseŸ���� ��ü����
	Derived d;  //
	Base* pb = new Derived(); //BaseŸ���� ��ü ������
	pb->func1();
	pb->func2();
	pb->func3();

	cout << endl;
	Derived* pd = &d;
	pd->func1();
	pd->func2();
	pd->func3();
	pd->func4();

	delete pb;
	return 0;
}