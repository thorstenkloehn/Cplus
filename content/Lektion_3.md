---
title: "Lektion 3"
date: 2023-09-04T06:46:39+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Lektion 3"
    weight: 4
    
---
# Lektion 3
## Streams in C++
Streams sind eine Reihe von Daten, die sequentiell verarbeitet werden. In C++ gibt es zwei Arten von Streams: Eingabestreams und Ausgabestreams.

### Sequentiell verarbeitete Daten
Sequentiell verarbeitete Daten sind Daten, die nacheinander verarbeitet werden. Das bedeutet, dass die Daten in der Reihenfolge verarbeitet werden, in der sie eingegeben wurden.

### Eingabestreams
Ein Eingabestream liest Daten aus einer Quelle, z. B. einer Datei, und stellt sie dem Programm zur Verfügung. Die Quelle kann auch ein Gerät sein, z. B. die Tastatur oder der Bildschirm.

### Ausgabestreams
Ein Ausgabestream schreibt Daten in eine Quelle, z. B. eine Datei. Die Quelle kann auch ein Gerät sein, z. B. die Tastatur oder der Bildschirm.
### Funktion in C++
Eine Funktion ist eine Gruppe von Anweisungen, die eine Aufgabe erfüllen. Eine Funktion kann einen Wert zurückgeben. Wenn eine Funktion einen Wert zurückgibt, wird der Wert als Rückgabewert bezeichnet.

### Headrdateien für Funktion erstellen
#### CMakelists.txt
```cmake
cmake_minimum_required(VERSION 3.5)
project(start)
add_executable(start main.cpp Game.cpp)
include_directories(.)
```
#### Game.h
```cpp
void game();
```
#### Game.cpp
```cpp
#include <Game.h>
#include <iostream>
void game() {
    std::cout << "Game is running!" << std::endl;
}
```
#### main.cpp
```cpp
#include <Game.h>
int main() {
    game();
}
```
### Include Guards
Include Guards verhindern, dass Headerdateien mehrmals in ein Programm eingefügt werden. Dies kann zu Fehlern führen. Include Guards sind Makros, die den Inhalt einer Headerdatei nur einmal in ein Programm einfügen.

### Include Guards erstellen
#### Game.h
```cpp
#ifndef GAME_H
#define GAME_H
void game();
#endif
```
### Funktionen overladen

Funktionen können in C++ überladen werden. Das bedeutet, dass Sie mehrere Funktionen mit demselben Namen erstellen können, solange sich die Parameter unterscheiden.

### Funktionen overladen erstellen
#### Game.h
```cpp
#include <iostream>

void print(int x) {
    std::cout << "The integer is: " << x << std::endl;
}

void print(double x) {
    std::cout << "The double is: " << x << std::endl;
}

int main() {
    print(42);
    print(3.14);
    return 0;
}
```

### Template Funktionen
Template Funktionen sind Funktionen, die mit verschiedenen Datentypen verwendet werden können. Sie können eine Template Funktion erstellen, indem Sie den Datentyp durch einen Platzhalter ersetzen.

### Template Funktionen erstellen

```cpp
template <typename T>
T max(T arr[], int size) {
    T max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int main() {
    int int_arr[] = {1, 2, 3, 4, 5};
    double double_arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Max value in int_arr: " << max(int_arr, 5) << std::endl;
    std::cout << "Max value in double_arr: " << max(double_arr, 5) << std::endl;
    return 0;
}
```   
## Funkrionen in C++
```cpp
Rückgabetyp Funktionsname(Parameterliste) {
    Funktionskörper
}
```

### Rückgabetyp
Der Rückgabetyp ist der Datentyp des Werts, den die Funktion zurückgibt. Wenn die Funktion keinen Wert zurückgibt, ist der Rückgabetyp void.

### Funktionsname
Der Funktionsname ist der Name der Funktion. Der Funktionsname wird verwendet, um die Funktion aufzurufen.

### Parameterliste
Die Parameterliste ist eine Liste von Parametern, die der Funktion übergeben werden. Die Parameterliste kann leer sein.

### Funktionskörper
Der Funktionskörper ist der Code, der ausgeführt wird, wenn die Funktion aufgerufen wird.

## Was ist function
Eine Funktion ist eine Gruppe von Anweisungen, die eine Aufgabe erfüllen. Eine Funktion kann einen Wert zurückgeben. Wenn eine Funktion einen Wert zurückgibt, wird der Wert als Rückgabewert bezeichnet.

## Was ist Template Funktion

Template Funktionen sind Funktionen, die mit verschiedenen Datentypen verwendet werden können. Sie können eine Template Funktion erstellen, indem Sie den Datentyp durch einen Platzhalter ersetzen.
```cpp
template <typename T>
T Funktionsname(Parameterliste) {
    Funktionskörper
}
```

## Was Klassentyp
Der Klassentyp ist der Datentyp, der durch einen Platzhalter ersetzt wird. Der Klassentyp kann ein beliebiger Datentyp sein, z. B. int, double oder char.















