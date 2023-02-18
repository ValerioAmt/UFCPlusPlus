#include <iostream>
#include <string>

using namespace std;

bool ciSonoDoppie(string ottagono)
{
   for (int i = 0; i < ottagono.length(); i++)
   {
      if (ottagono[i] == ottagono[i + 1])
      {
         return true;
      }
      else
      {
         return false;
      }
   }
}
int main()
{
 // per richiamare funzione non serve dichiarare stringa nel main
 //se dovessi usare stringa ottagono per un'operazione 
   ciSonoDoppie("parola");
   cout << ciSonoDoppie("parola");
}