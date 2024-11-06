#include <iostream>
#include <string>
#include <vector>

//1.
class Item {
    public:
        std:: string title;
        std:: string author;
        int year;

        Item(std::string title, std::string author, int year) : title (title), author(author), year(year){}

        virtual void display_info() = 0; // Pure virtual fuction

};


//2. subclasses
class Book : public Item { 

    public:
        int pages;

        Book(std::string title, std::string author, int year, int pages) : Item(title, author, year), pages(pages) {}
        
        void display_info() override {
            std::cout << "Title: " << title << std::endl;
            std::cout << "Author: " << author << std::endl;
            std::cout << "Year: " << year << std::endl;
            std::cout << "Pages: " << pages << std::endl;
        }
};


class Magazine : public Item { 

    public:
        int issueNr;

        Magazine(std::string title, std::string author, int year, int issueNr) : Item(title, author, year), issueNr(issueNr) {}
        
    
        void display_info() override {
            std::cout << "Title: " << title << std::endl;
            std::cout << "Author: " << author << std::endl;
            std::cout << "Year: " << year << std::endl;
            std::cout << "Issue: " << issueNr << std::endl;
        }
};

// 3.
class LibraryUser {
    public:
        std::string name;
        std::vector<Item*> borrowed_items;

        LibraryUser(const std::string& name) : name(name) {}

        void borrow(Item* item) {
            borrowed_items.push_back(item);
            
        }

        void return_item(Item* item) {
            for (auto it = borrowed_items.begin(); it != borrowed_items.end(); ++it) {
                if (*it == item) {
                    borrowed_items.erase(it);
                    return;
                }
            }
        }

        void list_borrowed_items() {
            for (Item* item : borrowed_items) {
                std::cout << name << "'s borrowed items:" << std::endl;
                item->display_info();
                std::cout << "===============" << std::endl;
            }
        }
};    

// 4.
class Library {
    public:
        std::vector<Item*> items; // List of available items in the library (books and magazines)
        std::vector<Item*> allItems ; // List of all items in the library (books and magazines)
        std::vector<LibraryUser> users; // List of all borrowers


        // Add an item to the library's collection
        void add_item(Item* item) {
            allItems.push_back(item);
            items.push_back(item);
        }

            
        // Remove an item from the library.
        void remove_item(Item* item) {         
             for (auto it = items.begin(); it != items.end(); ++it) {
                if (*it == item) {
                    items.erase(it);
                    return;
                }
            }
        }

            // Register a new borrower.
        void register_user(const LibraryUser& user) {
            users.push_back(user);
        }

        // Allow a user to borrow an item if it is available.
        bool borrow_item(Item* item) {
            for(Item* libraryItem : items) {
                if (libraryItem == item) {
                    std::cout << "This book is available." << std::endl;
                    return true;
                }
            }
            std::cout << "This book is not available." << std::endl;
            return false;

        }

        // Allow a user to return an item.
        void return_item(Item* item) {
            items.push_back(item);
        }

        // Display a list of all items in the library.
        void list_items() {            
            std::cout << "=== A list of all items in the library ===" << std::endl;
            for (Item* item : allItems) {
                item ->display_info();
                std::cout << std::endl;
            }

        }

        // Display a list of all available items that are not borrowed.
        void list_available_items() {
            std::cout << "=== A list of all available items ===" << std::endl;
            for (Item* item : items) {
                item ->display_info();
                std::cout << std::endl;
            }
        }


};


//5.
int main() {
    // Create a book and a magazine
    Book book("The Lord of the Rings", "J.R.R. Tolkien", 1954, 178);
    Magazine magazine("National Geographic", "Various Authors", 1988, 131);
    Book book1("book1", "author1", 1933, 117);
    Magazine magazine1("magazine1", "Various Authors1", 1999, 55);
    Book book2("book2", "author2", 1845, 114);
    Magazine magazine2("magazine2", "Various Authors2", 2021, 222);

    // Print their information
    book.display_info();
    std::cout << std::endl;
    magazine.display_info();
    std::cout << std::endl;

    // ========== class LibraryUser ==========


    // Create library users
    LibraryUser user1("Alice");
    LibraryUser user2("Bob");

    // Borrow items
    user1.borrow(&book);
    user2.borrow(&magazine);

    // List borrowed items for each user   
    user1.list_borrowed_items();
    user2.list_borrowed_items();

    // Return items
    // user1.return_item(&book);
    // user2.return_item(&magazine);

    // ========== class Library ==========


     // Create a library
    Library library;
    library.add_item(&book1);
    library.add_item(&magazine1);
    library.add_item(&book2);
    library.add_item(&magazine2);
    library.add_item(&book);
    library.add_item(&magazine);

    // Remove an item from available items
    library.remove_item(&book1);

    // Register users

    library.register_user(user1);
    library.register_user(user2);

    // Borrow items
    library.borrow_item(&book);
    library.borrow_item(&magazine1);

    // Print all items in the library
    library.list_items();

    // Return items
    library.return_item(&book1);
    library.return_item(&magazine1);

    // Print available items;
    library.list_available_items();
    
    
    return 0;
}
