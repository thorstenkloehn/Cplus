---
title: "Lektion 5"
date: 2023-09-18T01:05:07+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Lektion 5"
    weight: 7
    
---
# Lektion 5
## Zeiger in C++
### Was ist ein Zeiger?
Ein Zeiger ist eine Variable, die die Adresse einer anderen Variable enthält. Ein Zeiger kann auf eine Variable oder auf eine Funktion zeigen. Zeiger sind sehr leistungsfähig und können verwendet werden, um Arrays, Strings, Strukturen, Klassen, Funktionen und mehr zu manipulieren. Sie sind jedoch auch etwas verwirrend, wenn sie zum ersten Mal verwendet werden. Es ist wichtig, dass Sie die Grundlagen der Zeiger verstehen, bevor Sie sie verwenden.

#### &-Operator in C++
Der &-Operator wird als Adressoperator bezeichnet. Es gibt die Adresse einer Variablen an. Dieser Operator wird auch als Referenzoperator bezeichnet. Er wird verwendet, um eine Referenz auf eine Variable zu erstellen. Dies wird in der folgenden Syntax gezeigt:
```c++
&Variablenname;
```
#### *-Operator in C++
Der *-Operator wird als Dereferenzierungsoperator bezeichnet. Es wird verwendet, um den Wert einer Variablen anzuzeigen, die durch einen Zeiger angegeben wird. Dies wird in der folgenden Syntax gezeigt:
```c++
*Zeigername;
```
#### Zeiger-Deklaration
Um eine Variable als Zeiger zu deklarieren, müssen Sie einen Stern (*) verwenden:
```c++
Datentyp*Zeigername;
```
Die tatsächliche Datenart des Wertes der Variablen, auf die der Zeiger zeigt, ist nicht wichtig, solange sie nicht void ist. Der Stern (*) wird verwendet, um einen Zeiger zu deklarieren. Dann wird der Variablenname deklariert. Diese Variablen können mit anderen Variablen deklariert werden, z. B.:



#### Initialisierung von Zeigern in C++
Es gibt drei Möglichkeiten, einen Zeiger zu initialisieren:
```c++
Datentype *Zeigername = NULL;   // Zeiger auf NULL setzen
Datetyp *Zeigername = 0;      // Zeiger auf NULL setzen
Datentyp *Zeigername;          // Zeiger auf NULL setzen

```
Alle obigen Anweisungen initialisieren einen Zeiger mit NULL, wenn kein Wert angegeben ist. Ein Zeiger, der auf NULL zeigt, wird als Nullzeiger bezeichnet.

#### Zugriff auf den Wert eines Zeigers
Es gibt zwei Möglichkeiten, auf den Wert eines Zeigers zuzugreifen:
```c++
Datentyp Variablenname=Wert;    // Deklaration einer Variablen
Datentyp *Zeigername;    // Deklaration eines Zeigers
Zeigername = &Variablenname;    // Speicheradresse der Variablen an den Zeiger zuweisen
```
Der obige Code weist den Wert der Variablen var an den Zeiger ip zu. Um den Wert der Variablen var zu erhalten, können Sie den Stern (*) verwenden, wie folgt:
## Heap in Zeigern
Der Heap ist ein Speicherbereich, in dem Variablen während der Laufzeit eines Programms erstellt werden können. Der Heap ist nicht so organisiert wie der Stapel. Es gibt keine Garantie dafür, dass Variablen im Heap in einer bestimmten Reihenfolge angeordnet werden. Sie können jedoch auf Variablen im Heap zugreifen, indem Sie einen Zeiger auf sie erstellen. Dies wird in der folgenden Syntax gezeigt:
```c++
Datentyp *Zeigername = new Datentyp;
```
## Heap in Zeigern mit Wertzuweisung
Sie können auch einen Wert an eine Variable im Heap zuweisen, indem Sie den Stern (*) verwenden, wie folgt:
```c++
Datentyp *Zeigername = new Datentyp;
*Zeigername = Wert;
```
## Zeiger in C++ mit Feld
Sie können auch einen Zeiger auf ein Feld erstellen, indem Sie den Namen des Feld verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
Datentyp Variablenname[Anzahl]
Datentyp*Zeigername = Variablenname;
```
## Zeiger in C++ mit Feld und Wertzuweisung
Sie können auch einen Wert an ein Feldnamw zuweisen, indem Sie den Namen des Feldname verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
Datentyp Variablenname[Anzahl];
Datentyp*Zeigername = Variablenname;
Zeigername[Anzahl] = Wert;
```

