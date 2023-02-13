#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a; 
    int b;
    int c;

            std::cout << "Inserisci primo numero\n";
            std::cin >> a;

             std::cout << "inserisci secondo numero\n";
             std::cin >> b;

            std::cout << "inserisci terzo numero\n";
            std::cin >> c;

        if (b > a && b < c ){

        cout << "B è compreso tra A e C\n";
    }
        else {

        cout << "Errore\n";
    }
    
}