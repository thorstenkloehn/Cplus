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
Vektoren können mit mehreren Wertzuweisungen erstellt werden.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
```
## Vektor Elementen ausgeben
Vektoren können mit einer for Schleife ausgegeben werden.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
for (auto init : Variablenname) // Für jedes Element im Vektor schleife durchlaufen
{
    std::cout << init; // Gibt das Element aus
}
```
## Vektor Data Methode
Vektoren data() Methode gibt den Zeiger auf das erste Element des Vektors zurück.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::cout << Variablenname.data(); // Gibt den Zeiger auf das erste Element des Vektors zurück
```
## Vektor Beginn Methode
Verktoren begin() Methode gibt den Zeiger auf das erste Element des Vektors zurück.
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::cout << Variablenname.begin(); // Gibt den Zeiger auf das erste Element des Vektors zurück aus
```
## Vektor End Methode
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::cout << Variablenname.end(); // Gibt den Zeiger auf das letzte Element des Vektors zurück
```
## Vektor Front Methode
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::cout << Variablenname.front(); // Gibt den Wert des ersten Elements des Vektors zurück aus
```
## Vektor Back Methode
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::cout << Variablenname.back(); // Gibt den Wert des letzten Elements des Vektors zurück aus
```
## Vektor Aufsteigen Sortieren 
```c++
#include <vector> // Vektor Bibliothek
#include <algorithm> // Sortier Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::sort(Variablenname.begin(), Variablenname.end()); // Sortiert den Vektor aufsteigend
```
## Vektor Absteigend Sortieren 
```c++
#include <vector> // Vektor Bibliothek
#include <algorithm> // Sortier Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::sort(Variablenname.begin(), Variablenname.end(), std::greater<Datentyp>()); // Sortiert den Vektor absteigend
```
## Vektor Aufsteigen Sortieren  Funktion
```c++
#include <vector> // Vektor Bibliothek
#include <algorithm> // Sortier Bibliothek
bool Funktion(Datentyp a, Datentyp b) // Funktion für Sortierung
{
    return a < b; // Sortiert aufsteigend
}
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::sort(Variablenname.begin(), Variablenname.end(), Funktion); // Sortiert den Vektor aufsteigend
```
## Vektor Absteigend Sortieren  Funktion
```c++
#include <vector> // Vektor Bibliothek
#include <algorithm> // Sortier Bibliothek
bool Funktion(Datentyp a, Datentyp b) // Funktion für Sortierung
{
    return a > b; // Sortiert absteigend
}
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
std::sort(Variablenname.begin(), Variablenname.end(), Funktion); // Sortiert den Vektor absteigend
```
## Vektor löscht Element Methode
Erase löscht ein Element aus dem Vektor.
```c++
#include <vector> // Vektor Bibliothek
#include <algorithm> // Sortier Bibliothek
std::vector<Datentyp>Variablenname{Wert1, Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
Variablenname.erase(Variablenname.begin() + 1); // Löscht das zweite Element aus dem Vektor
```
## Vektor löscht Elemente Methode 
Remove löscht ein Element aus dem Vektor.
```c++
#include <vector> // Vektor Bibliothek
#include <algorithm> // Sortier Bibliothek
std::vector<Datentyp>Variablenname{Wert1,Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
Variablenname.erase(std::remove(Variablenname.begin(), Variablenname.end(),1)); // Löscht alle Elemente mit dem Wert 1 aus dem Vektor
```
## Vektor Range schleife copy
```c++
#include <vector> // Vektor Bibliothek
std::vector<Datentyp>Variablenname{Wert1,Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
for (auto init : Variablenname) // Für jedes Element im Vektor schleife durchlaufen
{
    init; // Gibt das Element aus
}
```
## Vektor Range schleife mit Referenz
```c++
#include <vector> // Vektor Bibliothek

std::vector<Datentyp>Variablenname{Wert1,Wert2, Wert3}; // Vektor erstellen mit mehreren Wertzuweisungen von 3 Elementen
for (auto& init : Variablenname) // Für jedes Element im Vektor schleife durchlaufen
{
    init; // Gibt das Element aus
}
```
## Datentyp mit einem anderen Namen verknüpft. In C Form 
typedef ist ein Schlüsselwort, das einen Datentyp mit einem anderen Namen verknüpft.
```c++
#include <vector> // Vektor Bibliothek
typedef std::vector<Datentyp> Vektorname;// Datentyp mit einem anderen Namen verknüpft. In C Form 
```

## using Datentyp mit einem anderen Namen verknüpft. In C++ Form 
```c++
#include <vector> // Vektor Bibliothek
using Vektorname = std::vector<Datentyp>; // Datentyp mit einem anderen Namen verknüpft. In C++ Form 
```
















