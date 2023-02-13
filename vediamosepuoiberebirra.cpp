#include <iostream>
#include <string>
using namespace std;

int main()
{
    int anni;

    std::cout << " Quanti hanni hai?\n";
    std::cin >> anni;

    if (anni >= 18)
    {
        cout << "Cheers, prendi la tua birra!\n";
    }
    else
    {
        cout << "Mi dispiace, niente birra. Sei troppo giovane!\n";
    }
}