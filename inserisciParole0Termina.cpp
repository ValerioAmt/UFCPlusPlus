#include <iostream>
#include <string>

using namespace std;

bool ciSonoDoppie(string parola)
 for (i = 0; i = new.lenght(); i++) { // creo una funzione che mi stabilisce se ci sono caratteri ripetuti nella parola
        if (parola[i] == parola[i+1]{
    return true;
        }
        return false; 
 }
  int main(){
    string parola;
    bool doppie = false;
    cout << "Inserisci una nuova parola." << endl;
    cin >> parola;
    while (parola != 0){
        if (ciSonoDoppie(parola) == true)
        {
            doppie = true;
            cout << "inserisci una nuova parola";
            cin >> parola;
        }
            cout << doppie;
    }
            





  }                                                //inserisci parole(quando parola inserita = "0" esci.)