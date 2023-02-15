#include <iostream>
#include <string>

using namespace std;

int main(){

string parolaPiuLunga = "";
string nuovaParola;

for (int i = 0; i < 10; i++){
      cout << "inserisci una parola" << endl;
      cin >> nuovaParola;
      if(nuovaParola > parolaPiuLunga){
          parolaPiuLunga = nuovaParola;
      }
}
      cout << "la parola inserità con piu caratteri è " << parolaPiuLunga << "\n";
        return 0;
}z