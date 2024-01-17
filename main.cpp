#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <sstream>
#include <cmath>
using namespace std;

void longueurMOT(){
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

}

int suiteReelle(){
    double nombre;
    double nouvNombre = 0;
    nombre = 1;
    double limite = 0;
    while(limite<0.00001){
        nouvNombre = sqrt(nombre+2);
        limite = nouvNombre - nombre;
        nombre = nouvNombre;
    }
    return nouvNombre;
    
}

void affichageSR(){
    double limite = suiteReelle();
    cout<<"La limite de cette suite recurrente est: "<< limite<<endl;

}

int main(){
    longueurMOT();
    affichageSR();
    
    return 0;
}