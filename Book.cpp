#include "Book.h"

Book::Book() {
setName("none");
setAuthor("none");
setPages(0);
}
Book::Book(string book_name, string book_author, int book_pages) {
setName(book_name);
setAuthor(book_author);
setPages(book_pages);
}
Book::Book(const Book &a){
this->name = a.name;
this->author = a.author;
this->pages = a.pages;
}

void Book::setName(string book_name) {
name = book_name;
}
void Book::setAuthor(string book_author) {
author = book_author;
}
void Book::setPages(int book_pages) {
pages = book_pages;
}
string Book::getName() {
return name;
}
string Book::getAuthor() {
return author;
}
int Book::getPages() {
return pages;
}
void Book::print() {
cout<< "Name: "<< getName() << endl;
cout<< "Author: "<< getAuthor() << endl;
cout << "Pages: " << getPages() << endl;
}

Book Book::operator=(const Book &book){
this->name = book.name;
this->pages = book.pages;
return *this;
}
void Book::operator++(){
this->pages ++;
}
void Book::operator--(){
this->pages -- ;
}

bool Book::operator==(const Book &book){
return this->pages == book.pages && this->name == book.name && this->author == book.author;
}
bool Book::operator!=(const Book &book){
return !(this->pages == book.pages && this->name == book.name && this->author == book.author);
}
bool Book::operator>(const Book &book){
return (this->pages > book.pages);
}
bool Book::operator<(const Book &book){
return (this->pages < book.pages);
}
ostream& operator << (ostream &out, const Book &book){
out << " pages: " << book.pages << " name: " << book.name << " author: " << book.author;
return out;
}
istream& operator >>(istream &in, Book &book){
in >> book.name;
in >> book.author;
in >> book.pages;
return in;
}
