/*
	�������:if else��
*/
#include<iostream>

using namespace std;

int main() {
	int inKey;
	cout << "���� �Է�: ";
	cin >> inKey;

	if (inKey == 5) {
		cout << "����" << endl;
	}
	else if (inKey > 5) {
		cout << "���ڰ� Ů�ϴ�" << endl;
	}
	else if (inKey < 5) {
		cout << "���ڰ� �۽��ϴ�" << endl;
	}
	else cout << "�߸��Է��ϼ̽��ϴ�" << endl;
	return 0;
}