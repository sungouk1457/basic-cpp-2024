/*
	�������:if��
*/
#include <iostream>

using namespace std; //std ���ӽ����̽��� ������ ����ϰڴ�.

int main() {
	int inKey;
	cout << "���ڸ� �Է��ϼ���> ";
	cin >> inKey;

	if (inKey == 5) {  //if(���ǽ�){...���๮}
		cout << "����" << endl;
	}
	if (inKey > 5) {
		cout << "���ڰ� Ů�ϴ�" << endl;
	}
	if (inKey < 5) {
		cout << "���ڰ� �۽��ϴ�" << endl;
	}
	return 0;
}