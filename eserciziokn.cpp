#include <iostream>

using namespace std;
int main (){

int n;
int k = 0;
int somma = 0;
cout << "Inserisci un numero\n";
cin >> n;
    while (somma <= n){
         k++;
         somma = somma + k;
    }  


 cout << "il massimo intero K per cui la somma dei primi k interi minore e uguale a N è " << k - 1 <<endl;

}