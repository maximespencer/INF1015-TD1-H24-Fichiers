#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <sstream>
using namespace std;


int main(){
    string phrase;
    cout << "Saisissez une phrase : ";
    getline(cin, phrase);
    istringstream stream(phrase);
    string mot;
    string motPlusCourt, motPlusLong;
    size_t longueurMotPlusCourt = string::npos;
    double longueurMotPlusLong,longueurMoyenne,nbMots = 0.0;
    while(stream>>mot){
        if (mot.length()>longueurMotPlusLong){
            motPlusLong = mot;
            longueurMotPlusLong = mot.length();
        }

        if (mot.length() < longueurMotPlusCourt) {
            motPlusCourt = mot;
            longueurMotPlusCourt = mot.length();
       
        }
        longueurMoyenne += mot.length();
        nbMots++;
    }   

    if (nbMots > 0) {
        longueurMoyenne /= nbMots;
    }
    cout << "Le mot le plus court est : " << motPlusCourt << endl;
    cout << "Le mot le plus long est : " << motPlusLong << endl;
    cout << "La longueur moyenne est : " << longueurMoyenne << " lettres" << endl;

    double U0 = 1;
    double nombre;
    double nouvNombre;
    while((nouvNombre-nombre)){
        
    }

}