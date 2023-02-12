/*
* Compiler: https://www.onlinegdb.com/
* Author: Andrea Emili, andrea.emili@outlook.com/
* Date: 2023/01/13
* Version: 0.01
*/

/*Questo è un commento*/

// Questo è un commento


#include <iostream> /*Questa è una liberia di default del linguaggio (https://learn.microsoft.com/it-it/cpp/standard-library/iostream?view=msvc-170) */

/*
* con main si vuole indicare la funzione principale del programma
*/
int main()
{
    /*Dichiarazione Variabili*/
    int a, b, somma;
    /*Inizializzazione */
    a = 0;
    b = 0;
    somma = 0;
    
    /*Inserimento primo numero*/
    std::cout << "inserisci il primo numero \n"; /*Funzione di output*/
    std::cin >> a; /*Funzione di lettura*/
    
    /*Inserimento secondo numero*/
    std::cout << "inserisci il secondo numero \n"; /*Funzione di output*/
    std::cin >> b;  /*Funzione di input*/      
    
    /*Assegnazione*/
    somma = a+b;
    
    /*Output risultato*/
    std::cout << "La somma e': " << somma;

    while (1);
}/*end main*/