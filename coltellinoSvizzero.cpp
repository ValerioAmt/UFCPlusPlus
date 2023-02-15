#include <iostream>
#include <math.h>

using namespace std;

   //funzione che stamperà la tabellina del numero inseritò
   //chiede intero in input
   //non restituisce nulla
void stampaTabellina(int x)

{
    int tabellina = 0;

    for (int i = 1; i <= 10; i++)
    {
        tabellina = i * x;

        cout << tabellina << " ";
    }
}

   //Funzione che dati due numeri interi in input restiuisce un intero.
   //avrà in input due interi
   //restituisce un intero
int piuGrande(int x, int y)
{
    int max;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    return max;
}
   //Funzione che calcolera se sei maggiorenne o no
   //riceve in input un intero
   //non restituisce nulla
void buttaFuori(int eta)
{

    if (eta >= 18)
    {
        cout << "Prego, puoi entrare " << endl;
    }
    else
    {
        cout << "Mi dispiace, sei troppo giovane" << endl;
    }
}
   //funzione che dati tre numeri interi li ordinerà in ordine decrescente
   //avrà in input tre numeri interi
   //non restituisce niente
void decrescente(int a, int b, int c)
{
    minore = a;
    if (minore > b && b > c)
        cout << c << b << a;
    else if (minore < b && b > c)
    {
        cout << a << b << c;
    }
}

    //Funzione che stamperà il nome inserito sotto forma di stringa
    //chiede in input una stringa
    //non restituisce nulla
void stampaNome(string nome){

          cout<< "Il tuo nome è"<<nome <<endl  ;

      }
    //Funzione che calcolerà se l'anno inserito è bisestile
    //avrà in input un intero anno
    //restituirà un boolean
bool bisestile(int anno)
{
    if (anno % 4 == 0 && anno % 400 == 0)
    {
        return true;
        cout << "L'hanno inserito è bisestile";
    }
    else if (anno % 100 != 0)
    {
        return false;
        cout << "l'hanno inserito non è bisestile";
    }
    else
    {
        return false;
        cout << "L'hanno inserito non è bisestile";
    }
}
    //funzione che calcolerà un equazione di secondo grado
    //chiederà in input 3 interi a, b, c.
    //non restituisce nulla.
void equazione(int a, int b, int c)
{
    double x1, x2;
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "l'equazione non ha soluzioni reali";
        << endl;
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (+b + sqrt(delta)) / (2 * a);
    }
    cout << "l'equazione presenta due soluzioni   " << x1 << "e" << x2;
}
     //Funzione che riceve in input un intero e non restituisce nulla.
     //funzione che riceve in input un intero
     //funzione che restiruisce un boolean
bool isEven(int x)
{

    int resto = 0;
    if (resto % 2 == 0)
    {
        cout << x << "  è pari\n";
    }
    else
    {
        return x << "è dispari\n";
    }
}

    //Funzione che calcola un numero b se compreso tra a e c
    //avra in input
    //restituirà un boolean
bool isBeetwen(int a, int b, int c){
    if (b < a && b > c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

    //funzione che stampa la tabellina di n per m volte
    //riceverà in input 2 interi
    //non restituisce niente
void stampaTabelline(int n, int m)
{

    int tabellina = 0;

    for (int i = 1; i <= m; i++)
    {
        tabellina = i * n;

        cout << tabellina << " ";
    }
}

   // funzione che calcola il costo totale dati interessi e prezzo d'acquisto.
   // riceve in input un double ed un intero.
   // restituisce un double
double costoTotale(double prezzo, int interesse)
{
    cout << "inserisci il prezzo del prodotto";
    cin >> prezzo;

    cout << "inserisci il tasso di interesse";
    cin >> interesse;

    double totale = prezzo * interesse;
    return totale;
}

int main()
{
    /* Prova funzione tabellina
    stampaTabellina(12);
*/
    /*
           // Prova funzione tabellina
          stampaTabelline(3,5);
      */
    // Prova bisestile
    //  bisestile(2023);
    // Prova isBeetwen
    // isBeetwenn(25,56,5);

    //   double costoTotale(23.5, 5);
}
