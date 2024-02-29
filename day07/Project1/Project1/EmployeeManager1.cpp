#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;

//PermanentWorker클래스 정의
class PermanentWorker
{
private:
	char name[100];
	int salary;		//매달 지불해야 하는 급여액
public:
	PermanentWorker(const char* name, int money)
		: salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name : " << name << endl;
		cout << "salary : " << GetPay() << endl << endl;
	}
};

//EmployeeHandler 클래스 정의
class EmployeeHandler
{
private:
	PermanentWorker* empList[50];  //객체 포인터 배열
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmoloyee(PermanentWorker* emp) //정규직 객체의 포인터를 받아서 empList 배열에 집어넣는다
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo(); //empList배열의 요소값(객체주소)을 통해서 멤버함수에 접근
	}
	void ShowTotalSaleary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main()
{
	//직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	//직원등록
	handler.AddEmoloyee(new PermanentWorker("Kim", 1000));
	handler.AddEmoloyee(new PermanentWorker("Lee", 1500));
	handler.AddEmoloyee(new PermanentWorker("Jun", 2000));

	//이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	//이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSaleary();
	return 0;
}