#include<iostream>
using namespace std;

int global1 = 100; //�������� - ���α׷� ��ü���� ��밡��
int global2 = 200;

int main() {
	int val = 100; //�������� - ����� ���������� ��밡��
	global1 = 200;
	int global2 = 300;
	cout << "��������(global1): "<< global1 << endl;
	cout << "��������: "<< val << endl;
	cout << "��������(global2): " << global2 << endl; //���������� ���������� �̸��� ������ ��� ���������� ��������
	return 0;
}

void func() {
	int val = 0;
	global1 = 10;
	global2 = 10;
	val = 10;
}
/*
int main(){
	const int num = 10; //num������ ���ȭ��Ų��
	num = 100; // X
}
*/