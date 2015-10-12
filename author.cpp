#include "author.h"
#include <iostream>


Author::Author(void)
{
	std::cout << "Constructor is called Author" << std::endl;
}

Author::~Author(void)
{
	std::cout << "Destructor is called Author" << std::endl;
}

void Author::setFirsBook(char *first)
{
	this->firstbook = first;
}

void Author::setNumbersOfBooks(int num)
{
	this->numbersOfBooks = num;
}

char* Author::getFirstBook()
{
	return this->firstbook; 
}

int  Author::getNumbersOfbooks()
{
	return this->numbersOfBooks;
}



void Author::setName(char *name)
{
	this->Name = name;
}

void Author::setSurname(char *surname)
{
	this->Surname = surname;
}

void Author::setDateofBirthday(char *birthday)
{
	this->dateofBirthday = birthday;
}

char* Author::getName()
{
	return this->Name;
}

char* Author::getDateofBirthday()
{
	return this->dateofBirthday;
}

char* Author::getSurname()
{
	return this->Surname;
}
