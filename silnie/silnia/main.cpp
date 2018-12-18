#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double wynik = 1;
    int a;

    cout << "podaj liczbe" << endl;
    cin >> a;

    for (int i = 1; i<=a;i++)
        wynik *= i;

    cout << wynik << endl;
    return(0);
}
