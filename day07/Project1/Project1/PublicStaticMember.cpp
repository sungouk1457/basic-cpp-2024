#include<iostream>
using namespace std;

class SoSimple
{
public:	//���������� public
	static int simObjcnt; //static ������� ����(Ŭ���� ���)
public: //���ʿ������� ������ �Լ��� ������ �������� �����ϱ⵵ ��
	SoSimple()
	{
		simObjcnt++;
	}
};
int SoSimple::simObjcnt = 0;  //static ��������� �ʱ�ȭ

int main()
{
	cout << SoSimple::simObjcnt << "��° SoSimple ��ü" << endl;  //Ŭ�����̸����� static����� ���ٰ���
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjcnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjcnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjcnt << "��° SoSimple ��ü" << endl;
	return 0;
}