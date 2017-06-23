//
// Created by s3th on 6/23/17.
//

#include "Book.h"


Book::Book(){title =""; year = 0; type;copies = 0; price = 0; discount = 0;}
Book::Book(string title, int year, char type, int copies, int price, double discount) :
        title(title), year(year),type(type), copies(copies), price(price), discount(discount) {}



int Book::ageOfBook(int x, Book &obj){
    int age = 0, year, copies, price;
    string title; char type;
    double discount;

    age = x - year;
    if(age < 0) return -1;
    else return age;
}

bool Book::operator==(const Book &b) {
    if(this->year == b.year)
        return true;
    else
        return false;
}

/*Book Book::operator==(const Book &, const Book &) {

}*/

void Book::swap(Book &b1, Book &b2) {
    Book tmp;
    tmp = b1;
    b1 = b2;
    b2 = tmp;
    cout << "Success exchange between two objects!" << endl;
}

int Book::sumAll(Book &b) {
    int year,copies,price,sum;
    string title; char type;
    double discount;

    for(int i = 0; i<5; i++){sum += copies*price;}
    cout << "Total money from the sales: " << sum << "€" << endl;
}