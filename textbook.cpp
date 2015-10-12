#include"textbook.h"
#include<iostream>



Textbook:: Textbook(void)
{
	std::cout << "Constructor is called TextBook" << std::endl;
}

Textbook:: ~Textbook(void)
{
	std::cout << "Destructor is called TextBook" << std::endl;
}

void Textbook::setForm(int form)
{
	this->form = form;
}

void Textbook::setSubject(char *subject)
{
	this->subject = subject;
}

int Textbook::getForm()
{
	return this->form;
}

char* Textbook::getSubject()
{
	return this->subject;
}

void Textbook::showcontent()
{
	std::cout << "-----------Textbook content------------" << std::endl;
	std::cout << this->getNameObj() << std::endl;
	std::cout << this->getNameOfOffice() << std::endl;
	std::cout << this->getNumbersOfCopies() << std::endl;
	std::cout << this->getNumbersOfPages() << std::endl;
	std::cout << this->getOfficeAddress() << std::endl;
	std::cout << this->getprice() << std::endl;
	std::cout << this->getYear() << std::endl;
	std::cout << this->getForm() << std::endl;
	std::cout << this->getSubject() << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}