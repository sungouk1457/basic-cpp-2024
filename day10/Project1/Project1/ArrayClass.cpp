#include<iostream>
#include<cstdlib>
using namespace std;

class BonudCheckIntArray
{
private:
	int* arr;
	int arrlen;
public:
	BonudCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[](int idx)
	{
		if (idx<0 || idx>=arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			BonudCheckIntArray::~BonudCheckIntArray();
			exit(1);
		}
		return arr[idx];
	}
	~BonudCheckIntArray()
	{
		delete[]arr;
	}
};
int main()
{
	BonudCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;
	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
	return 0;
}