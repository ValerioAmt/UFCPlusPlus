#include <iostream>
#include <string>
// l'utente deve inserire 10 volte una parola
using namespace std;
// non faremo 10 inserimenti ma useremo un ciclo di for per i < 10
int main()
{
    string parolaMax;
    string nuovaParola;
    int lunghezzaParola ;
    for (int i = 0; i < 3; i++)
    {
        cout << "Inserisci una parola!\n";
        cin >> nuovaParola;
        if (nuovaParola.length() > parolaMax.length())
        {
            parolaMax = nuovaParola;
           
           
        } // se la parola inserita è piu grande della maggiore parola
    }
    // i sarà il nostro contatore
    cout << "La parola piu lunga inserita è :\n" << parolaMax << endl;
}