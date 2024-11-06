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

    Declaration: A pointer is declared using the * operator.
    Initialization: A pointer is initialized with the address of a variable using the & operator.
    Dereferencing: The * operator is used to access the value stored at the memory address the pointer points to.
  
-  Skriv en enkelt exempel som illustrerar hur pekare fungerar i C++:
  
----------> https://github.com/ayunumm/IoT/blob/main/pointerovning.cpp
  
__Uppgift 3.

  Vad heter den online verktyg som du köra din C++ program och visa programmet dynamiska minne ?  
  Prov köra program i uppgift 2 

----------> https://pythontutor.com/cpp.html#mode=edit


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
- 
---------->  https://github.com/ayunumm/IoT/blob/main/pointerovning.cpp

(in se)

    C++におけるメモリ管理の問題点とその説明
    C++では、プログラマーがメモリを明示的に管理する必要があるため、メモリ管理に関する問題がしばしば発生します。以下に、代表的な3つの問題とその説明を詳しく解説します。
    
    1. メモリリーク（Memory Leak）
    定義: 動的に確保されたメモリが、不要になった後も解放されずに残ってしまう状態。
    原因:
    new で確保したメモリに対して、対応する delete を忘れる。
    例外が発生した際に、メモリが解放されない。
    プログラムのロジック上のミスで、メモリを解放するタイミングを逃す。
    影響:
    プログラムが長時間実行されると、利用可能なメモリが枯渇し、プログラムがクラッシュしたり、パフォーマンスが低下したりする。
    2. ダブルフリー（Double Free）
    定義: 既に解放されたメモリを再度解放しようとする状態。
    原因:
    同じメモリ領域に対して、delete を複数回実行する。
    ポインターの誤った操作により、意図せず同じメモリ領域を複数回解放してしまう。
    影響:
    プログラムがクラッシュしたり、予期せぬ動作をしたりする。
    3. ダングリングポインター（Dangling Pointer）
    定義: 解放されたメモリ領域を指し示すポインター。
    原因:
    delete でメモリを解放した後も、そのメモリ領域を指し示すポインターを使い続ける。
    ポインターが、有効な範囲外を指すようになる。
    影響:
    解放されたメモリ領域にアクセスしようとした際に、プログラムがクラッシュしたり、不正なデータが書き込まれたりする。
    メモリ管理問題を避けるための対策
    スマートポインターの利用: std::unique_ptr, std::shared_ptr などのスマートポインターは、スコープを抜けると自動的にメモリを解放してくれるため、メモリリークを防ぐことができます。
    RAII（Resource Acquisition Is Initialization） の原則を守る: リソース（メモリなど）の取得と解放を、オブジェクトの構築と破棄に結びつけることで、メモリ管理のミスを減らすことができます。
    デバッガの活用: メモリリーク検出ツールやデバッガを使って、プログラム実行中のメモリ状態を監視し、問題を早期に発見することができます。
    コーディング規約の遵守: チームで統一されたコーディング規約を設け、メモリ管理に関するルールを明確にすることで、ミスの発生を減らすことができます。
    まとめ
    
    C++のメモリ管理は、プログラマーの責任で行う必要があります。メモリ管理の問題は、プログラムの安定性と信頼性に大きく影響するため、これらの問題を理解し、適切な対策を講じることが重要です。スマートポインターの利用や、RAIIの原則を守るなど、効果的なメモリ管理手法を習得することで、より安全で高品質なC++プログラムを作成することができます。
    
    さらに詳しく知りたい場合は、以下のキーワードで検索してみてください。
    
    C++ メモリ管理
    スマートポインター
    RAII
    メモリリーク
    ダブルフリー
    ダングリングポインター
    何か他に質問があれば、お気軽にご質問ください。

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
  - 
----------> https://github.com/ayunumm/IoT/blob/main/pointerovning2ease.cpp
  
        "Implementing a smart pointer without templates is possible, though templates are often used to make smart pointers 
          more flexible. Without templates, the smart pointer would have to work with a specific type (e.g., int or MyClass). 
         Let’s create a smart pointer that manages an int:"

__Uppgift 7. 

  - Hitta ett eller fler verktyg som hjälpa felsökning av C++ minne lackage.
  - 

- Valgrind
Plattform: Linux, macOS
Funktioner:
Identifierar , dubbelfrieringar, användning av oinitierad minne och andra minnesrelaterade fel.
Ger detaljerad information om var felet uppstår.
Kan användas för att analysera hela program eller enskilda funktioner.
Fördelar:
Mycket populärt och väl etablerat.
Gratis och open source.
Nackdelar:
Kan vara långsamt för stora program.

- AddressSanitizer (ASan)
Plattform: Linux, macOS, Windows
Funktioner:
Integrerad i GCC och Clang.
Upptäcker många typer av minnesfel, inklusive minnesläckor, användning av oinitierad minne och buffer overflows.
Ger snabb feedback.
Fördelar:
Snabb och enkel att använda.
Integrerad i många moderna kompilatorer.
Nackdelar:
Kan ge falska positiva resultat i vissa fall.

- LeakSanitizer (LSan)
Plattform: Linux, macOS, Windows
Funktioner:
Specialiserat på att hitta minnesläckor.
Ger detaljerad information om var minnet allokeras och inte friges.
Fördelar:
Mycket effektiv för att hitta minnesläckor.
Integrerad i många moderna kompilatorer.
Nackdelar:
Kan ge falska positiva resultat i vissa fall.

-Visual Studio Memory Analyzer
Plattform: Windows
Funktioner:
Integrerad i Visual Studio.
Ger visuell representation av minnesanvändning.
Kan ta snapshots av minnesanvändningen vid olika tidpunkter.
Fördelar:
Lätt att använda för Visual Studio-användare.
Nackdelar:
Begränsad till Visual Studio-miljön.

Other Tools
- GDB: En kraftfull debugger som kan användas för att manuellt inspektera minnesanvändningen.
- Purify: Ett kommersiellt verktyg som erbjuder omfattande minnesfelsökning.
- Dr. Memory: Ett open source-verktyg som fokuserar på att hitta minnesfel i Windows-program.
- Tips för att använda verktygen effektivt
- Minimalisera testfallet: Försök att isolera det problemområde där minnesläckan uppstår för att underlätta felsökningen.
Använd rätt verktyg: Välj ett verktyg som passar för din plattform och dina behov.

Tolka resultaten noggrant: Verktygen kan ge många detaljer, så det är viktigt att kunna tolka resultaten korrekt.
Kolla efter falska positiva: Ibland kan verktygen rapportera fel som inte är riktiga minnesläckor.
Kombinera flera verktyg: Att använda flera verktyg kan ge en mer komplett bild av problemet.
Val av verktyg beror på flera faktorer:

Plattform: Vilket operativsystem använder du?
Kompilator: Vilken kompilator använder du (GCC, Clang, Visual Studio)?
Programmets storlek och komplexitet: Större program kan kräva mer avancerade verktyg.
Dina preferenser: Vissa verktyg är mer användarvänliga än andra.

Sammanfattningsvis:
Genom att använda rätt verktyg och följa goda felsökningsmetoder kan du effektivt hitta och åtgärda minnesläckor i dina C++-program.
