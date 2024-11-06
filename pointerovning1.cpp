//smartpointer

#include <iostream>

class SmartIntPtr {
public:
    SmartIntPtr(int* ptr) : ptr_(ptr) {}
    ~SmartIntPtr() { delete ptr_; }

    int* get() const { return ptr_; }
    int& operator*() const { return *ptr_; }
    int* operator->() const { return ptr_; }

private:
    int* ptr_;
};

int main() {
    SmartIntPtr ptr(new int(42));
    std::cout << *ptr << std::endl; // Skriver ut 42
}