#pragma once
#include"library.h"



class Manager
{
public:

	int bookPrice(Library &bel)
	{
		Textbook qwerty;
		Book book;
		Magazine magazine;
		Print print;
		Library *helper;
		helper = bel.getHead();
		int allPrice = 0;
		while (helper != 0)
		{

			if (typeid(*helper).name() == typeid(qwerty).name())
			{
				qwerty = dynamic_cast<Textbook&>(*helper);
				allPrice = allPrice + qwerty.getprice();
			}
			else
			if (typeid(*helper).name() == typeid(book).name())
			{
				book = dynamic_cast<Book&>(*helper);
				allPrice = allPrice + book.getprice();
			}
			else
			if (typeid(*helper).name() == typeid(magazine).name())
			{
				magazine = dynamic_cast<Magazine&>(*helper);
				allPrice = allPrice + magazine.getprice();
			}
			else
			if (typeid(*helper).name() == typeid(print).name())
			{
				print = dynamic_cast<Print&>(*helper);
				allPrice = allPrice + print.getprice();
			}
			helper = helper->next;

		}


		return allPrice;
	};

	void nameOfBooks(Library &bel,int year)
	{
		Book book;
		Library *helper;
		helper = bel.getHead();
		while (helper != 0)
		{
			if (typeid(*helper).name() == typeid(book).name())
			{
				book = dynamic_cast<Book&>(*helper);
				if (book.getYear()>=year)
				std::cout << book.getNameObj()<<std::endl;
			}
			helper = helper->next;
		}
	}

	int numbersOfTextBooks(Library &bel)
	{
		int counter=0;
		Textbook qwerty;
		Library *helper;
		helper = bel.getHead();
		while (helper != 0)
		{
			if (typeid(*helper).name() == typeid(qwerty).name())
			{
				counter++;
				
			}
			helper = helper->next;
		}
		return counter;
	}
		
		


	/*typeid проверить тип данного указателя, привести его к нуному типу, и обратиться к нужной функци*/
};