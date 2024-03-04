#include<iostream>
using namespace std;

//클래스 Data를 흉내 낸 영역
typedef struct Data
{
	int data;
	void (*ShowData)(Data*); //ShowData 멤버함수 선언
	void (*Add)(Data*, int); //Add 멤버함수 선언
}Data;

void ShowData(Data* THIS) { cout << "Data : " << THIS->data << endl; } //ShowData 멤버함수 정의
void Add(Data* THIS, int num) { THIS->data + num; } //Add 멤버함수 정의

//적정히 변경된 main 함수
int main()
{
	Data obj1 = { 15,ShowData, Add }; //구조체 Data 변수 obj1 선언과 초기화
	Data obj2 = { 7,ShowData, Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);
}