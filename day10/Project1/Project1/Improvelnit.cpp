#include<iostream>
using namespace std;

class AAA 
{
private:
	int num;
public:
	AAA(int n = 0) : num(n)
	{
		cout << "AAA(int n = 0)" << endl;
	}
	AAA(const AAA& ref) : num(ref.num)
	{
		cout << "AAA(const AAA& ref)" << endl;
	}
	AAA& operator = (const AAA& ref)
	{
		num = ref.num;
		cout << "operator = (const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;
public:
	BBB(const AAA& ref) : mem(ref){ }
};

class CCC
{
private:
	AAA mem;
public:
	CCC(const AAA& ref) { mem = ref; }
};

int main()
{
	AAA obj1(12);
	cout << "********************" << endl;
	BBB obj2(obj1);
	cout << "********************" << endl;
	CCC obj3(obj1);
	return 0;
}

/*
배열이름 ary는 배열의 시작주소이다
int ary[3] //배열 선언부에서 배열 인덱스에 있는 숫자는 방의 크기
ary[2] //코드 실행에서 배열 인덱스에 있는 숫자는 방 번호를 나타낸다
ary[0] = 10; //0번방, 첫번째방의 데이터
*(ary+0) = 10 //*(배열의 시작주소 +0) = 10
* ary의 주소가 0x0011 이라면, 1번방 주소는 0x0100
*/