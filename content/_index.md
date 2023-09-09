---
title: "Installieren"
date: 2023-09-02T11:48:37+02:00
draft: false
type: "page"
menu: 
  main:
    name: "Installieren"
    weight: 1
    
---

## Was ist G++?
G++ ist ein Compiler für die Programmiersprache C++. Er ist Teil des GNU-Projekts und wird von der Free Software Foundation entwickelt. G++ ist ein Frontend zum GCC und kann auch andere Programmiersprachen wie C, Objective-C, Fortran und Ada übersetzen. G++ ist ein Bestandteil der meisten Linux-Distributionen und wird auch für andere Betriebssysteme wie Windows, Mac OS X und Solaris angeboten.

### Installation bei Ubuntu
G++ ist in den offiziellen Paketquellen von Ubuntu enthalten und kann mit folgendem Befehl installiert werden:
```bash
sudo apt install g++
```
## Was ist build-essential bei Ubuntu?
Build-essential ist ein Metapaket, das viele der grundlegenden Tools zum Kompilieren von Software enthält. Dieses Paket enthält auch die Referenzinformationen für die C-Bibliothek, die in allen C-Programmen verwendet wird, sowie die Header-Dateien, die benötigt werden, um diese Bibliothek zu kompilieren.
### Installation bei Ubuntu
```bash
sudo apt-get install build-essential
```
## Was ist CMake?
Cmake ist ein plattformunabhängiges Build-System. Es ist ein Open-Source-Projekt, das von Kitware entwickelt wurde. CMake ist eine Familie von Tools, die die Erstellung, Tests und Paketierung von Software vereinfachen. 

### Installation bei Ubuntu
```bash
sudo apt-get install cmake
```

## Was ist Git?
Git ist ein freies und Open-Source-Verteiltes Versionskontrollsystem. Es wurde 2005 von Linus Torvalds entwickelt. Git ist ein verteiltes Versionskontrollsystem, das es einem Entwickler ermöglicht, die vollständige Versionsgeschichte eines Projekts zu verfolgen. Jeder Entwickler hat eine vollständige Kopie des Versionsverlaufs des Projekts auf seinem lokalen Computer. Die Entwickler können dann Änderungen an ihrem lokalen Repository vornehmen und diese Änderungen in das zentrale Repository hochladen. 

### Installation bei Ubuntu
```bash
sudo apt-get install git
```

## Was ist Doxygen?
Doxygen ist ein Dokumentationsgenerator, der aus Kommentaren im Quellcode eine Dokumentation erstellt. Doxygen ist ein Open-Source-Projekt, das von Dimitri van Heesch entwickelt wurde. 

### Installation bei Ubuntu
```bash
sudo apt-get install doxygen
```
## Was ist Graphviz?
Graphviz ist ein Open-Source-Projekt, das von AT&T Labs Research entwickelt wurde. Es ist ein Paket von Software-Tools, die zur Visualisierung von Graphen verwendet werden. 

### Installation bei Ubuntu
```bash
sudo apt-get install graphviz
```
## Was ist Gdb?

Gdb ist ein Open-Source-Projekt, das von der Free Software Foundation entwickelt wurde. Es ist ein Debugger für C, C++, Objective-C, Fortran und Ada. Gdb ist ein plattformübergreifendes Tool, das auf den meisten Unix- und Windows-Systemen ausgeführt werden kann.

### Installation bei Ubuntu
```bash
sudo apt-get install gdb
```

## Was ist Valgrind?

Valgrind ist ein Open-Source-Projekt, das von der Free Software Foundation entwickelt wurde. Es ist ein Werkzeug zum Auffinden von Speicherfehlern und Lecks in C- und C++-Programmen. Valgrind ist ein plattformübergreifendes Tool, das auf den meisten Unix- und Windows-Systemen ausgeführt werden kann.

### Installation bei Ubuntu
```bash
sudo apt-get install valgrind
```

## Was ist das cppcheck?

Cppcheck ist ein Open-Source-Projekt, das von Daniel Marjamäki entwickelt wurde. Es ist ein statischer Code-Analysator für C und C++-Code. Cppcheck ist ein plattformübergreifendes Tool, das auf den meisten Unix- und Windows-Systemen ausgeführt werden kann.

### Installation bei Ubuntu
```bash
sudo apt-get install cppcheck
```
## Was ist das gcov?
Gcov ist ein Open-Source-Projekt, das von der Free Software Foundation entwickelt wurde. Es ist ein Werkzeug zum Testen von C- und C++-Code. Gcov ist ein plattformübergreifendes Tool, das auf den meisten Unix- und Windows-Systemen ausgeführt werden kann.
## Was ist das c++filt?
C++filt ist ein Open-Source-Projekt, das von der Free Software Foundation entwickelt wurde. Es ist ein Werkzeug zum Dekodieren von C++-Symbolen. C++filt ist ein plattformübergreifendes Tool, das auf den meisten Unix- und Windows-Systemen ausgeführt werden kann.

### Installation bei Ubuntu
```bash
sudo apt-get install c++filt
```
## ctest
ctest ist ein Open-Source-Projekt, das von der Free Software Foundation entwickelt wurde. Es ist ein Werkzeug zum Testen von C- und C++-Code. Ctest ist ein plattformübergreifendes Tool, das auf den meisten Unix- und Windows-Systemen ausgeführt werden kann.

### Installation bei Ubuntu
```bash
sudo apt-get install ctest
```
### Gtest
Gtest ist ein Open-Source-Projekt, das von der Free Software Foundation entwickelt wurde. Es ist ein Werkzeug zum Testen von C- und C++-Code. Gtest ist ein plattformübergreifendes Tool, das auf den meisten Unix- und Windows-Systemen ausgeführt werden kann.

### Installation bei Ubuntu
```bash
git clone https://github.com/google/googletest.git
cd googletest
mkdir build
cd build
cmake ..
make
sudo make install
```







