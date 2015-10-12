#include <iostream>
#include <typeinfo.h>
#include <typeinfo>
#include "author.h"
#include "book.h"
#include "magazine.h"
#include "Person.h"
#include "print.h"
#include "publishing_office.h"
#include "textbook.h"
#include "library.h"
#include "Manager.h"
Library *Library::Head = NULL;
using namespace std;

void addPrint()
{
	Print *print = new Print;
	char *name=new char[], *officeName=new char[], *address = new char[];
	int copies, pages, price, year;
	cout << "Name:";
	cin >> name;
	cout << "Name of office:";
	cin >> officeName;
	cout << "Number of copies:";
	cin >> copies;
	cout << "Number of pages:";
	cin >> pages;
	cout << "Office address:";
	cin >> address;
	cout << "Price:";
	cin >> price;
	cout << "Year:";
	cin >> year;
	print->setNameObj(name);
	print->setNameOfOffice(officeName);
	print->setNumbersOfCopies(copies);
	print->setNumbersOfPages(pages);
	print->setOfficeAddress(address);
	print->setprice(price);
	print->setYear(year);
	print->add();
}
void addBook()
{
	Book *book = new Book;
	char *name = new char[], *officeName = new char[], *address = new char[], *genre = new char,*Name=new char,*Surname=new char;
	int copies, pages, price, year,parts;
	cout << "Name:";
	cin >> name;
	cout << "Name of office:";
	cin >> officeName;
	cout << "Number of copies:";
	cin >> copies;
	cout << "Number of pages:";
	cin >> pages;
	cout << "Office address:";
	cin >> address;
	cout << "Price:";
	cin >> price;
	cout << "Year:";
	cin >> year;
	cout << "Author:" << endl;
	cout << "Name and Surname:";
	cin >> Name;
	cin >> Surname;
	cout << "Genre:";
	cin >> genre;
	cout << "Parts of book:";
	cin >> parts;
	book->setNameObj(name);
	book->setNameOfOffice(officeName);
	book->setNumbersOfCopies(copies);
	book->setNumbersOfPages(pages);
	book->setOfficeAddress(address);
	book->setprice(price);
	book->setYear(year);
	book->setAuth(Name,Surname);
	book->setGenre(genre);
	book->setNumbparts(parts);
	book->add();
}
void addMagazine()
{
	Magazine *magazine = new Magazine;
	char *name = new char[], *officeName = new char[], *address = new char[],*theme=new char;
	int copies, pages, price, year;
	cout << "Name:";
	cin >> name;
	cout << "Name of office:";
	cin >> officeName;
	cout << "Number of copies:";
	cin >> copies;
	cout << "Number of pages:";
	cin >> pages;
	cout << "Office address:";
	cin >> address;
	cout << "Price:";
	cin >> price;
	cout << "Year:";
	cin >> year;
	cout << "Theme:";
	cin >> theme;
	magazine->setNameObj(name);
	magazine->setNameOfOffice(officeName);
	magazine->setNumbersOfCopies(copies);
	magazine->setNumbersOfPages(pages);
	magazine->setOfficeAddress(address);
	magazine->setprice(price);
	magazine->setYear(year);
	magazine->setTheme(theme);
	magazine->add();
}

void addTextBook()
{
	Textbook *textbook = new Textbook;
	char *name = new char[], *officeName = new char[], *address = new char[], *subject=new char[];
	int copies, pages, price, year,form;
	cout << "Name:";
	cin >> name;
	cout << "Name of office:";
	cin >> officeName;
	cout << "Number of copies:";
	cin >> copies;
	cout << "Number of pages:";
	cin >> pages;
	cout << "Office address:";
	cin >> address;
	cout << "Price:";
	cin >> price;
	cout << "Year:";
	cin >> year;
	cout << "Subject:";
	cin >> subject;
	cout << "Form:";
	cin >> form;
	textbook->setNameObj(name);
	textbook->setNameOfOffice(officeName);
	textbook->setNumbersOfCopies(copies);
	textbook->setNumbersOfPages(pages);
	textbook->setOfficeAddress(address);
	textbook->setprice(price);
	textbook->setYear(year);
	textbook->setForm(form);
	textbook->setSubject(subject);
	textbook->add();
}
void addData()
{
	int choise;
	do
	{
		cout << "1-Print" << endl;
		cout << "2-Book" << endl;
		cout << "3-Magazine" << endl;
		cout << "4-TextBook" << endl;
		cout << "5-Back" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:addPrint(); break;
		case 2:addBook(); break;
		case 3:addMagazine(); break;
		case 4:addTextBook(); break;
		}
	} while (choise != 5);
	
}

void notSoonerThan()
{
	Manager libraryManager;
	Library library;
	int year;
	cout << "Enter Year:";
	cin >> year;
	libraryManager.nameOfBooks(library, year);
}
void numbersOfTextBooks()
{
	Manager libraryManager;
	Library library;
	cout << "Numbers of Textbooks:" << libraryManager.numbersOfTextBooks(library) << endl;

}

