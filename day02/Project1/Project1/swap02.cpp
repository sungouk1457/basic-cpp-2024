//swap �Լ� �����ϱ�

#include <iostream>
using namespace std;

void swap(int* aa, int* ab) {   //�ּҸ� ������ �ִ� �����ͺ����� ����
	int temp;
	temp = *aa;					//�ּ��� �����͸� ����
	*aa = *ab;                 
	*ab = temp;
}

int main() {
	int a = 100; //��������
	int b = 200;

	cout << "before" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	
	swap(&a, &b); //������ �ּҸ� ����

	cout << "after" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	return 0;
}

/*
int num = 10; //�Ϲ����� ���� ����
int* ptr = &num1; //num1�� �ּҸ� ����
*/