#include <iostream>


class Person {
    // Link of a video of OOP: https://www.youtube.com/watch?v=0NwsayeOsd4
    //　note: keywords: virtual/override
    // Polymorphism , vector
    // ↓ or protected
    private:
        std::string first;
        std::string last;
    
    public:
        // constructor 
        Person(std::string first, std::string last) : first(first), last(last) {}
        /* 
        this is same as:
        Person(std::string first, std::string last) {
            this->first = first;
            this->last = last;
        }
        */
        void setFirstName(std::string first) { this->first = first; }
        void setLastName(std::string last) { this->last = last;}
        std::string getName() { return first + " " + last; }
        void printFullName() { std::cout << first << " " << last << std::endl; }
};      

int main() {
    Person p("Caleb", "Curry");
    p.printFullName();
    
    Person p2("Simon", "Says");
    p2.printFullName();

    std::cout << p.getName() << std::endl;
}

