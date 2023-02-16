#include <iostream>
#include <string>
// bool cerca stringa(string parola, char c)
using namespace std;
// devo cercare il carattere c nella stringa " parola "


bool cerca(string ciaone, char bomba)
{                                             // vedo se c = p poi se c = h ecc.
    for (int i = 0; i < ciaone.length(); i++) // for i=p(arola) i < parol(a)                                 //creo contatore i++
    {
        if (ciaone[i] == bomba){              //lello ; e
                                                     
             cout << "carattere = " << ciaone[i] << " trovato alla posizione numero [" << i + 1 << "] della stringa [" << ciaone <<"]" <<endl;
             return true;                      //appena trovo char uguale ad un char della stringa chiudo la funzione e ritorno true
        }
       
    }
        cout << "non ci sono caratteri corrispondenti\n";
       return false;  
}  
int main(){

cerca("pizza", 'z');
}