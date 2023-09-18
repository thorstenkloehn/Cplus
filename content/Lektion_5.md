---
title: "Lektion 6"
date: 2023-09-18T01:05:07+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Lektion 6"
    weight: 7
    
---
# Lektion 7
## Zeiger in C++
### Was ist ein Zeiger?
Ein Zeiger ist eine Variable, die die Adresse einer anderen Variable enthält. Ein Zeiger kann auf eine Variable oder auf eine Funktion zeigen. Zeiger sind sehr leistungsfähig und können verwendet werden, um Arrays, Strings, Strukturen, Klassen, Funktionen und mehr zu manipulieren. Sie sind jedoch auch etwas verwirrend, wenn sie zum ersten Mal verwendet werden. Es ist wichtig, dass Sie die Grundlagen der Zeiger verstehen, bevor Sie sie verwenden.

#### Zeiger-Deklaration
Um eine Variable als Zeiger zu deklarieren, müssen Sie einen Stern (*) verwenden:
```c++
int *ip;    // Zeiger auf eine int-Variable
double *dp; // Zeiger auf eine double-Variable
float *fp;  // Zeiger auf eine float-Variable
char *ch;   // Zeiger auf eine char-Variable
```
Die tatsächliche Datenart des Wertes der Variablen, auf die der Zeiger zeigt, ist nicht wichtig, solange sie nicht void ist. Der Stern (*) wird verwendet, um einen Zeiger zu deklarieren. Dann wird der Variablenname deklariert. Diese Variablen können mit anderen Variablen deklariert werden, z. B.:
```c++
int *ip, j;
```
In diesem Fall ist nur ip ein Zeiger, j ist eine int-Variable.

#### Initialisierung von Zeigern in C++
Es gibt drei Möglichkeiten, einen Zeiger zu initialisieren:
```c++
int *ip = NULL;   // Zeiger auf NULL setzen
int *ip = 0;      // Zeiger auf NULL setzen
int *ip;          // Zeiger auf NULL setzen
```
Alle obigen Anweisungen initialisieren einen Zeiger mit NULL, wenn kein Wert angegeben ist. Ein Zeiger, der auf NULL zeigt, wird als Nullzeiger bezeichnet.

#### Zugriff auf den Wert eines Zeigers
Es gibt zwei Möglichkeiten, auf den Wert eines Zeigers zuzugreifen:
```c++
int var = 20;   // Variablendeklaration
int *ip;        // Zeigerdeklaration
ip = &var;      // Speicheradresse der Variablen var an den Zeiger ip zuweisen
```
Der obige Code weist den Wert der Variablen var an den Zeiger ip zu. Um den Wert der Variablen var zu erhalten, können Sie den Stern (*) verwenden, wie folgt:
```c++
