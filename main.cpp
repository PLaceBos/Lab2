#include <iostream>
#include "Book.h"

int main() {

Book k1;

k1.setName("Martin Eden");
k1.setAuthor("J. London");
k1.setPages(448);
k1.print();
cout << "Name first: " << k1.getName() << endl;
cout << "Author first: "<< k1.getAuthor() << endl;
cout << "Pages: " << k1.getPages() << endl;

Book k;
k.setName("The Shining");
k.setAuthor("Stephen king");
k.setPages(447);
k.print();

cout << " getters" << endl;
cout << "Name: " << k.getName() << endl;
cout << "Author: " << k.getAuthor() << endl;
cout <<"Pages: " << k.getPages() << endl;

k.print();
cout << " copyConstruct" << endl;

k.print();

cout << "=" << endl;
cout << "Input\n" << "name\n author\n pages\n" << endl;
cin >>k;
k.print();

cout << "k " << endl;
k1.print();
cout << "k1 " <<endl;

k.operator++();
cout << "++" << endl;
k.print();

k.operator--();
cout << "--" << endl;
k.print();

k.setName("name2");
k.setAuthor("author2");
k.setPages(1);

cout << "==" << endl;
bool t = k == k1;
cout << "bool is " << t << endl;

cout << "!=" << endl;
t = k != k1;
cout << "bool is " << t << endl;

cout << "> (pages) " << endl;
t = k > k1;
cout << "bool is " << t << endl;

cout << "< (pages) " << endl;
t = k < k1;
cout << "bool is " << t << endl;

cout << "« (k1) " << endl;
cout << k << endl;

cout << "» (k1) " << endl;
cout << "bool is " <<  k1 << endl;

k.print();
return 0;
}

