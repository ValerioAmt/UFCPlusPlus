#include <iostream>
#include <string>

using namespace std;

int main()
{

    int rif = 0;
    int max = 0;

    for (int i = 0; i <= 10; i++)
    {
        cout << "Inserisci  numero" << endl;
        cin >> rif;
        if (rif > max)
            max = rif;
    }
    cout << "il numero maggiore inserito è :" << max << endl;
}