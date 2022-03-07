
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numer_pesel[] = {0,1,2,4,1,0,0,7,0,5,9}; //  tablica
    selectionSort(numer_pesel); // funkcja z tablica
    for(int i = 0;i < 11 ;i++) {
        printf("%d",numer_pesel[i]); // wywo�uje wszystkie elementy z tablicy
    }}
    void selectionSort(int tablica[]) { // funkcja z argumentem
        for(int i = 0;i<10;i++) { //rozmiar tablicy to 10 bo 11 ju� jest posortowany
    int min = i;
        for(int i2 = i+1; i2<11;i2++) { //tablica ma 11 elementow
    if(tablica[min] > tablica[i2]) {
                    min = i2;
                }}
    int temp = tablica[i];//  tymczasowe
            tablica[i] = tablica[min]; // najmniejszy element na pierwsza pozycje
                tablica[min] = temp; // zapisujemy poprzedni element do najmniejszego i koniec :)
        }}
