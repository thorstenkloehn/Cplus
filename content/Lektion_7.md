---
title: "Lektion 7"
date: 2023-09-29T13:58:31+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Lektion 7"
    weight: 9
    
---
# Lektion 7
## Vektoren in C++
Verktoren sind dynamische Arrays. Sie können beliebig erweitert werden.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl); // Vektor erstellen
```
## Vektoren in C++ mit Wertzuweisung

```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert}; // Vektor erstellen
```
## Vektoren in C++ mit Wertzuweisung und Anzahl

```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl, Wert); // Vektor erstellen
```

## Vektor länge ausgeben
Vektoren haben eine Länge. Diese kann mit der Funktion size() ausgegeben werden.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl, Wert); // Vektor erstellen
Variablenname.size(); // Gibt die Anzahl der Elemente im Vektor zurück
```
## Vektor Kapazität
Vektoren haben eine Kapazität. Diese kann mit der Funktion capacity() ausgegeben werden.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl, Wert); // Vektor erstellen
Variablenname.capacity(); // Gibt die Kapazität des Vektors zurück
```
## Vektor leer ist
Vektoren können mit der Funktion empty() auf leer überprüft werden.

```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl,Wert); // Vektor erstellen mit Anzahl und Wert
Variablenname.empty(); // Gibt true zurück wenn der Vektor leer ist
```
## Vektor reserviert Speicher in Elementen
Vektoren können mit der Funktion reserve() Speicher reservieren.

```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl,Wert); // Vektor erstellen mit Anzahl und Wert
Variablenname.reserve(Anzahl); // Reserviert Speicher für Anzahl Elemente
```
## Leert den Vektor
Vektoren können mit der Funktion clear() geleert werden.

```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl,Wert); // Vektor erstellen mit Anzahl und Wert
Variablenname.clear(); // Leert den Vektor
```
Reduziert die Kapazität auf die Anzahl der Elemente.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl,Wert); // Vektor erstellen mit Anzahl und Wert
Variablenname.shrink_to_fit(); // Reduziert die Kapazität auf die Anzahl der Elemente
```
## Vektor Elemente hinzufügen
Vektoren können mit der Funktion push_back() Elemente hinzugefügt werden.

```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl,Wert); // Vektor erstellen mit Anzahl und Wert
Variablenname.push_back(Wert); // Fügt ein Element am Ende des Vektors hinzu
```
## Vektor Elemente entfernen
Vektoren können mit der Funktion pop_back() Elemente entfernt werden.

```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname(Anzahl,Wert); // Vektor erstellen mit Anzahl und Wert
Variablenname.pop_back(); // Entfernt das letzte Element des Vektors
```
## Vektor Elemente mehrer Wertzuweisungen
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
```

