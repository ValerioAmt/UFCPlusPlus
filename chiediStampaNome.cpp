#include <iostream>
#include <string>

using namespace std; //    creo funzione stampa nome
int main(){
string nome;
string cognome;
cout << "Qual'è il tuo nome?\n";
cin >> nome;

cout << " Qual'è il tuo cognome?\n";
cin >> cognome;

   cout << "Ciao [" << nome + "] ["  + cognome + "]" <<endl;
}