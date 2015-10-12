#include"print.h"
#include<iostream>

Print::Print(void)
{
	std::cout << "Constructor is called Printed edition " << std::endl;
}

Print::~Print(void)
{
	std::cout << "Denstructor is called Printed edition" << std::endl;
}


void Print::setNameObj(char *name)
{
	this->nameObj = name;
}



void Print::setNumbersOfCopies(int num)
{
	this->numbersOfCopies = num;
}

void Print::setNumbersOfPages(int num)
{
	this->numbersOfPages = num;
}


char* Print::getNameObj()
{
	return this->nameObj;
}

int	Print::getNumbersOfCopies()
{
	return this->numbersOfCopies;
}

int Print::getNumbersOfPages()
{
	return this->numbersOfPages;
}

void Print::setNameOfOffice(char *name)
{
	this->NameOfOffice = name;
}

void Print::setOfficeAddress(char *address)
{
	this->OfficeAddress = address;
}
char* Print::getNameOfOffice()
{
	return this->NameOfOffice;
}

char* Print::getOfficeAddress()
{
	return this->OfficeAddress;
}

void Print::showcontent()
{
	std::cout << "-----------Print content-------------" << std::endl;
	std::cout << this->getNameObj() << std::endl;
	std::cout << this->getNameOfOffice() << std::endl;
	std::cout << this->getNumbersOfCopies() << std::endl;
	std::cout << this->getNumbersOfPages() << std::endl;
	std::cout << this->getOfficeAddress() << std::endl;
	std::cout << this->getprice() << std::endl;
	std::cout <<this->getYear() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

}

