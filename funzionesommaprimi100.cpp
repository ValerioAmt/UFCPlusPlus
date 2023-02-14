#include <iostream>
using namespace std;

//input x
//algoritmo

//Situazione 1

int calcolaSomma(int x){
int sum = 0
   for (int i = 0; i <= x; i++){

    sum = sum + i;
   }
 return sum;
}

//Situazione 2
void stampaSomma(int x){
    int sum = 0;
    for (int i = 0; i <= x; i++){
       sum = sum + i;

    }
   cout << sum << endl;
}


   int main(){
      //situazione 1
      int risultato = calcolaSomma(100);
      cout << risultato << endl;
       //sitauzione 2
       stampaSomma(100);
return 0;
   }