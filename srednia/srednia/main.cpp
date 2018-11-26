#include <iostream>

using namespace std;
float ostatniawczytana = 1, suma, counter = 0, wynik;

void randomowafunkcja()
    {
    cin >> ostatniawczytana;
    if (!ostatniawczytana == 0)
        {
        counter++;
        }
    suma = suma + ostatniawczytana;

    }

int main()
{
    cout << "Witam serdecznie, prosze podac liczby, z ktorych ma zostac obliczona srednia arytmetyczna, wpisz 0 aby nie dodawac wiecej liczb" << endl;
    while (!ostatniawczytana == 0)
    {
        randomowafunkcja();
        cout << "Suma wynosi: " << suma << endl;
    }
    wynik = suma/counter;
    cout << "Srednia arytmetyczna z podanych liczb wynosci: " << wynik;

}