void theCostOfPrint()
{
	Manager libraryManager;
	Library library;
	cout << "The cost of Print:" << libraryManager.bookPrice(library) << endl;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choise;
	Magazine *magazine = new Magazine;
	Textbook *textbook = new Textbook;
	do
	{
		cout << "------------------MENU------------------" << endl;
		cout << "1-Add Data" << endl;
		cout << "2-Show All Data in Library" << endl;
		cout << "3-Books publishing not sooner than" << endl;
		cout << "4-The numbers of Textbooks in library" << endl;
		cout << "5-The cost of print" << endl;
		cout << "6-exit" << endl;
		cout << "----------------------------------------" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:addData(); break;
		case 2:Library::show(); break;
		case 3:notSoonerThan(); break;
		case 4:numbersOfTextBooks(); break;
		case 5:theCostOfPrint(); break;
		}
	}
	while (choise!=6);
	
	/*
	cout << "--------------" << " Person " << "--------------" << endl;
	Author auth;
	cout << "--------------" << " Author " << "--------------" << endl;
	auth.setDateofBirthday("25 of January");
	cout<<"Date of Birthday "<<auth.getDateofBirthday()<<endl;
	auth.setName("Kirill");
	cout<<"Name:"<<auth.getName()<<endl;
	auth.setSurname("Ахраменок");
	cout << "Surname:" << auth.getSurname() << endl;
	auth.setFirsBook("P90");
	cout << "The firs Book: "<<auth.getFirstBook()<<endl;
	auth.setNumbersOfBooks(5);
	cout << "The number of Books:"<< auth.getNumbersOfbooks()<<endl;
	cout << endl;
	cout << endl;
	cout << endl;
	Print pr;
	cout << "--------------" << " Printed edition " << "--------------" << endl;
	pr.setNameOfOffice("Versuta");
	pr.setOfficeAddress("DPT street, 21");
	cout<<"The name of office:"<<pr.getNameOfOffice()<<endl;
	cout<<"Office Address"<<pr.getOfficeAddress()<<endl;
	pr.setNameObj("Ball");
	cout << "The name of: Book/TexBook/Magazine" << pr.getNameObj() << endl;
	pr.setNumbersOfCopies(2134);
	cout << "The number of copies:" << pr.getNumbersOfCopies() << endl;
	pr.setNumbersOfPages(352);
	cout << "The number of pages:" << pr.getNumbersOfPages() << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	pr.setprice(100);
	pr.add();
	Magazine mag;
	cout << "--------------" << " Magazine " << "--------------" << endl;
	cout << "The name of the publishing office:";
	mag.setNameOfOffice("Versuta ");
	cout<<"The Name of office: "<<mag.getNameOfOffice()<<endl;
	mag.setOfficeAddress("DPT street, 21");
	cout<<"Office Address: "<<mag.getOfficeAddress()<<endl;
	mag.setNameObj("Ball");
	cout<<"Magazine title: "<<mag.getNameObj()<<endl;
	mag.setNumbersOfCopies(2134);
	cout << "The number of copies: " << mag.getNumbersOfCopies() << endl;
	mag.setNumbersOfPages(352);
	cout << "The number of pages: " << mag.getNumbersOfPages() << endl;
	mag.setTheme("Sport");
	cout << "Theme:" << mag.getTheme() << endl;
	mag.setprice(100);
	mag.add();
	cout << endl;
	cout << endl;
	cout << endl;
	Book bookObj;
	cout << "--------------" << " Book " << "--------------" << endl;
	bookObj.setNameObj("P90");
	cout<< "Book name:" << bookObj.getNameObj() << endl;
	bookObj.setGenre("Comedy");
	cout << "Book genre:" << bookObj.getGenre() << endl;;
	bookObj.setAuth("Kirill", "Achramionok");
	cout << "Author Name:" << bookObj.getAuthName() << endl;;
	cout << "Author Surname:" << bookObj.getAuthSurname() << endl;
	bookObj.setprice(100);
	bookObj.setYear(1999);
	bookObj.add();
	Manager mm;
	Library bb;
	Textbook firstTextbook;
	firstTextbook.setprice(100);
	firstTextbook.add();
	cout << "Price:" << mm.bookPrice(bb) << endl;;
	mm.nameOfBooks(bb,1979);
	cout << mm.numbersOfTextBooks(bb) << endl;
	/*
	cin >> num;
	m.setNumbersOfCopies(num);
	cout << "-----" << m.getNumbersOfCopies() << endl;
	Textbook s;
	s.setName("privet");
	s.getName();
	s.setNumbersOfCopies(2);
	cout << s.getNumbersOfCopies() << endl;
	Book b;
	b.setGenre("comedy");
	b.getGenre();
	b.setNumbersOfCopies(123);
	cout << b.getNumbersOfCopies() << endl;
	Print p;
	p.setNameOfOffice("rapapa");
	p.getNameOfOffice();
	*/
	system("pause");
		return 0;
}