## Zeiger in C++ löschen
Sie können einen Zeiger löschen, indem Sie den Befehl delete verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
delete Zeigername;
```
## Zeiger in C++ mit Feld löschen
Sie können einen Zeiger auf ein Feld löschen, indem Sie den Befehl delete verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
delete []Zeigername;
```
### nullptr in C++
nullptr ist ein Schlüsselwort, das in C++11 eingeführt wurde. Es wird verwendet, um einen Nullzeiger zu initialisieren oder zu vergleichen. Es kann auch als Ersatz für NULL verwendet werden. Es ist ein Literal vom Typ std::nullptr_t. Es kann in jedem Ausdruck verwendet werden, der einen Zeiger erfordert. Es kann auch in einer if-Anweisung verwendet werden, um zu überprüfen, ob ein Zeiger auf NULL zeigt. Es wird in der folgenden Syntax gezeigt:
```c++  
Zeigername=nullptr; // Zeiger auf NULL setzen.
```

## std::array in C++
std::array isr eine Containerklasse, die in C++11 eingeführt wurde. Es ist eine Sequenz von Elementen, die in einem Array gespeichert sind. Es ist eine statische Containerklasse, dh die Größe des Arrays zur Kompilierzeit festgelegt wird. Es ist ein Container, der eine feste Größe hat
```c++
std::array<Datentyp,Anzahl>Variablenname;
```
## std::array in C++ mit Wertzuweisung
Sie können auch einen Wert an ein Feld zuweisen, indem Sie den Namen des Feldes verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
std::array<Datentyp,Anzahl>Variablenname;
Variablenname[Anzahl] = Wert;
```
## std::array in C++ mit Feld
Sie können auch einen Zeiger auf ein Feld erstellen, indem Sie den Namen des Feldes verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
std::array<Datentyp,Anzahl>Variablenname;
Datentyp*Zeigername = Variablenname;
```
## std::array in C++ mit Feld und Wertzuweisung
Sie können auch einen Wert an ein Feld zuweisen, indem Sie den Namen des Feldes verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
std::array<Datentyp,Anzahl>Variablenname;
Datentyp*Zeigername = Variablenname;
Zeigername[Anzahl] = Wert;
```

## std::array in C++ länge
Sie können die Länge eines std::array mit der Methode size() ermitteln. Dies wird in der folgenden Syntax gezeigt:
```c++
std::array<Datentyp,Anzahl>Variablenname;
Variablenname.size();
```
## std::array in C++ löschen
Sie können einen std::array löschen, indem Sie den Befehl delete verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
delete Variablenname;
```
## std::array in C++ mit Feld löschen
Sie können einen Zeiger auf ein Feld löschen, indem Sie den Befehl delete verwenden. Dies wird in der folgenden Syntax gezeigt:
```c++
delete []Variablenname;
```
## Funktionen in C++ Parameter mit Zeiger copy
Sie können einen Zeiger als Parameter an eine Funktion übergeben. Dies wird in der folgenden Syntax gezeigt:
```c++
void Funktionsname(Datentyp*Zeigername);
```
## Funktionen in C++ Parameter mit Zeiger Refferenc
Sie können einen Zeiger als Parameter an eine Funktion übergeben. Dies wird in der folgenden Syntax gezeigt:
```c++
void Funktionsname(Datentyp&Zeigername);
```

## Funktionen in C++ Parameter mit std::array copy
Sie können einen std::array als Parameter an eine Funktion übergeben. Dies wird in der folgenden Syntax gezeigt:
```c++
void Funktionsname(std::array<Datentyp,Anzahl>Variablenname);
```
## Funktionen in C++ Parameter mit std::array Refferenc
Sie können einen std::array als Parameter an eine Funktion übergeben. Dies wird in der folgenden Syntax gezeigt:
```c++
void Funktionsname(std::array<Datentyp,Anzahl>&Variablenname);
```











