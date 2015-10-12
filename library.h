#pragma once

class Library
{
protected:
	
public:
	static Library *Head;
	Library *next;
	static void show();
	virtual void add();
	virtual void showcontent(){};
	Library *getHead(){ return Head; };
	Library *getNext(){ return next; }
};
