#include "header.h"
#include "Book.h"

void manualFillOfBooks(vector<Book> &bookVector);
void printVectorOfBooks(const vector<Book>&bookVector);
int searchVectorOfBooks(vector<Book> &bookVector, int value);
void testFindYear()
int main() {
    vector<Book> myBooks;
    manualFillOfBooks(myBooks);
    Book obj1, obj2;

    for(auto i = 0; i<myBooks.size(); i++){
       obj1.sumAll(myBooks[i]);
    }

    //Manual setting year of two objects to test the overloaded operator.
    obj1.setYear(2005);
    obj2.setYear(2005);

    if(obj1 == obj2)
        cout << "\nBook have the same date realease!" << endl;
    else
        cout << "Continue...." << endl;

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
        if(bookVector[i].getYear() == value)
            return i;
        return -1;

    }
}
