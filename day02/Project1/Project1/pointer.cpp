//������ ����
#include<iostream>

using namespace std;

int main() {
	const int num = 10; // num������ ���ȭ��Ų��
	//num = 100;    //num�� ����̹Ƿ� �����Ҽ� ����
	
	int num1 = 10;
	int *pnum1;            //�����ͺ��� ����: ������(�ּ�)���� pum1 ����
	pnum1 = &num1;         //���� num1�� �ּҰ��� �����ͺ��� punm1�� �����Ѵ�

	cout << "num�� ����� ��:"<< num << endl;
	cout << "num1�� ����� ��:" << num1 << endl;
	cout << "num1�� �ּ� ��:"<< &num1<< endl;
	cout << "pnum1�� ����� ��:"<< pnum1 << endl;
	cout << "pnum1�� ����� ���� ������:" << *pnum1 << endl;  //����Ű�� ���� ������
	
	return 0;
}