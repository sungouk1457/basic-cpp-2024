/*
배열의 표현식
*/
#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 }; //int형 배열선언
	int *parr = arr; //배열의 이름은 주소이다

	printf("arr 주소 : %p\n", arr);
	printf("arr 크기 : %u\n", sizeof(arr)); //int크기 4x방갯수5 = 20byte

	printf("arr 주소[0] : %p\n", &arr[0]); //arr 0번방의 주소
	printf("arr 주소[1] : %p\n", &arr[1]); //arr 1번방의 주소
	printf("arr +1 : %p\n", arr+1);
	//===========================================
	printf("parr 주소 : %p\n", &parr);
	printf("parr 데이터 : %p\n", parr); //배열 arr의 주소를 지정하고 있다
	printf("parr + 1 : %p\n", parr + 1);
	printf("parr[0] : %d   *pa : %d   arr[0] : %d\n", parr[0], *parr, arr[0]);
	return 0;
}