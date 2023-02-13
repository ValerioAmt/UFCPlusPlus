#include <iostream>
#include <string>

using namespace std;

int main()
{
    // richiedo stringa in "nome"

    string nome;
    string riga ="+--------"; //preparo stinga che costruirà il + e gli 8 trattini statici del lato superiore
    // chiedo di inserire il nome
    cout << "Come ti chiami?\n";
    cin >> nome; /* inserisco il valore inserito dentro "nome". 
                     Come vado avanti?
                 */
    int lunghezza;             // creo un valore lunghezza
    lunghezza = nome.length(); // il suo valore sarà uguale alla lunghezza del nome
    //riga1
   

       for (int i = 0; i < lunghezza; i++)
    {
          riga += "-";
    }
        cout <<  riga + "+\n";
     //riga2
      
        cout <<"|    " + nome + "    |\n";
        //riga3
        cout <<  riga + "+\n";

    
}
   
/*
     std::cout <<" +------------*" << std::endl ;
     std::cout <<" | " << nome   << "    |" << std::endl ;
     std::cout <<" +-----------+" << std::endl ;


 cout << "+---------+\n";   // parto da 8 trattini standard, 4 da un lato e quattro dall'altro. (mettendo nome al centro) 8 trattini 2 "+" = 10 caratteri

 cout << "|    p    |\n";   //divido gli spazi (4 e 4)
 cout << "+---------+\n";   //aggiungo un trattino

 */
