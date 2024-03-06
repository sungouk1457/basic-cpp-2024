#include<iostream>
using namespace std;

class AAA 
{
private:
	int num;
public:
	AAA(int n = 0) : num(n)
	{
		cout << "AAA(int n = 0)" << endl;
	}
	AAA(const AAA& ref) : num(ref.num)
	{
		cout << "AAA(const AAA& ref)" << endl;
	}
	AAA& operator = (const AAA& ref)
	{
		num = ref.num;
		cout << "operator = (const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;
public:
	BBB(const AAA& ref) : mem(ref){ }
};

class CCC
{
private:
	AAA mem;
public:
	CCC(const AAA& ref) { mem = ref; }
};

int main()
{
	AAA obj1(12);
	cout << "********************" << endl;
	BBB obj2(obj1);
	cout << "********************" << endl;
	CCC obj3(obj1);
	return 0;
}

/*
�迭�̸� ary�� �迭�� �����ּ��̴�
int ary[3] //�迭 ����ο��� �迭 �ε����� �ִ� ���ڴ� ���� ũ��
ary[2] //�ڵ� ���࿡�� �迭 �ε����� �ִ� ���ڴ� �� ��ȣ�� ��Ÿ����
ary[0] = 10; //0����, ù��°���� ������
*(ary+0) = 10 //*(�迭�� �����ּ� +0) = 10
* ary�� �ּҰ� 0x0011 �̶��, 1���� �ּҴ� 0x0100
*/