#include<iostream>
using namespace std;

class Point
{
private:
	int num1, num2;
public:
	Point(int n1 = 0, int n2 = 0) : num1(n1),num2(n2)
	{ }
	void viewPoint() const
	{
		cout << '(' << num1 << ", "<< num2 << ')' << endl;
	}
	friend Point operator+(const Point& n1, const Point& n2);
};
Point operator+(const Point& n1, const Point& n2)
{
	Point pos(n1.num1 + n2.num1, n1.num2 + n2.num2);
	return pos;
}
int main()
{
	
	Point a(10, 20);
	a.viewPoint();
	Point b(30, 40);
	b.viewPoint();
	Point c = a + b;
	c.viewPoint();
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	//cout << c << endl;
	//cout << d << endl;
	//cout << e << endl;
	return 0;
}