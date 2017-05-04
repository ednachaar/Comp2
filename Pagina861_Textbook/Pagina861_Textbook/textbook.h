#ifndef COURSE
#define COURSE
#include <iostream>
#include <string>
#include "Instructor.h"
#include "TextBook.h"




using namespace std;

class TextBook
{
private:
	string title;
	string author;
	string publisher;

public:
	TextBook();
	TextBook(string textTitle, string auth, string pub);
	void set(string textTitle, string auth, string pub);
	void print();

};

#endif