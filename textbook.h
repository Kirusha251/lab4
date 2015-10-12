#pragma once
#include "print.h"

class Textbook: 
	public Print
{
	int form;
	char *subject;
public:
	Textbook(void);
	void setForm(int form);
	void setSubject(char *subject);
	int getForm();
	char* getSubject();
	virtual void showcontent();
	~Textbook(void);
};