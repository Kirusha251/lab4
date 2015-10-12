#pragma once 
#include"library.h"


class Publishing_Office:public Library
{
public:
	char *NameOfOffice;
	char *OfficeAddress;
public:
	virtual ~Publishing_Office(void){};
	virtual void setNameOfOffice(char *name)=0;
	virtual void setOfficeAddress(char *Address)=0;
	virtual char* getNameOfOffice()=0;
	virtual char* getOfficeAddress()=0;
};