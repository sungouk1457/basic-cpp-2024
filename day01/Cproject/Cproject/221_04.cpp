/*
	�ݺ����:for��
*/
#include<iostream>

using namespace std;

int main() {
	int sum = 0; //�����Ǵ� ���� ���� �Ҷ��� �ݵ�� 0���� �ʱ�ȭ
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	cout << sum << endl;

	return 0;
}