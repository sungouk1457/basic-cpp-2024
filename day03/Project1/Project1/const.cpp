//const

#include<iostream>

using namespace std;

int main() {
	const int num = 20; // ����� �����Ҷ��� �ٷ� �ʱ�ȭ�� �ؾ߸� �Ѵ�
	int& ref = num;
	ref += 10;
	cout << num << endl;
	return 0;
}