---
title: "Lektion 6"
date: 2023-09-26T11:24:20+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Lektion 6"
    weight: 8
    
---

# Lektion 6
## Aufzählungen in C++

```c++
enum Aufzählungsname{Winter ,Frühling, Sommer, Herbst}; // Winter, Frühling, Sommer, Herbst //Aufzählungen in C++
```

## Aufzählungen in C++ mit Wertzuweisung

```c++
enum Aufzählungsname{Winter=1,Frühling=2,Sommer=3,Herbst=4}; // // Winter, Frühling, Sommer, Herbst Wertzuweisung
```
## Strukturen in C++ erstellen

```c++
struct Strukturname{ // Strukturen in C++
    Datentyp Variablenname; 
};
``` 
##  Aufzählung nur in der Klasse gültig ist
enum class ist eine Aufzählung die nur in der Klasse gültig ist. 
```c++
enum class Aufzählungsname{Winter ,Frühling, Sommer, Herbst}; // Winter, Frühling, Sommer, Herbst //Aufzählungen in C++
```

### namespace
namespace ist ein Bereich in dem Variablen und Funktionen definiert werden können.
```c++
namespace name{

}












