#include <iostream>

#include "Human.h"

using namespace std;

void Muzi();
void Taku();
void Matthew();
void Rourke();
void Hloni();

int main() {
    Muzi();
    Taku();
    Matthew();
    Rourke();
    Hloni();
    return 0;
}

void Muzi() {

}

void Taku() {

}

void Matthew() {
    Human * h1 = new Human("human1", 50, "Leader");
    Human * h2 = new Human("human2", 60, "Pilot");
    Human * h3 = new Human("human3", 70, "Engineer");
    Human * h4 = new Human("human4", 80, "Scientist");
    Human * h5 = new Human("human5", 90, "Doctor");

    HumanCollection c = new HumanCollection();
}

void Rourke() {

}

void Hloni() {

}