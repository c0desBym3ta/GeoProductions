#include "header.h"
#include "Book.h"

void manualFillOfBooks(vector<Book> &bookVector);
void printVectorOfBooks(const vector<Book>&bookVector);
int searchVectorOfBooks(vector<Book> &bookVector, int value);

int main() {
    vector<Book> myBooks;
    manualFillOfBooks(myBooks);
    Book book1, book2;

   /* for(auto i = 0; i<myBooks.size(); i++){
       obj1.sumAll(myBooks[i]);
    }*/

    book1.setYear(2005);
    book2.setYear(2005);

    //Manual setting year of two objects to test the overloaded operator.
    if(book1 == book2)
        cout << "\nThe two books have the same date realease!" << endl;
    else
        cout << "Continue...." << endl;

    //Making a third object to test our search function.
    //For making a test remove the comments.
    //Book obj3;
    //obj3.setYear(2005);
    //int value = obj3.getYear();
    //searchVectorOfBooks(myBooks, value);


    Book::swap(book1, book2);

    int x;
    cout << "\nGive book's age: "; cin >> x;
    book1.ageOfBook(x,book2);


    return 0;
}


void manualFillOfBooks(vector<Book> &bookVector){
    string bookTitle; char bookType;
    int bookYear,bookPrice, bookCopies,size = bookVector.size(),currEarns, totalErans = 0;
    double bookDiscount;
    // cout << "Available items: ["  << itemVector.size() << "]" << endl;
    cout << "How many books you want to add: "; cin >> size;
    cout << "Adding "<< size << " items." << endl;
    for(auto i = 0; i<size; i++){
        currEarns = 0;
        cout << "\nBook Name: "; cin >> bookTitle;
        cout << "Book Year: "; cin >> bookYear;
        cout << "Book Type (P = Philosophy, C = Computers, M = Medicine): "; cin >> bookType;
        cout << "Book Copies: "; cin >> bookCopies;
        cout << "Book Price: "; cin >> bookPrice;
        cout << "Book Discount: "; cin >> bookDiscount;

        Book newBook(bookTitle, bookYear, bookType, bookCopies, bookPrice, bookDiscount);
        bookVector.push_back(newBook);
        cout << endl;
        currEarns = bookCopies*bookPrice;
        totalErans += currEarns;
        cout << "Current book earns: " << currEarns << "€"<< endl;
        cout << "Total book earns so far: " << totalErans << "€" << endl;
    }
    cout << "\nTotal earns from all book sales: " << totalErans << "€" << endl;
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

