Date: 2024-11-04 mån
C++ Pointer övningar

__Uppgift 1.

  >> Vad är C++ dynamiskt minne?
>  > 
      What is Dynamic Memory? In C++, dynamic memory refers to memory that is allocated during program execution, as 
      opposed to memory that is allocated when the program starts (static memory). This means you can request additional 
      memory as needed, and release it when it's no longer required. This flexibility is particularly useful for handling data structures of varying sizes or 
      when the exact memory requirements are not known beforehand. 
        
    
  >> Hur fungerar C++ dynamiskt minne?
 >  > 
    How Does Dynamic Memory Work in C++?
    C++ provides operators and functions to manage dynamic memory:   
    
    - new operator:
      Allocates a block of memory of a specified size.   
      Returns a pointer to the beginning of the allocated block.
      Example: int *ptr = new int; allocates memory for an integer and stores its address in ptr.
      
    - delete operator:
    Deallocates a block of memory previously allocated with new.
    Example: delete ptr; releases the memory pointed to by ptr.

  >> Why Use Dynamic Memory?
>  > 
    Flexibility: You can allocate memory as needed, without having to declare variables with fixed sizes upfront.
    Efficiency: You can avoid wasting memory by allocating only the amount required at a given time.   
    Data structures: Dynamic memory is essential for creating data structures like linked lists, trees, and graphs, where the size can vary during program execution.
          
__Uppgift 2.

  >> Grundläggande koncept om pekare i C / C++
  
    Deklaration: En pekare deklareras med hjälp av *-operatorn.
    Initialisering: En pekare initialiseras med adressen till en variabel med hjälp av &-operatorn.
    Dereferering: *-operatorn används för att komma åt värdet som lagras på minnesadressen pekaren pekar på.

(In eng)
  >> Fundamental concepts of pointers in C/C++
>  > 
    Declaration: A pointer is declared using the * operator.
    Initialization: A pointer is initialized with the address of a variable using the & operator.
    Dereferencing: The * operator is used to access the value stored at the memory address the pointer points to.
  
-  Skriv en enkelt exempel som illustrerar hur pekare fungerar i C++:
  
__Uppgift 3.

  Vad heter den online verktyg som du köra din C++ program och visa programmet dynamiska minne ?  
  Prov köra program i uppgift 2 


__Uppgift 4.
  
  Minneshanteringsproblem
   1. Minnesläckor: 
   2. Dubbel frigöring: 
   3. Dangling pointers:

(in eng)
  Memory management issues
> >     This is a general term that encompasses any problem related to how memory is allocated, used, and deallocated in a program.
  1. Memory leaks:
> >     This occurs when a program allocates memory but fails to deallocate it later, causing the program to consume 
        more and more memory over time, which can eventually lead to a crash.
  2. Double free:
> >     This happens when a piece of memory is deallocated more than once, which can lead to undefined behavior and
        program crashes.
  4. Dangling pointers:
> >     A dangling pointer points to a memory location that has been deallocated. Using a dangling pointer can result
       in unpredictable behavior or crashes.
- Beskriver kort vad dessa problem är genom visa kort C++ kod exempel.

__Uppgift 5.
  Vad är smart pointers och vilka problem löser den.
  
(in jp)  
>  >
>  >
    スマートポインターは、C++でメモリ管理をより安全かつ効率的に行うための便利な機能です。
    通常のポインターと比べて、スマートポインターは自動的にメモリを解放してくれるため、プログラマーが手動でdeleteを呼び出す必要がありません。
    これにより、メモリリークと呼ばれる、意図せずメモリが解放されない状態を防ぐことができます。
    
    ・スマートポインターのメリット
      メモリリーク防止: メモリの解放を自動化することで、メモリリークのリスクを大幅に減らすことができます。
      コードの簡潔化: newとdeleteを明示的に書く必要がなくなるため、コードが簡潔になり、可読性も向上します。
      例外安全性: 例外が発生した場合でも、スマートポインターは適切にメモリを解放し、プログラムのクラッシュを防ぐことができます。
      RAII（Resource Acquisition Is Initialization）のサポート: リソースの取得と初期化を結びつけることで、リソースの解放を確実にすることができます。
  
    ・スマートポインターの種類
      C++の標準ライブラリでは、主に以下の3種類のスマートポインターが提供されています。
    
    std::unique_ptr:
      特定のオブジェクトに対して、一つのunique_ptrしか存在できないという強い所有権を持ちます。
      コピーはできず、移動のみ可能です。
      小さなオーバーヘッドで、効率的なメモリ管理を実現します。
    std::shared_ptr:
      複数のshared_ptrが同じオブジェクトを共有することができます。
      オブジェクトへの参照カウントが0になると、自動的にメモリが解放されます。
      柔軟な共有が可能ですが、オーバーヘッドがやや大きくなります。
    std::weak_ptr:
      shared_ptrを弱く参照するためのものです。
      shared_ptrが破棄された後も存在することができますが、直接オブジェクトにアクセスすることはできません。
      サイクル参照を防ぐために使用されます。
      
    ・いつスマートポインターを使うべきか
      動的にメモリを確保する必要がある場合: newでメモリを確保する場合は、必ずスマートポインターを使うことを検討しましょう。
      オブジェクトのライフサイクルを厳密に管理したい場合: unique_ptrは、オブジェクトの所有権を明確にするのに役立ちます。
      複数のオブジェクトが同じリソースを共有する場合: shared_ptrは、リソースの共有を安全に行うことができます。
      サイクル参照を避ける必要がある場合: weak_ptrは、サイクル参照を解消するのに役立ちます。
    ・まとめ
      スマートポインターは、C++プログラミングにおいて、メモリ管理をより安全かつ効率的に行うための強力なツールです。
      適切なスマートポインターを選択し、正しく使用することで、より安定した高品質なプログラムを作成することができます。

(in eng)
  Smart Pointers: A Solution to Common Memory Management Problems in C++
  
- What is a smart pointer?
 >     A smart pointer is an abstract data type that simulates a regular pointer but provides additional features,
      such as automatic memory management. Unlike raw pointers, which require manual memory deallocation using delete, 
      smart pointers handle this process automatically, reducing the risk of memory leaks and other common memory-related errors.

- What problems do smart pointers solve?
    Smart pointers are designed to address several common memory management issues in C++:
    
    Memory leaks:

      Smart pointers ensure that memory allocated with new is automatically deallocated 
      when it is no longer needed, preventing memory leaks.
  
    Double free:
  
      Smart pointers prevent the same block of memory from being deallocated multiple times,
      which can lead to undefined behavior and crashes.
  
    Dangling pointers:
  
      Smart pointers help avoid dangling pointers by tracking the lifetime of the object being
      pointed to and preventing access to deallocated memory.

__Upggift 6.

  - Skriver en smart pointer klass utan att använda template. Denna smart pointer klass jobba med data type int pointer.
  
  - "Implementing a smart pointer without templates is possible, though templates are often used to make smart pointers 
    more flexible. Without templates, the smart pointer would have to work with a specific type (e.g., int or MyClass). 
  
  - Let’s create a smart pointer that manages an int:"

__Uppgift 7. 

  - Hitta ett eller fler verktyg som hjälpa felsökning av C++ minne lackage.
