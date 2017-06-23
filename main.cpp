#include "header.h"
#include "Book.h"

void manualFillOfBooks(vector<Book> &bookVector);
void printVectorOfBooks(const vector<Book>&bookVector);

int main() {
    vector<Book> myBooks;
    manualFillOfBooks(myBooks);
    Book obj1, obj2;

    for(auto i = 0; i<myBooks.size(); i++){
       obj1.sumAll(myBooks[i]);
    }

    obj1.setYear(2005);
    obj2.setYear(2005);

    if(obj1 == obj2)
        cout << "\nBook have the same date realease!" << endl;
    else
        cout << "Continue...." << endl;

    Book::swap(obj2, obj2);

    int x;
    cout << "Give book's age: "; cin >> x;
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
        cout << "Book Type: "; cin >> bookType;
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
        //cout << i+1<< ")" << bookVector[i].getName() <<" "<< itemVector[i].getPrice() <<"€"<< endl;

}