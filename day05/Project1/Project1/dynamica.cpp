/*
	�޸� �����Ҵ� : new ������ ���
	���α׷� ���� �߿� �޸𸮸� �Ҵ� �޴´�
*/

#include<iostream>
using namespace std;

int main() {
	cout << "int size : " << sizeof(int) << endl;
	int* pi = new int;  //new �����ڸ� ���ؼ� heap������ int(4byte) ũ�⸸ŭ �޸𸮰����� �Ҵ�ް� �Ҵ����
						//�޸��� �ּҸ� ���Ͻ����ش�.
	*pi = 10;
	cout << "pi�� ����Ű�� ���� ����� �� > " << *pi << endl;
	delete pi;   //���� �Ҵ���� �޸� ������ ��ȯ�Ѵ�

	int* pary = new int[10];  //�迭���·� �Ҵ�
	for (int i = 0; i < 10; i++) {
		pary[i] = i + 10; //�迭�� �� �濡 ����(���)���� ���� �ִ´� 
	}

	for (int i = 0; i < 10; i++) {
		printf("pary[&d] : %d\n", i, pary[i]);
	}
	delete  []pary;  //�迭�� �����Ҵ��� �޸𸮸� ��ȯ�Ѵ�
	return 0;
}