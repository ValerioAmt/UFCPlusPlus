#include <iostream>
#include <string>

using namespace std;

string nome;
string cognome;
string nomeCognome(){
cout << "Come ti chiami?\n";
cin >> nome;
cout <<"Ed il tuo cognome?\n";
cin >> cognome;
cout <<"Ciao," << nome + " " << cognome <<"\n";
}

int main(){

nomeCognome();

}
