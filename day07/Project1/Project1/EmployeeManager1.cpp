#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;

//PermanentWorkerŬ���� ����
class PermanentWorker
{
private:
	char name[100];
	int salary;		//�Ŵ� �����ؾ� �ϴ� �޿���
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

//EmployeeHandler Ŭ���� ����
class EmployeeHandler
{
private:
	PermanentWorker* empList[50];  //��ü ������ �迭
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmoloyee(PermanentWorker* emp) //������ ��ü�� �����͸� �޾Ƽ� empList �迭�� ����ִ´�
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo(); //empList�迭�� ��Ұ�(��ü�ּ�)�� ���ؼ� ����Լ��� ����
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
	//���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	//�������
	handler.AddEmoloyee(new PermanentWorker("Kim", 1000));
	handler.AddEmoloyee(new PermanentWorker("Lee", 1500));
	handler.AddEmoloyee(new PermanentWorker("Jun", 2000));

	//�̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	//�̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSaleary();
	return 0;
}