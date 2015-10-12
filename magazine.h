#pragma once
#include "print.h"
#include "author.h"


class Magazine:public Print
{
	char *theme;
public:
	Magazine(void);
	~Magazine(void);
	void setTheme(char *theme);
	char* getTheme();
	virtual void showcontent();
};