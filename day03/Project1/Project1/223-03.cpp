#include<iostream>
#include<string.h>
using namespace std;
class Simple {
public:
	Simple() {    //������(Ŭ�����̸��� ���� �޼���)
		cout << "I'm simple constructor" << endl;
	}
};

int main(void) {
	cout << "case 1: " << endl;
	Simple* sp1 = new Simple;  //new�����ڸ� ���� ��ü ����

	cout << "case 2:" << endl;
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); //new�����ڸ� �̿��ؼ� �� ������ ������ �Ҵ�

	cout << endl << "end of main" << endl;
	delete sp1; //��ü�� ��ȯ�Ѵ�
	free(sp2); //malloc �Լ�ȣ���� ���ؼ� �� ������ ������ �Ҵ�
	return 0;
}