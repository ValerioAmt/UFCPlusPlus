#include <iostream>
#include <string>

using namespace std;
string nome;
bool ciSonoDoppie(){
   for(int i = 0;i < nome.lenght ;i ++)
     if (nome[i] == nome[i+1]){
         return true;
     }
     else {
        return false;
     }


}

int main(){
    
     ciSonoDoppie();

}