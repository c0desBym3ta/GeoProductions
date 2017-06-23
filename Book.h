//
// Created by s3th on 6/23/17.
//

#ifndef KOSTASGEORGIADEIS_BOOK_H
#define KOSTASGEORGIADEIS_BOOK_H

#include "header.h"

class Book {
public:
    Book();
    Book(string title, int year, char type, int copies, int price, double discount);

    int ageOfBook(int x, Book &obj);
    void static swap(Book &, Book &);
    int sumAll(Book &);
    bool operator==(const Book &);
    //Book operator==(const Book&, const Book &);

    const string &getTitle() const { return title; }
    void setTitle(const string &title) { Book::title = title; }
    int getYear() const { return year; }
    void setYear(int year) { Book::year = year; }
    char getType() const { return type; }
    void setType(char type) { Book::type = type; }
    int getCopies() const { return copies; }
    void setCopies(int copies) { Book::copies = copies; }
    int getPrice() const { return price; }
    void setPrice(int price) { Book::price = price; }
    double getDiscount() const { return discount; }
    void setDiscount(double discount) { Book::discount = discount; }

private:
    string title;
    int year;
    char type;
    int copies;
    int price;
    double discount;
};


#endif //KOSTASGEORGIADEIS_BOOK_H
