#include <iostream>
#include <string>

using namespace std;

string parolaPiuLunga = "";
string nuovaParola;
string trovaParolaLunga()
{
      for (int i = 0; i < 10; i++)
      {
            cout << "inserisci una parola" << endl;
            cin >> nuovaParola;
            if (nuovaParola > parolaPiuLunga)
            {
                  parolaPiuLunga = nuovaParola;
            }
      }
      cout << "la parola inserità con piu caratteri è " << parolaPiuLunga << "\n";
          return trovaParolaLunga;
}

int main(){

     string trovaParolaLunga()
}