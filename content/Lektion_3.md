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







