---
title: "Lektion 1"
date: 2023-09-03T01:52:25+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Lektion 1"
    weight: 2
    
---

# Lektion 1
## Hallo Welt-Programm
Das Hallo Welt-Programm ist ein einfaches Programm, das die Ausgabe "Hallo Welt" auf dem Bildschirm anzeigt. Es ist ein einfaches Programm, das verwendet wird, um die Grundlagen einer Programmiersprache zu erlernen.

### C++
```cpp
#include <iostream> // Ein- und Ausgabe von Daten Bibliothek
int main() { // Hauptfunktion
    std::cout << "Hallo Welt!" << std::endl; // Ausgabe von "Hallo Welt!"
    return 0; // Rückgabewert
}
```
### Ausgabe
```bash
Hallo Welt!
```

## Variablen

### C++
```cpp
Datentyp Variablenname = Wert; // Deklaration und Initialisierung von Variablen
Datentyp Variablenname; // Deklaration von Variablen
Variablenname = Wert; // Initialisierung von Variablen
```
### Was ist Variablen?

Eine Variable ist ein Speicherbereich, der einen Wert enthält. Der Wert einer Variablen kann sich während der Programmausführung ändern. Der Wert einer Variablen kann nicht geändert werden, nachdem er deklariert wurde. Der Wert einer Variablen kann nur geändert werden, indem er neu zugewiesen wird.

## Grundrechenarten

### C++
#### Plus
```cpp
int a = 5;
int b = 10;
int c = a + b;
```
#### Minus
```cpp
int a = 5;
int b = 10;
int c = a - b;
```
#### Mal
```cpp
int a = 5;
int b = 10;
int c = a * b;
```
#### Geteilt
```cpp
int a = 5;
int b = 10;
int c = a / b;
```
#### Modulo
```cpp
int a = 5;
int b = 10;
int c = a % b;
```

## Datentypen

### C++
#### Ganzzahlen
In Ganzzahlen können nur ganze Zahlen gespeichert werden.
```cpp
#include <cstdint> // Ganzzahlen Bibliothek
int_8 Variablenname =  1 Byte
int_16 Variablenname = 2 Bytes
int_32 Variablenname = 4 Bytes
int_64 Variablenname = 8 Bytes
```
#### Kommazahlen
In Kommazahlen können Kommazahlen gespeichert werden.
```cpp
float Variablenname  = 4 Bytes
double Variablenname  = 8 Bytes
```
#### Zeichen
In Zeichen können nur ein Zeichen gespeichert werden.
```cpp
char Variablenname  = 'Zeichen';
int8_t Variablenname  = 'Moderne Zeichen'

```
#### Boolesche Werte
In booleschen Werten können nur zwei Werte gespeichert werden. Richtig oder Falsch.
```cpp
bool Variablenname  = Richtig oder Falsch;
```
#### Zeichenketten
In Zeichenketten können mehrere Zeichen gespeichert werden.

```cpp
std::string Variablenname = "Zeichenkette";
```
## Bedingungen

### C++
#### wenn
Was ist If? If ist eine Bedingung, die ausgeführt wird, wenn die Bedingung erfüllt ist.
```cpp
if (Bedingung) {
    // Anweisung
}
```
#### wenn sonst
Was ist If else? If else ist eine Bedingung, die ausgeführt wird, wenn die Bedingung erfüllt ist. Wenn die Bedingung nicht erfüllt ist, wird der Code in else ausgeführt.
```cpp
if (Bedingung) {
    // Anweisung 1
} else {
    // Anweisung 2
}
```
#### wenn sonst wenn
Was ist If else if? If else if ist eine Bedingung, die ausgeführt wird, wenn die Bedingung erfüllt ist. Wenn die Bedingung nicht erfüllt ist, wird der Code in else if ausgeführt. Wenn die Bedingung in else if erfüllt ist, wird der Code in else if ausgeführt.
```cpp

if (Bedingung) {
    // Anweisunf 1
} else if (Bedingung) {
    // Anweisung 2
} else {
    // Anweisung 3
}
```
#### umschalten
Was ist Switch? Switch ist eine Bedingung, die ausgeführt wird, wenn die Bedingung erfüllt ist. Wenn die Bedingung nicht erfüllt ist, wird der Code in default ausgeführt.
```cpp
switch (Variablennamen) {
    case Bedingung:
        // Anweisung 1
        break;
    default:
        // Anweisung 2
        break;
}
```
## Schleifen

### C++
#### Für
Was ist For? For ist eine Schleife, die ausgeführt wird, wenn die Bedingung erfüllt ist.
```cpp
for (init; Bedingung; Inkrement) {
   Anweisung(en); 
}
```
#### während
Was ist While? While ist eine Schleife, die ausgeführt wird, wenn die Bedingung erfüllt ist.
```cpp
while (Bedingung) {
    // Anweisung
}
```
#### Do während
Was ist Do while? Do while ist eine Schleife, die ausgeführt wird, wenn die Bedingung erfüllt ist.
```cpp
do {
    // Anweisung
} while (Bedingung);
```

