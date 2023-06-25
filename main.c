//
//  main.c
//  symetricke_cislo
//
//Navrhněte funkci sloužící k testování, zda je dekadický zápis zadaného přirozeného čísla symetrický (tj. stejný při čtení zleva i zprava).

//Program dostane na vstupu posloupnost přirozených čísel ukončenou 0, která do posloupnosti nepatří. Každý prvek posloupnosti bude na jednom řádku. Na výstup vypíše ta čísla ze vstupní posloupnosti, jejichž zápis je symetrický. Čísla na výstupu budou oddělená mezerou.

//Pokud vstupní číslo obsahuje na konci nuly, pak symetrický zápis nemá. Všechna čísla se vejdou do 32-bitového integeru.
//  Created by Natálie Smolíková on 21.10.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int porovnani  (char* number, int delka)
    {
        int j = 0;
        
        for (j; j <=delka/2;j++)
            { if (number[j] != number[delka-j - 1])
                    return 0;
                
            }
        return 1;
    }

char* nacti(int* delka)
{   char vstup;
    int i = 0, pom = 1, j = 0;
    char *number = malloc(12);

   
    
   while((vstup = getchar()) >= 48 && vstup <= 57)
   {
       number[i] = vstup;
       i+=1;
   }

    number[i] = '\0';
    *delka = i;
    return number;
        
}

int main()
{
    int pom = 1, delka_s;
   
 
    while (pom)
    {
        char* number = nacti(&delka_s);
        if (number[0] == 48) pom = 0;
        
        else
        {
        if (porovnani(number, delka_s) == 1)
             printf("%s ", number);
    
        }
        
        
    }
}
