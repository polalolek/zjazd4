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

    int najw = c[0];
    for (int i = 0; i < a; i++)
    {
        if (c[i] > najw)
        {
            najw = c[i];
        }
    }
    std::cout << "Najwieksza wartosc z tablicy wynosi: " << najw << "\n";
    return 0;
}