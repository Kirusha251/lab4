#pragma once
#include "Person.h"

class Author:
	public Person
{
	int numbersOfBooks;
	char *firstbook;
public:
	Author(void);
	~Author(void);
	void setNumbersOfBooks(int num);
	void setFirsBook(char *first);
	int getNumbersOfbooks();
	char* getFirstBook();
	virtual void setName(char *name);
	virtual void setSurname(char *surname);
	virtual void setDateofBirthday(char *birth) ;
	virtual char* getName() ;
	virtual char* getSurname();
	virtual char* getDateofBirthday() ;

};