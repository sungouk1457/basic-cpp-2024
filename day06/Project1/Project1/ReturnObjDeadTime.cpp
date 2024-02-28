#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Project : " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj : " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj : " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR : " << &ob << endl;  //&ob : 按眉ob狼 林家
	return ob;
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);  //烙矫按眉林家 历厘
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/*
New Project : 0000009F7F0FF634 //按眉 obj林家
New Copy obj : 0000009F7F0FF734 //按眉 ob林家
Parm ADR : 0000009F7F0FF734 //按眉 ob林家
New Copy obj : 0000009F7F0FF774 //烙矫按眉林家
Destroy obj : 0000009F7F0FF734 //按眉 ob 家戈
Destroy obj : 0000009F7F0FF774 //烙矫 按眉 家戈

New Copy obj : 0000009F7F0FF794 //按眉 ob林家
Parm ADR : 0000009F7F0FF794 //按眉 ob林家
New Copy obj : 0000009F7F0FF654 //烙矫按眉林家
Destroy obj : 0000009F7F0FF794 //按眉 ob 家戈
Return Obj 0000009F7F0FF654 //烙矫按眉林家
Destroy obj : 0000009F7F0FF654 //烙矫 按眉 家戈
Destroy obj : 0000009F7F0FF634 //按眉 obj 家戈
*/