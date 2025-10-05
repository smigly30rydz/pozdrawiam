#include <stdio.h>
#include <stdlib.h>


int main(void) {

    /*
    int suma,roznica,mnozenie;
    int liczba1=0;
    printf("podaj 1 liczbe: \n");
    scanf("%d",&liczba1);

    int liczba2=0;
    printf("podaj 2 liczbe: \n");
    scanf("%d",&liczba2);


    printf("suma wynosi: %d \n roznica wynosi: %d \n mnozenie: %d \n ", suma= liczba1 + liczba2, roznica= liczba1 - liczba2, mnozenie= liczba1 * liczba2);
    */

    /*
    int godz,min,sec;
    printf("podaj godzine w formacie HH:MM:SS \n");
    scanf(" %d:%d:%d", &godz, &min, &sec);
    int okej = (godz * 60 * 60) + (min * 60) + (sec);
    int suma = 0;

    suma += okej % 10;
    okej = okej / 10;

    suma += okej % 10;
    okej = okej / 10;

    suma += okej % 10;
    okej = okej / 10;

    suma += okej % 10;
    okej = okej / 10;

    suma += okej % 10;
    okej = okej / 10;

    printf("do godziny 00:00:00 minelo %d sekund \n suma z %d liczb wynosi: %d ",(godz * 60 * 60) + (min * 60) + (sec) ,(godz * 60 * 60) + (min * 60) + (sec) , suma);
    */

    float pob=0;
    float wysyl=0;
    printf("podaj predkosc pobierania w (Mbit/s):");
    scanf(" %.2f", &pob);
    printf("podaj predkosc wysylania w (Mbit/s):");
    scanf(" %.2f", &wysyl);
    int czas_p = 500 / (pob / 8);

    printf("%f , %f ", pob, wysyl);
    printf("czas pobierania : %f ",);
    wkitam


    return 0;
}