//
// Created by s3th on 6/23/17.
//

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

void manualFillOfBooks(vector<Book> &bookVector);
void printVectorOfBooks(const vector<Book>&bookVector);
int searchVectorOfBooks(vector<Book> &bookVector, int value);
void testFindYear();

int main() {
    vector<Book> myBooks;
    manualFillOfBooks(myBooks);
    Book obj1, obj2;

    for(auto i = 0; i<myBooks.size(); i++){
       obj1.sumAll(myBooks[i]);
    }

    obj1.setYear(2005);
    obj2.setYear(2005);

    //Manual setting year of two objects to test the overloaded operator.
    if(obj1 == obj2)
        cout << "\nBook have the same date realease!" << endl;
    else
        cout << "Continue...." << endl;

    //Making a third object to test our search function.
    //For making a test remove the comments.
    //Book obj3;
    //obj3.setYear(2005);
    //int value = obj3.getYear();
    //searchVectorOfBooks(myBooks, value);


    Book::swap(obj1, obj2);

    int x;
    cout << "\nGive book's age: "; cin >> x;
    obj1.ageOfBook(x,obj2);


    return 0;
}

void manualFillOfBooks(vector<Book> &bookVector){
    string bookTitle; char bookType;
    int bookYear,bookPrice, bookCopies,size;
    double bookDiscount;
    // cout << "Available items: ["  << itemVector.size() << "]" << endl;
    cout << "How many books you want to add: "; cin >> size;
    cout << "Adding "<< size << " items." << endl;
    for(auto i = 0; i<size; i++){
        cout << "\nBook Name: "; cin >> bookTitle;
        cout << "Book Year: "; cin >> bookYear;
        cout << "Book Type (P = Philosophy, C = Computers, M = Medicine): "; cin >> bookType;
        cout << "Book Copies: "; cin >> bookCopies;
        cout << "Book Price: "; cin >> bookPrice;
        cout << "Book Discount: "; cin >> bookDiscount;


        Book newBook(bookTitle, bookYear, bookType, bookCopies, bookPrice, bookDiscount);
        bookVector.push_back(newBook);
        cout << endl;
    }
    cout << "Books added to the list!\n" << endl;
}

void printVectorOfBooks(const vector<Book>&bookVector){
    int size = bookVector.size();
    cout << "LIST OF ITEMS"<<endl;
    cout << "-------------" << endl;
    for(auto i = 0; i<size; i++);
    //Too big to print. I am getting bored haha.
        //cout << i+1<< ")" << bookVector[i].getName() <<" "<< itemVector[i].getPrice() <<"€"<< endl;

}

//Testing a search vector. Not ready yet.
int searchVectorOfBooks(vector<Book> &bookVector, int value){
    int size = bookVector.size();
    for(auto i = 0; i<size; i++){
        if(bookVector[i].getYear() == value) {
            cout << "\nTow or more books have the same date realease!\n" << endl;
            return i;
        }
        else{
            cout << "\nNo match for book's year or realease found!\n"  << endl;
        }
        return -1;
    }
}


*/