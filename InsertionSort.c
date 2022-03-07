#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {3,7,3,12,8,4,23,1,9,11,5,24,5,5,6}; //  tablica
    insertionSort(tablica); // wywolanie funkcji z nasza tablica
        for(int i = 0;i < 15 ;i++)
        {
        printf("%3d",tablica[i]); // petla wypisuje wszystkie elementy tablicy
    }}
    void insertionSort(int tab[]) { // deklaracja funkcji z argumentem
for(int i = 1; i < 15;i++) { // inkrementacja bez pierwszego
    int temp = tab[i]; // zapisywanie drugiego elementu
        int j = i - 1; // inicjacja zmiennnej
            while(j>=0 && tab[j] > temp) { //sprawdzamy czy elementy z pierwszego sa wieksze od drugiego
                    tab[j+1] = tab[j]; // przypisanie nastepnego elementu
                    j--; // dekrementacja zmiennej j
                    tab[j+1] = temp; // przeskoczenie w prawo
            }}}
