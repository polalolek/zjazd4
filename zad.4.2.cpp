#include <iostream>

int main()
{
    std::cout << "Program do wyznaczania najwiekszej liczby z tablicy:) \n";
    int a;
    std::cout << "Podaj liczbe elementow tablicy: \n";
    std::cin >> a;
    int c[a];

    std::cout << "\n";

    std::cout << "A teraz wpisz wartosci dla " << a << " elementow: \n";

    for (int i = 0; i < a; i++)
    {
        std::cin >> c[i];
    }

    std::cout << "\n";

    for (int i = 0; i < a; i++)
    {
        std::cout << c[i] << "\n";
    }

    std::cout << "\n";

    int najcz;
    int ilosc;
    int max;
    for (int i = 0; i < a; i++)
    {
        ilosc = 0;
        for (int j = 0; j < a; j++)
        {
            if (c[j] == c[i])
            {
                ilosc++;
            }
        }
        if (ilosc > max)
        {
            max = ilosc;
            najcz = c[i];
        }
    }
    std::cout << "Najczesciej wypisana wartosc z tablicy wynosi: " << najcz << "\n";
    return 0;
}