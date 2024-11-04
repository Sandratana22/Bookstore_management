
#include <iostream>
 
using namespace std; 

namespace Management {

    // Overload == to find books
    bool Book::operator==(const Book& book) {
        return this->number == book.number;
    }

    // Overload + to add a book to the inventory
    BookstoreInventory& BookstoreInventory::operator+(const Book& book) {
        inventory.push_back(book);
        return *this;
    }

    // Find a book by ID number
    bool BookstoreInventory::findBook(int bookID) {
        for (const auto& book : inventory) {
            if (book.number == bookID) {
                cout << "Book with ID " << bookID << " found." << endl;
                return true;
            }
        }
        cout << "Book with ID " << bookID << " not found." <<endl;
        return false;
    }

    // Display the entire inventory
    void BookstoreInventory::displayInventory() {
        
        cout << "----Bookstore Inventory----:" << endl;

        for (const auto& book : inventory) { 
            cout << "Book available! " << endl; 
            cout << "Name: " << book.name << endl; 
            cout << "Author: " << book.author << endl;
            cout << "Genre: " << book.genre << endl;
            cout << "Book ID: " << book.number << endl;
            cout << "PublishedDate: " << book.releasedDate.day << "/" << book.releasedDate.month << "/" << book.releasedDate.year << endl; 
            cout << endl;
        }
    }
} 
