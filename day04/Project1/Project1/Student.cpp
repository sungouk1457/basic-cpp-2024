#include<iostream>
using namespace std;

class StudentClass
{
	int age;
	const int ID;
	char major[20]; //���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�
	char name[20];

public:  //���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�. -���ڿ��� ù��° ���� �ּҰ� ����ȴ�
		 //����̴ϼȶ������ ��ü ������ �ʱ�ȭ �����ʴ� ������� �ʱ�ȭ�Ҷ� ����Ѵ�.
		 //�� ��ü������ ������� �̸��ʱ�ȭ �Ǵ� ��
	StudentClass(int aage,int aID,const char *amajor,const char *aname) : ID(aID)//��� �̴ϼȶ�����
	{
		age = aage;
		//ID = aID;
		strcpy(major, amajor); //���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�
		strcpy(name, aname);

	}

	void StudentInfo()
	{
		cout << "���� : " << age << endl;
		cout << "�й� : " << ID << endl;
		cout << "���� : " << major << endl;
		cout << "�̸� : " << name << endl;
	}
};
int main()
{
	StudentClass s1(25, 20220398, "AI��ǻ��", "ȫ�¿�");
	s1.StudentInfo();
	return 0;
}