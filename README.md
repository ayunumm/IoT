Date: 2024-11-11

Strömmar och filer
Studera

Boken kapitel 11.
https://www.youtube.com/watch?v=wVhCnzFwxt4
https://www.youtube.com/watch?v=EaHFhms_Shw
https://www.youtube.com/watch?v=K7Pi0jGnyqw

https://www.programiz.com/cpp-programming/library-function/cstdio/fopen


1. Hur öppna man en text fil med C++ och räknar antal tecken och antal rader som finn i filen.

För att utföra din uppgift i C++ utan att använda `<fstream>`, kan du titta på att använda C-standardens I/O-funktioner som ingår i C++ standardbiblioteket. 
Specifikt tillhandahåller `<cstdio>`-huvudfilen i C++ standard C-stilsfunktioner som `fopen()`, `fgets()`, och `fgetc()`. Dessa funktioner kan användas för att öppna, läsa och räkna raderna och tecknen i en textfil.

### Så här kan du gå vidare:

1. **Inkludera `<cstdio>`-biblioteket**: Denna huvudfil innehåller definitionerna av funktioner för filoperationer liknande C:s I/O-funktioner.

2. **Funktioner att använda**:
   - `fopen()`: Öppnar en fil och returnerar en pekare till `FILE`-objektet.
   - `fgets()`: Läser en rad från filen.
   - `fgetc()`: Läser individuella tecken.
   - `fclose()`: Stänger filen.

   Dessa funktioner är effektiva för att läsa filer och används ofta när man vill undvika C++:s högnivåabstraktioner för fil-I/O.

### Sammanfattning:
För att lösa din uppgift kan du använda följande tillvägagångssätt:
- Använd `<cstdio>` för funktioner som `fopen()`, `fgets()`, och `fgetc()` för att öppna och läsa en fil.
- Iterera genom raderna och tecknen för att räkna dem.


2. Lösa samma problem med fstream istället.


Var man hittar dokumentation:
För officiell dokumentation om C++ standardbiblioteksfunktioner, inklusive `<cstdio>` för att hantera fil-I/O på C-stil, kan du referera till följande källor:

1. **cppreference.com**: Detta är en utmärkt och detaljerad resurs för både C++- och C-standardbibliotek.

https://en.cppreference.com/w/cpp/header/cstdio

2. **cplusplus.com**: En annan bra referens som erbjuder lättförståeliga exempel och detaljerade beskrivningar av funktioner som finns i C++ standardbibliotek.

http://www.cplusplus.com/reference/cstdio

(en)===================================================================================================================================================================

Strömmar och filer
Studera

Boken kapitel 11.
https://www.youtube.com/watch?v=wVhCnzFwxt4
https://www.youtube.com/watch?v=EaHFhms_Shw
https://www.youtube.com/watch?v=K7Pi0jGnyqw

https://www.programiz.com/cpp-programming/library-function/cstdio/fopen


1. Hur öppna man en text fil med C++ och räknar antal tecken och antal rader som finn i filen.

För att utföra din uppgift i C++ utan att använda `<fstream>`, kan du titta på att använda C-standardens I/O-funktioner som ingår i C++ standardbiblioteket. 
Specifikt tillhandahåller `<cstdio>`-huvudfilen i C++ standard C-stilsfunktioner som `fopen()`, `fgets()`, och `fgetc()`. Dessa funktioner kan användas för att öppna, läsa och räkna raderna och tecknen i en textfil.

### Så här kan du gå vidare:

1. **Inkludera `<cstdio>`-biblioteket**: Denna huvudfil innehåller definitionerna av funktioner för filoperationer liknande C:s I/O-funktioner.

2. **Funktioner att använda**:
   - `fopen()`: Öppnar en fil och returnerar en pekare till `FILE`-objektet.
   - `fgets()`: Läser en rad från filen.
   - `fgetc()`: Läser individuella tecken.
   - `fclose()`: Stänger filen.

   Dessa funktioner är effektiva för att läsa filer och används ofta när man vill undvika C++:s högnivåabstraktioner för fil-I/O.

