#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
#pragma once

class Book {
public:
string name;
string author;
int pages;

Book();

Book(string book_name, string book_author, int book_pages);

Book(const Book &a);

void setName(string book_name);

void setAuthor(string book_color);

void setPages(int book_pages);

string getName();

string getAuthor();

int getPages();

void print();

Book operator=(const Book &book);

void operator++();

void operator--();

bool operator==(const Book &book);

bool operator!=(const Book &book);

bool operator>(const Book &book);

bool operator<(const Book &book);

friend ostream& operator<< (ostream &out, const Book &book);

friend istream& operator>> (istream &in,Book &book);

};


#endif
