#include<iostream>
#include"Product.h"

class Book : public Product
{
private:
	string ISBN;
	string auther;
	string title;
public:
	Book(int id = 0, string price, string producer, string ISBN, string auther, string title)
		: Product(id,price, producer)
	{
		this->auther = auther;
		this->ISBN = ISBN;
		this->title = title;
	}
	void show();
	string gettitle() { return title; }
	string getauther() { return auther; }
	string getISBN() { return ISBN; }
};

void Book::show() {
	cout << "ID : " << getId() << endl;
	cout << "producer : " << getPro() << endl;
	cout << "price : " << getPrice() << endl;
	cout << "title : " << gettitle() << endl;
	cout << "auther : " << getauther() << endl;
	cout << "getISBN : " << getISBN() << endl;
}