### Sammanfattning:
För att lösa din uppgift kan du använda följande tillvägagångssätt:
- Använd `<cstdio>` för funktioner som `fopen()`, `fgets()`, och `fgetc()` för att öppna och läsa en fil.
- Iterera genom raderna och tecknen för att räkna dem.


2. Lösa samma problem med fstream istället.


Var man hittar dokumentation:
För officiell dokumentation om C++ standardbiblioteksfunktioner, inklusive `<cstdio>` för att hantera fil-I/O på C-stil, kan du referera till följande källor:

1. **cppreference.com**: Detta är en utmärkt och detaljerad resurs för både C++- och C-standardbibliotek.

https://en.cppreference.com/w/cpp/header/cstdio

2. **cplusplus.com**: En annan bra referens som erbjuder lättförståeliga exempel och detaljerade beskrivningar av funktioner som finns i C++ standardbibliotek.

http://www.cplusplus.com/reference/cstdio

(jp) ===================================================================================================================================================================

ストリームとファイル

学習

参考資料：

章 11
https://www.youtube.com/upload
https://m.youtube.com/watch?v=TF2-F2duY6c
https://m.youtube.com/watch?v=13TrhiKLZg8
https://www.programiz.com/cpp-programming/library-function/cstdio/fopen


１．C++ でテキストファイルを開き、その中の文字数と行数を数える方法

  C++ で <fstream> を使用せずにタスクを完了するには、C++ 標準ライブラリに含まれている標準 C 入出力関数を使用することを検討できます。
  
  具体的には、C++ の <cstdio> ヘッダーファイルは、fopen(), fgets(), fgetc() などの標準 C スタイルの関数を提供しています。これらの関数は、テキストファイルを開き、読み取り、行数と文字数をカウントするために使用できます。
  
  手順:
  
   1. <cstdio> ヘッダーを含める: このヘッダーファイルは、C の入出力関数と同様のファイル操作のための関数の定義を含んでいます。
  
   2. 使用する関数:
  
    fopen(): ファイルを開き、FILE オブジェクトへのポインタを返します。
    fgets(): ファイルから 1 行読み取ります。
    fgetc(): 個々の文字を読み取ります。
    fclose(): ファイルを閉じます。
    これらの関数は、ファイルの読み取りに効率的で、C++ のより高度なファイル入出力抽象を回避したい場合によく使用されます。
  
  まとめ:
  
  タスクを解決するには、以下の手順を使用できます。
  
  <cstdio> を使用して fopen(), fgets(), fgetc() などの関数を使い、ファイルを開いて読み取ります。
  行と文字を反復処理してカウントします。
  fstream を使用して同じ問題を解決
  
  ドキュメントの場所:

2. C++ 標準ライブラリ関数の公式ドキュメントについては、C スタイルのファイル入出力処理のための <cstdio> を含め、以下のソースを参照してください。
  
  　1．cppreference.com: C++ 標準ライブラリと C 標準ライブラリの両方について、優れた詳細なリソースです。
  　　　https://en.cppreference.com/w/cpp/io/c/fopen
  
  　2. cplusplus.com: C++ 標準ライブラリにある関数のわかりやすい例と詳細な説明を提供する、もう 1 つの優れたリファレンスです。
       https://en.cppreference.com/w/cpp/io/c/fopen
  
  説明
  
  このテキストは、C++ を使用してテキストファイル内の文字数と行数をカウントする方法のガイドです。 以下の 2 つの方法が提供されています。
  
  <cstdio> を使用: より低レベルの C スタイル関数 (fopen(), fgets(), fgetc()) を使用して、ファイル操作を手動で処理します。
  <fstream> を使用: オブジェクト指向アプローチのために、より高レベルの C++ ストリームクラス (ifstream) を使用します。
  このテキストには、詳細情報と例を見つけることができるリソースへのリンクも含まれています。
