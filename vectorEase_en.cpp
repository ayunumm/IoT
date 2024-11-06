#include <iostream>
#include <vector>

int main() {
    // Creating a vector of integers
    std::vector<int> numbers;

    // Adding elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements
    std::cout << numbers[0] << std::endl; // Output: 10

    // Iterating over elements
    for (int num : numbers) {
        std::cout << num << " ";
    }
}

/*

- Key operations:
        push_back: Adds an element to the end of the vector.
        pop_back: Removes the last element.
        size(): Returns the number of elements.
        empty(): Checks if the vector is empty.
        clear(): Removes all elements.
        begin() and end(): Returns iterators to the beginning and end of the vector, respectively.

- Advantages over arrays:
        No need for manual memory management: Vectors handle memory allocation and deallocation automatically.
        Flexible size: You can easily add or remove elements without having to worry about array bounds.
        Rich set of functions: The STL provides a variety of functions for working with vectors.
        When to use vectors:
        When you need a dynamic collection of elements.
        When you don't know the exact size of the collection beforehand.
        When you need to frequently add or remove elements.

- In summary,
        vectors are a versatile and powerful tool in C++ for managing collections of data. Their dynamic nature, efficiency, and the rich set of functions provided by the STL make them a preferred choice for many programming tasks.


- Would you like to learn more about a specific aspect of vectors, such as iterators, algorithms, or multidimensional vectors?

        Here are some additional topics you might find interesting:
        
        Vector of vectors: Creating multidimensional arrays using vectors.
        Iterators: Navigating through elements in a vector.
        Algorithms: Using algorithms from the STL to perform operations on vectors, such as sorting and searching.
        Custom data types: Storing custom objects in vectors.
        Feel free to ask any questions you have!

*/
