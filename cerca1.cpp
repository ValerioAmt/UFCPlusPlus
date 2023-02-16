#include <iostream>
#include <string>
// bool cerca stringa(string parola, char c)
using namespace std;
// devo cercare il carattere c nella stringa " parola "

bool cerca(string frase, char carattere)
{                                            // vedo se c = p poi se c = h ecc.
    for (int i = 0; i < frase.length(); i++) // for i=p(arola) i < parol(a)                                 //creo contatore i++
    {
        if (frase[i] == carattere)
        { // frase = pizza; carattere = z

            cout << "Sono stati trovati caratteri corrispondenti. Il carattere è: " << carattere << endl;
            return true; // appena trovo char uguale ad un char della stringa chiudo la funzione e ritorno true
        }
    }
    cout << "non ci sono caratteri corrispondenti\n";
    return false;
}
int main()
{

    cerca("pizza", 'z');
}