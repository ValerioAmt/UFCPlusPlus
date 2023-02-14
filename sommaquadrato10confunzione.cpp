#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
int totale = 0;
int x = 0;
   
     while (x<=10){
      totale = totale + (x*x); 
      x ++;
     }
     cout << totale << endl;
}