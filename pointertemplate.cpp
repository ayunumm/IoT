#include <iostream>

template <typename T>
class SmartPointer {
public:
    explicit SmartPointer(T* ptr = nullptr) : ptr_(ptr) {}
    ~SmartPointer() {
        delete ptr_;
    }

    T& operator*() const {
        return *ptr_;
    }
    T* operator->() const {
        return ptr_;
    }

private:
    T* ptr_;
};

int main() {
    SmartPointer<int> intPtr(new int(42));
    std::cout << *intPtr << std::endl; // output: 42

    SmartPointer<std::string> strPtr(new std::string("Hello"));
    std::cout << *strPtr << std::endl; // output: Hello
}


/*
Explanation:

Template Declaration: template <typename T> declares a template class that can work with any data type T.
Constructor: Takes an optional pointer of type T as an argument. If no pointer is provided, it initializes ptr_ to nullptr.
Destructor: Deletes the dynamically allocated object when the SmartPointer goes out of scope.
Overloaded Operators: operator* and operator-> allow the smart pointer to be used like a regular pointer.
Key Points:

Template Parameter T: This parameter represents the data type that the smart pointer will manage.
Constructor: The constructor takes a raw pointer and stores it internally.
Destructor: The destructor is responsible for deallocating the memory when the smart pointer is destroyed.
Overloaded Operators: These operators enable a more natural syntax for using the smart pointer.
Additional Considerations:

Copy and Move Semantics: For more advanced usage, consider implementing copy constructors, copy assignment operators, move constructors, and move assignment operators to control how smart pointers are copied and moved.
Custom Deleters: For more complex scenarios, you might want to allow custom deleters to be specified to handle different deallocation strategies.
Exception Safety: Ensure that your smart pointer implementation is exception safe, meaning it doesn't leak memory if an exception is thrown during its lifetime.
Reference Counting: For shared ownership, you could implement a reference counting mechanism using std::shared_ptr as a basis.
Benefits of Using Templates:

Reusability: The same code can be used for various data types.
Type Safety: The compiler can check for type errors at compile time.
Efficiency: The compiler can generate optimized code for different data types.
Incorporating Additional Features:

You can extend this basic smart pointer implementation with features like:

Custom Deleters: Allow users to specify a custom deletion function.
Reference Counting: Implement shared ownership using a reference count.
Weak Pointers: Provide a weak reference to avoid circular references.
Array Support: Handle arrays of elements.
By understanding these concepts and building upon this basic implementation, you can create more sophisticated and versatile smart pointers to manage memory effectively in your C++ projects.



コード解説
テンプレートパラメータ T: 任意のデータ型を表します。
コンストラクタ: ポインタを受け取り、メンバ変数 ptr_ に格納します。
デストラクタ: オブジェクトが破棄されるときに、ptr_ が指すメモリを解放します。
オーバーロードされた演算子:
operator*(): 間接参照演算子をオーバーロードし、スマートポインターで指されたオブジェクトへの参照を取得します。
operator->(): アロー演算子をオーバーロードし、スマートポインターで指されたオブジェクトのメンバにアクセスできるようにします。
重要な注意点
コピー制御: 上記のシンプルな実装では、コピーコンストラクタやコピー代入演算子がデフォルトで生成され、浅いコピーが行われます。これにより、複数のスマートポインターが同じメモリ領域を指し、デストラクタが複数回呼ばれてしまう問題が発生する可能性があります。これを防ぐために、コピーコンストラクタとコピー代入演算子をprivateにするか、または削除する必要があります。
移動セマンティクス: C++11以降では、移動セマンティクスが導入されました。スマートポインターでも移動セマンティクスに対応することで、オブジェクトのコピーコストを削減できます。
例外安全性: 例外が発生した場合でも、確実にメモリが解放されるように、RAII（Resource Acquisition Is Initialization）の原則に基づいて実装する必要があります。
カスタムデリーター: delete 以外のデリーターが必要な場合は、テンプレートパラメータでデリーターも受け取れるように拡張できます。
より高度なスマートポインター
std::unique_ptr: 所有権を1つのスマートポインターに限定し、コピー不可にすることで、より安全なメモリ管理を実現します。
std::shared_ptr: 複数のスマートポインターで同じオブジェクトを共有し、参照カウントによってメモリ解放を管理します。
std::weak_ptr: std::shared_ptr を弱く参照し、循環参照を防止します。
まとめ
テンプレートを使ったスマートポインターの実装は、C++プログラミングにおいて非常に重要です。この基本的な実装を理解することで、より複雑なスマートポインターの設計や、既存のスマートポインターライブラリの利用が可能になります。

より詳細な解説や、具体的な使用例が必要な場合は、お気軽にご質問ください。

例えば、以下のような質問にお答えできます。

コピー制御の実装方法
移動セマンティクスに対応した実装
カスタムデリーターの使用方法
std::unique_ptr, std::shared_ptr, std::weak_ptr の違い
スマートポインターの具体的なユースケース

*/