/*
	���������
*/
#include<iostream>
using namespace std;

class A 
{
public:
	A()
	{
		cout << "����Ʈ ������ ȣ��" << endl;
	}
	A(int n)
	{
		cout << "A(int n) ������ ȣ��" << endl;
	}
	A(const A& r) //���� ������
	{
		cout << "A(const A& r) ������ ȣ��" << endl;
	}
};

void func(int a)
{
	a++;
}

int main()
{
	int n = 10;
	A obj1;    //����Ʈ �����ڷ� ��ü ����
	A obj2(10); //�Է��ϳ� ������ ������ ȣ��
	A obj3(obj2); //��������� ȣ��
	func(n);
	return 0;
}