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
	void ShowData()  //����Լ� --> ��ü �����ϰ� ����� �����ϴ�
	{
		cout << "num : " << endl;
	}
};

void SimpleFuncobj(SoSimple ob) //�����Լ� --> ������ ���� ����
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncobj(obj);
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;
}