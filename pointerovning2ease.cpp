//pointerovning upgf4
#include <iostream>

class SmartIntPtr {
public:
    // コンストラクタ: ポインタを受け取って初期化する
    explicit SmartIntPtr(int* ptr) : ptr_(ptr) {}

    // デストラクタ: オブジェクトが破棄されるときに自動的にメモリを解放する
    ~SmartIntPtr() { delete ptr_; }

    // オーバーロードされた演算子: スマートポインタを通常のポインタのように扱えるようにする
    int& operator*() const { return *ptr_; }
    int* operator->() const { return ptr_; }

private:
    int* ptr_; // 指し示すメモリ領域のアドレスを保持
};

int main() {
    SmartIntPtr ptr(new int(42));
    std::cout << *ptr << std::endl; // 42が出力される
}

/*
テンプレートを使わないスマートポインタの作成：初心者向け解説
なぜスマートポインタが必要なの？
C++では、new演算子を使って動的にメモリを確保することができます。しかし、このメモリをいつ解放するのかをプログラマーが自分で管理する必要があり、うっかり解放し忘れるとメモリリークが発生してしまいます。
スマートポインターは、このメモリ管理を自動化してくれる便利な機能です。スマートポインターを使うことで、メモリリークを防ぎ、プログラムの安定性を高めることができます。
テンプレートを使わないスマートポインタの作り方
テンプレートを使わないスマートポインタは、特定のデータ型に特化したものになります。ここでは、int型のポインタを管理するスマートポインタを例に説明します。

- コードの解説
SmartIntPtrクラス: int型のポインタを管理するクラスです。
コンストラクタ: newで確保したint型のポインタを受け取り、ptr_メンバ変数に保存します。
デストラクタ: オブジェクトが破棄されると自動的に呼び出され、delete演算子を使ってptr_が指すメモリを解放します。
オーバーロードされた演算子: *演算子と->演算子をオーバーロードすることで、スマートポインタを通常のポインタのように扱うことができます。

このコードでは、SmartIntPtrクラスのオブジェクトptrを作成し、newで確保したint型の値を代入しています。*ptrで値にアクセスし、std::coutで出力しています。ptrがスコープ外に出ると、デストラクタが自動的に呼び出され、メモリが解放されます。

- テンプレートを使わないスマートポインタのメリットとデメリット
メリット:
シンプルで理解しやすい。
特定のデータ型に特化しているため、無駄なオーバーヘッドが少ない。
デメリット:
他のデータ型に対応できない。
コードの再利用性が低い。
まとめ
テンプレートを使わないスマートポインタは、特定のデータ型に特化したシンプルなスマートポインタを作成することができます。しかし、汎用性やコードの再利用性という点では、テンプレートを使ったスマートポインタに劣ります。

より柔軟で汎用的なスマートポインタを作成したい場合は、テンプレートを使うことをおすすめします。


Explanation:

- Class Definition: We create a class named SmartIntPtr specifically for managing integer pointers.
- Constructor: The constructor takes an optional integer pointer. If no pointer is provided, it initializes ptr_ to nullptr.
- Destructor: When the SmartIntPtr object goes out of scope, the destructor is called, which automatically deletes the allocated memory using delete.

- Overloaded Operators:
operator*: Allows you to dereference the smart pointer as if it were a regular pointer.
operator->: Enables member access through the arrow operator.

- Main Function:
We create a SmartIntPtr object and initialize it with a newly allocated integer.
We can then use the smart pointer as if it were a regular pointer.

- How it works:
When you create a SmartIntPtr object, it takes ownership of the dynamically allocated memory.
When the object goes out of scope (for example, at the end of a function), the destructor automatically frees the memory, preventing memory leaks.
Limitations:

- Specific to integers: This smart pointer can only manage integer pointers.
No copy semantics: If you try to copy a SmartIntPtr object, you'll end up with two pointers pointing to the same memory location, which can lead to issues.
No move semantics: Moving a SmartIntPtr object can also be problematic if not handled correctly.

- Why templates are useful:
While this simple implementation works for integers, templates allow you to create a more generic smart pointer that can manage any data type. This makes the code more reusable and flexible.
Example of a template-based smart pointer:
By using templates, you can create a SmartPointer that can handle integers, strings, custom classes, and any other data type.

- In conclusion:
While this simplified example provides a basic understanding of smart pointers, using templates is generally recommended for creating more robust and flexible memory management solutions in C++.



*/