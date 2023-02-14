#include <iostream>
#include <string>

using namespace std;

int main(){
    
int rif = 0;
int max = 0;

int i = 0; 


cout << "Inserisci  numero" << endl;
    cin >> rif; 
   for(int i ; i <= 10;i++ ){
      
       if (rif > max)
             max += rif;
     }
         cout << "il numero maggiore inserito è :" << max;
}