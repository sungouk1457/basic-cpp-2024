#include <iostream>

int global = 100;

void func() {
	int a = 100;
}

int main(void) {
	int val1; //�޸� ����(RAM)�� intũ��� ��������� �Ҵ�ް� val�̸����� ����Ѵ�
	std::cout << "ù��° �����Է�: ";
	std::cin >> val1;

	int val2;
	std::cout << "�ι�° �����Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "������� : " << result << std::endl;
	return 0;
}
/*
	�������� = ���ú���(����Ǿ��� �����ȿ����� ����� ���� static ������ ����)
*/