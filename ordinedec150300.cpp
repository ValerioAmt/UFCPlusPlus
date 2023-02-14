#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main(){
 int i = 300; 
 int num = 0;

    for(int i = 300;i >= 150; i--){
        num = num + i;
      if(num & 3 == 0){
       cout << num;
      }      
      
     
    }
}