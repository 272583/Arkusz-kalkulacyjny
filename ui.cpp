#include <iostream>
#include <vector>
#include "Table.h"

void ui(){
    void Choice() {
        system("CLS");
        int choice;
        std::cout << "Co chcesz zrobić: " << std::endl;
        std::cout << "1. Wyświetl tabele." << std::endl;
        std::cout << "2. Dodaj wartości" << std::endl;
        std::cout << "3. Wykonaj działanie." << std::endl;
        std::cin >> choice;
        switch(choice){
            case 1: drawTable(TABLE); break;
            case 2: addValue(); break;
            case 3: math(); break;
            default: "wybierz poprawna opcje!" Choice(); break;
        }
    }
    Choice();

}


void drawTable(std::vector<std::vector<Field<int>>>){

}

void addValue(){

}

void math(){
    void Choice(){
        system("CLS");
        int choice;
        std::cout << "Jakie działanie chcesz wykonać" << std::endl;
        std::cout << "1. Dodawanie" << std::endl;
        std::cout << "2. Odejmowanie" << std::endl;
        std::cout << "3. Mnożenie" << std::endl;
        std::cout << "4. Dzielenie" << std::endl;
        std::cin >> choice;
        switch(choice){
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            default: "wybierz poprawna opcje!" Choice(); break;
        }
    }
}

void addition(){

}