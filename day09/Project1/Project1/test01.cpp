#include<iostream>
using namespace std;

class Myclass
{
private:
	int num;
public:
	Myclass(int n = 0) : num(n)
	{ }
	void print() const
	{
		cout << "vlaue : " << num << endl;
	}
	Myclass operator+(const Myclass& ref)
	{
		Myclass anum(num + ref.num);
		return anum;
	}
};
int main()
{
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;
	c.print();

	Myclass d =a+b+c;
	d.print();
	return 0;
}