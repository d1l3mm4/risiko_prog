#include "strutt_dati.h"
#include <iostream>

using namespace std;

#define GAMERS battlefield.num_players


//info battlefield;

int const total_states = 42;

/** serve per creare la lista rappresentante i giocatori */
players * head = NULL;


/** riempo i campi relativi ai giocatori (nome stati ecc..) */
void define_players()
{
    for(int c=0; c<GAMERS; c++)
    {
        players * elem = new players;

        players * temp = head;
        players * prec;

        cout << "Inserire il nome del giocatore " << c+1 << ":" << endl;
            cin >> elem->name_player;

        elem->color = c; /** al colore 0 e' assegnato il rosso,
                           * all' 1 il blu, al 2 il giallo e al 3 il verde */


        /** il numero di stati è suddiviso equamente tra i giocatori,
         * se sono in 4 avanzano 2 stati che saranno assegnati
         * casualmente a 2 giocatori */
        elem->my_state = total_states / GAMERS;


        // 10 stati più 20 da disporre
        if(GAMERS == 4) elem->my_units = 30;

            // 25 carri da disporre più il numero di stati
            else if(GAMERS == 3) elem->my_units = 39;

                // numero stati più 30 carri da disporre
                else elem->my_units = 51;


        // con \0 indico che non si possiede ancora nessuna carta
        elem->card[0] = '\0';


         while(temp != 0) // porto il puntatore in fondo alla lista
         {
            prec = temp;

            temp = temp->pun;
         }

         if(head == 0) head = elem; /* se la testa era gi�  a zero
                                     * mi basta inserire il nuovo elemento */

         else prec->pun = elem; // inserisco l'elemento in coda
    }
}


/** stampo la lista */
/*
void stamp_list()
{
    players * p = head;

    for(int c=0; c<GAMERS; c++)
    {
        cout << "nome giocatore:\n" << p->name_player << endl;

        cout << "colore:\n" << p->color << endl;

        cout << "numero stati:\n" << p->my_state << endl;

        cout << "numero unita':\n" << p->my_units << endl;

        cout << "il turno del giocatore:\n" << p->turn << endl;

        cout << endl;

        p = p->pun;
    }
}*/
