Date: 2024-11-01 fre
Anteckning av Destructor och Copy Constructor

Övningsuppgifter via digiexam
Skapa en Klass "Car"

__uppgift 1
-Skapa en klass som heter Car.
  Klassen ska ha följande publik medlemmar:
  
  std::string brand (märke)
  std::string model (modell)
  int year (årsmodell)
  double mileage (mätarställning)

- Skapa en konstruktör som tar in brand, model, year, och mileage som argument och initierar medlemsvariablerna med dessa värden.
- Skapa följande publika metoder:
  void drive(double distance) – ökar mileage med ett visst avstånd.
  void displayInfo() – skriver ut information om bilen, inklusive märke, modell, årsmodell och mätarställning.
  int getYear() – returnerar årsmodellen.
  double getMileage() – returnerar mätarställningen.
  
- Skapa ett huvudprogram (main) där du:
- Skapar ett objekt av klassen Car.
  Använder metoderna för att visa information om bilen, köra en viss sträcka och sedan visa den uppdaterade informationen.
  Länk till youtube video som ni har fått i läxa.
  https://www.youtube.com/watch?v=-TkoO8Z07hI&t=19118s
  

__uppgift2
Destruktorer = Destructors
- Vad är en destruktorer ?
- När ska man ha en destruktorer ?
- Ändrar klass Car i fråga 1 för medlemvariabel brand och model som av typen string, byta ut den till en array av char och hur man allokerar samt deallokerar minne dynamiskt
- Skriver en destruktorer för klass Car i frågan 1


__uppgift3
Kopieringskontruktorer = Copy Constructor
- Vad är kopieringskontruktorer (copy contructor) ?
  >> A copy constructor is a special member function in a class that creates 
     a new object as a copy of an existing object of the same class. 
     It's automatically invoked in several scenarios:
  
     - Initialization from another object:
          Car car1("Toyota", "Corolla", 1988, 33.33);
          Car car2 = car1; // Copy constructor called here
  
     - Passing by value to a function:
          void modifyCar(Car car) {
          // ... modify car ...
          }
          Car car1("Toyota", "Corolla", 1988, 33.33);
          modifyCar(car1); // Copy constructor called here (implicitly)
  
     - Returning by value from a function:
          Car createCar(const char* brand, const char* model, int year, double mileage) {
              Car car(brand, model, year, mileage);
              return car; // Copy constructor called here (implicitly)
          }


- När ska man ha en kopieringskontruktor ?
  >> Why Use a Copy Constructor?
     Deep Copying for Pointers: If your class contains member variables that
     are pointers to dynamically allocated memory (like char* in your Car class), 
     you need a copy constructor to ensure the new object has its own independent 
     copy of the data. The default copy constructor would only copy the pointer 
     addresses, leading to both objects pointing to the same memory, causing issues 
     if one object modifies the data.

- Skriver en kopieringskontruktor för klass Car i frågan 2


(jp) ==============================================================================

日本語訳と解説

問題1：

Carクラスの作成と利用

問題の要約:
Carクラスを作成し、車の情報（メーカー、モデル、年式、走行距離）を保持する。
コンストラクタで初期化し、走行距離を増やすメソッド、情報を表示するメソッド、年式と走行距離を取得するメソッドを実装する。
メイン関数でCarオブジェクトを作成し、これらのメソッドを呼び出す。

解説:
Carクラスは、車の情報をカプセル化します。
コンストラクタは、オブジェクト作成時に初期化を行います。
driveメソッドは、走行距離を更新します。
displayInfoメソッドは、車の情報を表示します。
getYearとgetMileageメソッドは、それぞれ年式と走行距離を取得します。

問題2：

デストラクタ

デストラクタとは:
オブジェクトが破棄される際に自動的に呼び出される特別なメソッドです。
動的に割り当てられたメモリを解放するなど、後処理を行うために利用されます。

問題3：

コピーコンストラクタ

コピーコンストラクタとは:
既存のオブジェクトをコピーして新しいオブジェクトを作成する際に呼び出される特別なコンストラクタです。
シャローコピーとディープコピーがあります。
