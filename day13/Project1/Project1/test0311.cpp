#include<iostream>
using namespace std;

void cal(int n1, int n2)
{
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	try {
		if (!n2) throw n2;
		cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
	}
	catch (int exception) {
		
	}
}
int main()
{
	int n1, n2;
	cout << "정수 2개를 입력하세요 : ";
	cin >> n1 >> n2;
	try{
	cal(n1, n2);
	}
	catch (int exception) {
		cout << "0으로 나눌수 없습니다." << endl;
	}
	return 0;
}