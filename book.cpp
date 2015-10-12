#include "book.h"
#include<iostream>

Book::Book(void)
{
	std::cout << "Constructor is called Book" << std::endl;
}

Book::~Book(void)
{
	std::cout << "Destructor is called Book" << std::endl;
}


int Book::getprice()
{
	return this->price;
}
void Book::setGenre(char *gen)
{
	this->genre = gen;
}

void Book::setprice(int pr)
{
	this->price = pr;
}
void Book::setNumbparts(int cop)
{
	this->numberOfparts = cop;
}

int Book::getNumpCop()
{
	return this->numberOfparts;
}

char* Book::getGenre()
{
	return this->genre;
}

void Book::setAuth(char *name, char *surname)
{
	this->AuthName.setName(name);
	this->AuthName.setSurname(surname);
}

char* Book::getAuthName()
{
	return this->AuthName.getName();
}

char* Book::getAuthSurname()
{
	return this->AuthName.getSurname();
}

void Book::showcontent()
{
	std::cout << "------------Book content------------" << std::endl;
	std::cout << std::endl;
	std::cout << getAuthName() << std::endl;
	std::cout << getAuthSurname() << std::endl;
	std::cout << getGenre() << std::endl;
	std::cout << getNameObj()<< std::endl;
	std::cout << this->getNameOfOffice() << std::endl;
	std::cout << this->getNumbersOfCopies() << std::endl;
	std::cout << this->getNumbersOfPages() << std::endl;
	std::cout << this->getOfficeAddress() << std::endl;
	std::cout << this->getprice() << std::endl;
	std::cout << this->getYear() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}

