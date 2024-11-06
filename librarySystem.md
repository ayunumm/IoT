Date: 2024-11-06 ons

(se) ========================================================================================================

Bibliotek system

____Uppgift: 
Du ska skapa ett bibliotekssystem med klasser för att hantera böcker, låntagare och bibliotek. 
Systemet ska använda sig av OOP-koncept som arv, polymorfism, och inkapsling. Uppgiften ska inkludera följande krav:

1. Skapa en klass Item:

    Attribut:
        title (str): Titel på objektet.
        author (str): Författaren.
        year (int): Utgivningsår.
    Metoder:
        display_info(): Abstrakt metod som ska implementeras i subklasserna för att visa objektets information.
       
2. Skapa två subklasser Book och Magazine som ärver från Item:

    Book ska ha ett extra attribut pages (antal sidor).
    Magazine ska ha ett extra attribut issue (utgåva).
   
3. Skapa en klass LibraryUser:

    Attribut:
        name (str): Namn på låntagaren.
        borrowed_items (lista): Lista över lånade objekt (av typen Item).
    Metoder:
        borrow(item): Låna ett objekt (lägg till i borrowed_items).
        return_item(item): Returnera ett objekt (ta bort från borrowed_items).
        list_borrowed_items(): Visa en lista över lånade objekt.
   
4. Skapa en klass Library:

    Attribut:
        items (lista): Lista över alla objekt i biblioteket (böcker och tidskrifter).
        users (lista): Lista över alla låntagare.
    Metoder:
        add_item(item): Lägg till ett objekt till bibliotekets samling.
        remove_item(item): Ta bort ett objekt från biblioteket.
        register_user(user): Registrera en ny låntagare.
        borrow_item(user, item): Tillåt en användare att låna ett objekt om det finns tillgängligt.
        return_item(user, item): Tillåt en användare att returnera ett objekt.
        list_items(): Visa en lista över alla objekt i biblioteket.
        list_available_items(): Visa en lista över alla tillgängliga objekt som inte är lånade.
5. Skriver huvud program som visa ovanför klasser använder tillsammans
    Extra info
        str - använda C++ string klass
        lista - använda C++ vector klass

Extra krav (för extra utmaning):
    Gör så att ett objekt inte kan lånas av flera användare samtidigt.
    Implementera en metod i Library som skriver ut en sammanfattning över vilka objekt som är lånade och av vem.


(eng) ========================================================================================================

Library System

Task:
You are to create a library system using classes to manage books, borrowers, and the library itself.
The system should utilize OOP concepts such as inheritance, polymorphism, and encapsulation. The task should include the following requirements:

1. Create a class Item:

    Attributes:
    title (str): Title of the item.
    author (str): Author.
    year (int): Publication year.
    Methods:
    display_info(): Abstract method to be implemented in subclasses to display the object's information.

2. Create two subclasses Book and Magazine that inherit from Item:

    Book should have an extra attribute pages (number of pages).
    Magazine should have an extra attribute issue (issue number).

3. Create a class LibraryUser:

    Attributes:
    name (str): Name of the borrower.
    borrowed_items (list): List of borrowed items (of type Item).
    Methods:
    borrow(item): Borrow an item (add to borrowed_items).
    return_item(item): Return an item (remove from borrowed_items).
    list_borrowed_items(): Display a list of borrowed items.

4. Create a class Library:

    Attributes:
    items (list): List of all items in the library (books and magazines).
    users (list): List of all borrowers.
    Methods:
    add_item(item): Add an item to the library's collection.
    remove_item(item): Remove an item from the library.
    register_user(user): Register a new borrower.
    borrow_item(user, item): Allow a user to borrow an item if it is available.
    return_item(user, item): Allow a user to return an item.
    list_items(): Display a list of all items in the library.
    list_available_items(): Display a list of all available items that are not borrowed.

5. Write a main program that demonstrates the use of the above classes.

    Extra info
    str - use C++ string class
    list - use C++ vector class
    Extra requirements (for extra challenge):
    Ensure that an item cannot be borrowed by multiple users simultaneously.
    Implement a method in Library that prints a summary of which items are borrowed and by whom.


(jp) ========================================================================================================


課題:
本、貸出者、図書館を管理するクラスを使用して、図書館システムを作成してください。
このシステムは、継承、多態性、カプセル化などのOOP概念を使用する必要があります。この課題には、以下の要件が含まれます。

1. Itemクラスを作成します。

    属性:
    title (str): アイテムのタイトル。
    author (str): 著者。
    year (int): 出版年。
    メソッド:
    display_info(): サブクラスで実装される抽象メソッドで、オブジェクトの情報を表示します。
   
2. Itemを継承するBookとMagazineの2つのサブクラスを作成します。
    
    Bookには、pages（ページ数）という追加の属性が必要です。
    Magazineには、issue（号数）という追加の属性が必要です。
   
3. LibraryUserクラスを作成します。

    属性:
    name (str): 貸出者の名前。
    borrowed_items (リスト): 貸出中のアイテムのリスト（Item型）。
    メソッド:
    borrow(item): アイテムを貸出する（borrowed_itemsに追加）。
    return_item(item): アイテムを返却する（borrowed_itemsから削除）。
    list_borrowed_items(): 貸出中のアイテムのリストを表示する。

4. Libraryクラスを作成します。
    
    属性:
    items (リスト): 図書館内のすべてのアイテム（本と雑誌）のリスト。
    users (リスト): すべての貸出者のリスト。
    メソッド:
    add_item(item): 図書館のコレクションにアイテムを追加する。
    remove_item(item): 図書館からアイテムを削除する。
    register_user(user): 新しい貸出者を登録する。
    borrow_item(user, item): 利用可能な場合、ユーザーにアイテムを貸出できるようにする。
    return_item(user, item): ユーザーがアイテムを返却できるようにする。
    list_items(): 図書館内のすべてのアイテムのリストを表示する。
    list_available_items(): 貸出中のアイテムを除く、すべての利用可能なアイテムのリストを表示する。

5. 上記のクラスの使用を示すメインプログラムを作成します。

    追加情報
    str - C++のstringクラスを使用
    リスト - C++のvectorクラスを使用
    追加要件（さらなる挑戦のために）：
    
    1つのアイテムが同時に複数のユーザーに貸出されないようにします。
    どのアイテムが誰によって貸出されているかのサマリーを出力するメソッドをLibraryに実装します。
    解説
    この課題は、オブジェクト指向プログラミングの基礎的な概念を理解し、それらを応用して図書館システムを構築することを目的としています。

主なポイント:

    継承: Itemクラスを基底クラスとして、BookクラスとMagazineクラスがその特徴を継承します。
    多態性: display_info()メソッドは、各サブクラスで異なる実装を持つことができます。
    カプセル化: 各クラスの属性とメソッドを適切にカプセル化することで、データの整合性を保ちます。
    データ構造: C++のstringクラスとvectorクラスを使用して、文字列とリストを表現します。
    課題の難易度:
    
    基本的な課題は、各クラスの定義と、それらの間の関係を理解することです。
    応用的な課題としては、複数のユーザーによる同時貸出の防止や、貸出状況の集計などが挙げられます。

学習のポイント:

    オブジェクト指向プログラミングの考え方
    クラスの設計
    継承、多態性、カプセル化の概念
    C++の標準ライブラリ（string, vector）の活用
    その他
    この課題を解くためには、以下の知識が必要になります。
    
    オブジェクト指向プログラミングの基礎
    C++の文法
    アルゴリズムとデータ構造


    
