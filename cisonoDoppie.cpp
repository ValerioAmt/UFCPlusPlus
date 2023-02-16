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

   ciSonoDoppie("parola");
}