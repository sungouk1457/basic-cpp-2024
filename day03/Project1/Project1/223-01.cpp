#include<iostream>
#include<string.h>
#include<stdlib.h>

#define _CRT_SECURE_NO_WARINGS

using namespace std;

char* MakeStrAdr(int len) {
	char * str = (char*)malloc(sizeof(char) * len); // heap������ �޸� �Ҵ�
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main(void) {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	cout << str << endl;
	free(str);
	return 0;
}