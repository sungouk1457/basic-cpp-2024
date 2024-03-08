#ifndef __TEST1_H_
#define __TEST1_H_

#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
	int id;
	string price;
	string producer;
public:
	Product() {}
	Product(int id, string price, string roducer)
	{
		id = id;
		this->price = price;
		this->producer = producer;
	}
	virtual void show() = 0;
	int getId() { return id; }
	string getPrice() { return price; }
	string getPro() { return producer; }
};
#endif 
