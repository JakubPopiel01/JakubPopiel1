#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {1,2,3,5,3,9,2,5,3,2,4,9,1,2,5}; // tablica
    bubbleSort(tablica); // wywolanie funkcji z tablica
        for(int i = 0;i < 15 ;i++) {
        printf("%d",tablica[i]); // petla wypisuje wszystkie elementy z tablicy
    }}
    void bubbleSort(int tab[]) { // deklaracja funkcji z argumentem
        for(int i=0; i<14;i++) { // 14, nie 15 bo ostatni element juz jest posortowany
    for(int j=0;j<14-i;j++) {
        if(tab[j]>tab[j+1]) { // sprawdzanie czy pierwszy element jest wiekszy niz drugi
                    int temp = tab[j]; // przypisanie do zmiennej temp
                    tab[j] = tab[j+1]; // zmiana wartosci z nastepnym
                    tab[j+1] = temp; // zamiana kolejnego na temp
                }}}}
