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
	cout << "Parm ADR : " << &ob << endl;  //&ob : ��üob�� �ּ�
	return ob;
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);  //�ӽð�ü�ּ� ����
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/*
New Project : 0000009F7F0FF634 //��ü obj�ּ�
New Copy obj : 0000009F7F0FF734 //��ü ob�ּ�
Parm ADR : 0000009F7F0FF734 //��ü ob�ּ�
New Copy obj : 0000009F7F0FF774 //�ӽð�ü�ּ�
Destroy obj : 0000009F7F0FF734 //��ü ob �Ҹ�
Destroy obj : 0000009F7F0FF774 //�ӽ� ��ü �Ҹ�

New Copy obj : 0000009F7F0FF794 //��ü ob�ּ�
Parm ADR : 0000009F7F0FF794 //��ü ob�ּ�
New Copy obj : 0000009F7F0FF654 //�ӽð�ü�ּ�
Destroy obj : 0000009F7F0FF794 //��ü ob �Ҹ�
Return Obj 0000009F7F0FF654 //�ӽð�ü�ּ�
Destroy obj : 0000009F7F0FF654 //�ӽ� ��ü �Ҹ�
Destroy obj : 0000009F7F0FF634 //��ü obj �Ҹ�
*/