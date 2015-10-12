#include"magazine.h"
#include<iostream>

Magazine::Magazine(void)
{
	std::cout << "Constructor is called Printed edition" << std::endl;
}

Magazine::~Magazine(void)
{
	std::cout << "Destructor is called Printed edition" << std::endl;
}


void Magazine::setTheme(char *theme)
{
	this->theme = theme;
}


char* Magazine::getTheme()
{
	return this->theme;
}

void Magazine::showcontent()
{
		std::cout << "------------Magazine content------------" << std::endl;
		std::cout << std::endl;
		std::cout << getNameOfOffice()<< std::endl;
		std::cout << getOfficeAddress() << std::endl;
		std::cout << getNameObj() << std::endl;
		std::cout << getNumbersOfCopies() << std::endl;
		std::cout << getNumbersOfPages() << std::endl;
		std::cout << getTheme() << std::endl;
		std::cout << this->getprice() << std::endl;
		std::cout << this->getYear() << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
	
}