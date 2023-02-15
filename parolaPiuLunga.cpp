#include <iostream>
#include <string>

using namespace std;

int main(){

string parolaPiuLunga "";
string nuovaParola;

for (int i = 0; i < 10; i++){
      cout << "inserisci una parola" << endl;
      cin >> nuovaParola;
      if(nuovaParola > parolaPiuLunga){
          nuovaParola = parolaPiuLunga;
      }
}
      cout << "la parola inserità con piu caratteri è" << parolaPiuLunga;


}