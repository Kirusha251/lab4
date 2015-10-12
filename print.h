#pragma once
#include"publishing_office.h"

class Print:
	public Publishing_Office
{
	char *nameObj;
	int numbersOfCopies;
	int numbersOfPages;
	int price;
	int	yearOfPublishing;
public:
	Print(void);
	~Print(void);
	void setNameObj(char *name);
	void setNumbersOfCopies(int num);
	void setNumbersOfPages(int num);
	char* getNameObj();
	int getNumbersOfCopies();
	int getNumbersOfPages();
	void setYear(int year){ this->yearOfPublishing = year; }
	int getYear(){ return yearOfPublishing; }
	void setprice(int pp){ this->price = pp; };
	int getprice(){ return this->price; };
	virtual void setNameOfOffice(char *name);
	virtual void setOfficeAddress(char *Address);
	virtual char* getNameOfOffice();
	virtual char* getOfficeAddress();
	virtual	void showcontent();
};