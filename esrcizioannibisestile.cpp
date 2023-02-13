#include <iostream>

int main()
{

    int anno;

    std::cout << "Inserisci un anno per vedere se è bisestile";
    std::cin >> anno;

    if (anno % 4 == 0 or anno % 400 == 0)
        std::cout << " L'anno inserito è bisestile";
    else if (anno % 100 != 0)
    {
        std::cout << "L'anno inserito non è bisestile";
    }
    else
    {
        std::cout << "L'anno inserito non è bisestile";
    }
}