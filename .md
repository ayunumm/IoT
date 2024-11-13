Tolka YAML filer

Skapar en YamlParser som hanterar både enkla nyckel-värde-par och listor
Parsern stöder nyckel-värde-par som är på samma rad
och listor med nyckel i en rad följer en list av värde i efterföljande rader.

Konstruktorn laddar YAML-filen och hanterar eventuella fel vid laddningen.

getString är metod för att extrahera sträng från YAML-filen
getInt är metod för att extrahera heltalsvärden från YAML-filen.

getStringList läser en lista från YAML-filen och returnerar en std::vector<std::string>.

Tips: Använda unordered_map med variant för att spara data som läst in från yaml filen.
std::unordered_map<std::string, std::variant<std::string, std::vector<std::string>>> data;

(Studera länkar i slutet av denna dokument)

Exempel på YAML-fil

![image](https://github.com/user-attachments/assets/cdfcce24-11cc-43a1-8240-7fecb29f5a6b)



Så här ser huvud program ut.


![image](https://github.com/user-attachments/assets/78aab723-05b3-4945-8434-31b8f59a83e7)


Extra svårt uppgift:

Undersöka hur man kan använda yaml-cpp bibliotek och skapa en projekt med samma exempel som ovan men använder yaml-cpp istället.

Gör att projekten gå att kompilera och köra i en terminal. Dvs inte VSC eller andra IDE.

Skriver en enkel steg för steg instruktion hur du har gjort.

Ladda upp till Github till en ny repo.

Länkar
https://www.geeksforgeeks.org/how-to-create-a-dictionary-in-cpp/
https://stackoverflow.com/questions/56350891/store-multiple-types-as-values-in-c-dictionary


==(eng)=====================================================================================


Parse YAML files

Create a YAML parser that handles both simple key-value pairs and lists.
The parser supports key-value pairs on the same line and lists with a key on one line followed by a list of values on subsequent lines.

The constructor loads the YAML file and handles any errors during loading.

getString is a method to extract a string from the YAML file.
getInt is a method to extract integer values from the YAML file.

getStringList reads a list from the YAML file and returns a std::vector<std::string>.

Tip: Use an unordered_map with a variant to store data read from the YAML file.
std::unordered_map<std::string, std::variant<std::string, std::vector<std::string>>> data;

(Study the links at the end of this document)

Example of a YAML file

Explanation:
Task:
Create a C++ class or function to parse YAML files and extract specific data types.

Requirements:
Handle both key-value pairs and lists: The parser should support simple key-value pairs and lists where the key is on one line and the values are on subsequent lines.
Error handling: The constructor should handle any errors that occur during the loading of the YAML file.
Data extraction: The parser should provide methods to extract strings, integers, and lists of strings from the parsed data.
Data storage: The std::unordered_map and std::variant combination is suggested to store the parsed data efficiently.
Specific methods:
getString: Extracts a string value based on a given key.
getInt: Extracts an integer value based on a given key.
getStringList: Extracts a list of strings based on a given key.


Example YAML file:

![image](https://github.com/user-attachments/assets/cdfcce24-11cc-43a1-8240-7fecb29f5a6b)



This is what the main program looks like.

![image](https://github.com/user-attachments/assets/78aab723-05b3-4945-8434-31b8f59a83e7)

An example YAML file should be provided to demonstrate the expected format and structure of the input data.

Additional notes:
YAML libraries: You might consider using existing YAML parsing libraries to simplify the implementation.
Error handling: Implement robust error handling to catch potential exceptions during parsing.
Performance: Optimize the parser for performance, especially when dealing with large YAML files.
Possible approach:
Choose a YAML parsing library: Evaluate options like yaml-cpp, libyaml, or PyYAML (if using Python bindings).
Parse the YAML file: Use the chosen library to parse the YAML file and create a data structure.
Breakdown of the Swedish terms:
Tolka YAML filer: Parse YAML files
Skapar en YamlParser: Creates a YAML parser
hanterar både enkla nyckel-värde-par och listor: handles both simple key-value pairs and lists
nyckel-värde-par: key-value pairs
Konstruktorn laddar YAML-filen: The constructor loads the YAML file
extrahera sträng: extract string
extrahera heltalsvärden: extract integer values
std::vector<std::string>: a standard C++ vector of strings
Do you need a more detailed explanation of any of these points, or would you like to see a code example?


==(jp)=====================================================================================

YAML ファイルの解析
  シンプルなキーと値のペア、およびリストの両方を処理する YAMLパーサーを作成します。
  パーサーは、同一行にキーと値のペアをサポートし、1行にキー、それに続く行に値のリストを持つリストをサポートします。
  
  コンストラクターはYAMLファイルをロードし、ロード中のエラーを処理します。
  
  getStringは、YAMLファイルから文字列を抽出するためのメソッドです。
  getIntは、YAMLファイルから整数値を抽出するためのメソッドです。

  getStringListは、YAMLファイルからリストを読み取り、std::vector<std::string>を返します。

ヒント：YAMLファイルから読み込んだデータを保存するために、variantを持つunordered_mapを使用します。
std::unordered_map<std::string, std::variant<std::string, std::vector<std::string>>> data;

（このドキュメントの最後に記載されているリンクを参照してください）

YAMLファイルの例

画像１
![image](https://github.com/user-attachments/assets/cdfcce24-11cc-43a1-8240-7fecb29f5a6b)

より詳細な解説

画像２
![image](https://github.com/user-attachments/assets/78aab723-05b3-4945-8434-31b8f59a83e7)

--機能
    シンプルなキーと値のペア、リストのサポート: YAMLファイルでよく見られる2つの基本的な構造に対応します。
    エラー処理: ファイル読み込み時のエラーを適切に処理し、プログラムの安定性を高めます。
    データ抽出: 必要なデータ型（文字列、整数、文字列のリスト）をYAMLファイルから抽出する機能を提供します。
    データ構造: C++の標準テンプレートライブラリであるstd::unordered_mapとstd::variantを用いて、柔軟なデータ構造を実現します。
    実装のポイント
    YAMLパーサーの選択: yaml-cpp, libyaml, PyYAMLなど、既存のYAMLパーサーライブラリを活用することで、実装を簡略化できます。
    エラー処理: 例外処理などを用いて、ファイルが見つからない、フォーマットが不正などのエラーを適切に処理します。
    パフォーマンス: 大量のYAMLファイルを処理する場合、パフォーマンスに配慮した実装が必要です。
    YAMLファイルの例
    実際に解析したいYAMLファイルの例を示すことで、パーサーの動作を具体的に説明できます。

その他
  ドキュメント:
  YAMLの仕様
  使用するYAMLパーサーライブラリのドキュメント
  C++の標準テンプレートライブラリ（std::unordered_map, std::variant）のドキュメント



