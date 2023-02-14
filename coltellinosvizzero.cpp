#include <iostream>
#include <math.h>

using namespace std;
/*
// stampa tabellina
int i = 1;
int tabellina = 0;
int x = 0;

void stampaTabellina(int x)
{
    for (int i == 1;i <= 10; i++)
    {
        tabellina = i * x;

        cout << tabellina;
    }
}
    int main()
    {
        stampaTabellina(5);
    }


   int max = 0;

   int piuGrande(int x, int y){
           if (x > y){
              max = x;
           }
              else{
               max = y;
              return max;
              }
   }
    */
int anni;
void buttaFuori(int eta)
{
    
    if (anni >= 18)
    {
        cout << "Prego, puoi entrare";
    }  
        else
        {
            cout << "Mi dispiace, sei troppo giovane";
        }
    }


int main()
{
    buttaFuori(22);
    return 0;
}