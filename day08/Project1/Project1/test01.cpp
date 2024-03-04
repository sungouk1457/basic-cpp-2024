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
	virtual void on() { cout << "»ï¼º TV on" << endl; }
};

class LgTv : public RemoteControl
{
public:
	void on(){ cout << "¿¤Áö TV on" << endl; }
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