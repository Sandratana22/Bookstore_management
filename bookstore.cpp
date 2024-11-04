// bookstore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "system.h"

using namespace Management;

int main() {
    BookstoreInventory store;

    Book book1 = { "Wall E ", "Vick E", "Adventure", 0001,{11,7,2009} };
    Book book2 = { "WEDNESDAY", "Wendy Martin", "comedy", 0002, {23,11,2022} };
    Book book3 = { "Step Up", "Tedg", "Drama", 0003, {8,11,2006} }; 

    //adding the book 
    store + book1;
    store + book2;
    store + book3; 

    // Find a book by ID number
    store.findBook(1001);

    store.displayInventory();

    return 0;
}


