#include<iostream>
using namespace std;

class RemoteControl
{
public:
	void on() { cout << "Tv on" << endl; }
};

class SamsungTv : public RemoteControl
{	
public:
	virtual void on() { cout << "�Ｚ TV on" << endl; }
};

class LgTv : public RemoteControl
{
public:
	void on(){ cout << "���� TV on" << endl; }
};

int main()
{
	RemoteControl *remote = new SamsungTv();
	remote->on();

	remote = new LgTv();
	remote->on();

	delete remote;
	return 0;
}