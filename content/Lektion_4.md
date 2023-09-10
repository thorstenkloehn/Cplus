---
title: "Lektion 4"
date: 2023-09-07T01:29:29+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Lektion 4"
    weight: 5
    
---

# Lektion 4

## CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.5) #  gibt die minimale Version an. Mindestens 3.5

project(Thorsten) #  gibt den Namen des Projekts an.Mein Projekt heißt Thorsten

add_executable(start main.cpp) #   gibt den Namen der ausführbaren Datei an. Meine ausführbare Datei heißt start. Die Datei wird aus der Datei main.cpp erstellt.

```

## mehrer Ordner
  ```cmake
cmake_minimum_required(VERSION 3.5) #  gibt die minimale Version an. Mindestens 3.5
project(Thorsten) #  gibt den Namen des Projekts an.Mein Projekt heißt Thorsten
add_executable(start main.cpp) #   gibt den Namen der ausführbaren Datei an. Meine ausführbare Datei heißt start. Die Datei wird aus der Datei main.cpp erstellt.
add_subdirectory(lib) #  gibt an, dass es einen Unterordner gibt, der lib heißt. In diesem Ordner befindet sich eine weitere CMakeLists.txt Datei.
```
### CMakeLists.txt im Unterordner lib
  ```cmake
  target_include_directories(thorsten PRIVATE .) #  gibt an, dass der Ordner, in dem sich die Datei CMakeLists.txt befindet, als Include-Verzeichnis hinzugefügt wird.
  target_sources(thorsten PRIVATE lib.cpp) #  gibt an, dass die Datei lib.cpp hinzugefügt wird.
  ```

### Konstanten in C++
```cpp
const Datentype Variablenname = Wert; //  Konstante a mit dem Wert 5
```
### Konstanten in Funktionen
Konstanten in Funktionen sind Variablen, die nicht verändert werden können. Sie werden mit dem Schlüsselwort const deklariert.
```cpp
Rückabetyp   Funktionname(const Datentype Variablenname)
{
  return Variablenname;
}
```
### Constexpr Variablen
 Constexpr Variablen sind Konstanten, die zur Compilezeit berechnet werden. Sie werden mit dem Schlüsselwort constexpr deklariert.
```cpp
constexpr Datentype Variablenname = Wert; //  ____ Variablen sind Konstanten, die zur Compilezeit berechnet werden. Sie werden mit dem Schlüsselwort ____ deklariert.

```

### ctest
ctest ist ein Programm, das die Tests ausführt, die mit CMake erstellt wurden. Es wird automatisch erstellt, wenn CMake ausgeführt wird. Es kann mit dem Befehl make test ausgeführt werden.
```cmake
enable_testing() #  gibt an, dass Tests aktiviert werden sollen.

```
### Statische Variablen
Statische Variablen sind Variablen, die nur in der Funktion, in der sie deklariert wurden, sichtbar sind. Sie werden mit dem Schlüsselwort static deklariert.
```cpp
static datentype variablenname;
```
### C++ Casting
C++ Casting ist eine Möglichkeit, Variablen von einem Datentyp in einen anderen Datentyp umzuwandeln. Es gibt 4 Arten von C++ Casting:
```cpp
static_cast<datentype>(variablenname); //  wandelt eine Variable in einen anderen Datentyp um. Es kann nur zwischen Datentypen umgewandelt werden, die miteinander kompatibel sind.
```
### Auto Variablen
Auto Variablen sind Variablen, deren Datentyp automatisch ermittelt wird. Sie werden mit dem Schlüsselwort auto deklariert.
```cpp
auto variablenname = wert; //  ____ Variablen sind Variablen, deren Datentyp automatisch ermittelt wird. Sie werden mit dem Schlüsselwort ____ deklariert.
```

### Uniform Initialization
Uniform Initialization ist eine Möglichkeit, Variablen zu initialisieren. Sie wird mit geschweiften Klammern {} durchgeführt.
```cpp
auto variablenname = {wert}; //  ____ Initialization ist eine Möglichkeit, Variablen zu initialisieren. Sie wird mit geschweiften Klammern {} durchgeführt.
```









