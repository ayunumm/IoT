#include <iostream>

void upg2(){
    int x = 142;
    int *ptr = &x;
    
    *ptr = 844;
    std::cout << "*ptr is "  << *ptr << "now!";

}

//upg4
void memLeak(){
    int *ptr1 = new int(30);

    //Problem: Memory leak.
    //Explanation: The new operator allocates memory for an integer and assigns its address to ptr1. However, there's no corresponding delete to free this memory. This leads to a memory leak, as the allocated memory remains inaccessible.

}

void dobleFree() {
    int * freePtr = new int(50);
    delete[]freePtr; // double delete
    delete[]freePtr; // double delete

    //Problem: Double free.
    //Explanation: The delete[] operator is used to deallocate an array, but here it's used to deallocate a single integer. This is incorrect and can lead to undefined behavior, including crashes. Additionally, the same memory block is deleted twice, which is a serious error.
}

void danglingPointer(){
    int *dangPtr = new int(150);
    delete[]dangPtr;
    std::cout << dangPtr; 

    //Problem: Dangling pointer.
    //Explanation: After delete[]dangPtr, the memory pointed to by dangPtr is deallocated. However, dangPtr still holds the address of the freed memory. Accessing this memory can lead to undefined behavior or crashes.

}

int main() {
    upg2();

    return 0;
}