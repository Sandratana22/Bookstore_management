
#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <string>

namespace Management {

    struct Book {
        std::string name;
        std::string author;
        std::string genre;
        int number;

        struct PublishedDate {
            int day = 1;
            int month = 1;
            int year = 1900;
        };

        PublishedDate releasedDate;

        // Overload == to find books 
        bool operator==(const Book& book);
    };

    struct BookstoreInventory {
        std::vector<Book> inventory;

        // Overload + to add a book
        BookstoreInventory& operator+(const Book& book);

        bool findBook(int bookID);
        void displayInventory();
    };

} 
#endif 

