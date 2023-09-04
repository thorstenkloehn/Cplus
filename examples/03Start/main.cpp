#include <iostream>
#include <ncurses.h>

int main() {
    char eingabe;
    std::cout << "Bitte geben Sie Ihren Tastatur ein: ";

    initscr(); // Initialisieren von ncurses
    cbreak(); // Zeilenpufferung deaktivieren
    noecho(); // Eingabeaufforderung deaktivieren

    while (true) {
        eingabe = getch(); // Zeichen einlesen
        if (eingabe != ERR) { // Überprüfen, ob eine Taste gedrückt wurde
            break;
        }
    }

    endwin(); // Beenden von ncurses

    std::cout << "Eingabe: " << eingabe << std::endl;
    return 0;
}