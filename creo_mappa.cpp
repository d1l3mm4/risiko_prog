#include "strutt_dati.h"
#include <iostream>


/** oggetto di tipo struttura contente le informazione relative al
  * campo di battaglia ( adiacenze tra i vari stati, il numero di carri presenti
  * in ogni stato e il relativo proprietario ) */
//extern info battlefield;

//info battlefield;


/** in questa funzione è stato inserito nell' array adjacency il valore degli
  * stati adiacenti allo stato rappresentato dal numero della riga dell' array
  * ( per esempio allo stato "0" sono adiacenti lo stato 1, 2, 34.
  * è stato inserito il valore 70 nel fondo di ogni riga per segnalare che non
  * vi sono altri stati adiacenti a quello preso in considerazione */

const int total_states = 42;


/** stamp la mappa *//*
void stamp_map()
{
    cout << "proprietari: ";
    for(int c=0; c<total_states; c++) cout << battlefield.map[0][c] << " ";
    cout << endl;

    cout << "num stati  : ";
    for(int c=0; c<total_states; c++) cout << battlefield.map[1][c] << " ";
    cout << endl;

    cout << "num carri  : ";
    for(int c=0; c<total_states; c++) cout << battlefield.map[2][c] << " ";
    cout << endl;
}

*/
void map_adjacency()
{
 battlefield.adjacency[0][0] = 1;
 battlefield.adjacency[0][1] = 2;
 battlefield.adjacency[0][2] = 34;
 battlefield.adjacency[0][3] = 70;

 battlefield.adjacency[1][0] = 0;
 battlefield.adjacency[1][1] = 2;
 battlefield.adjacency[1][2] = 3;
 battlefield.adjacency[1][3] = 4;
 battlefield.adjacency[1][4] = 70;

 battlefield.adjacency[2][0] = 1;
 battlefield.adjacency[2][1] = 4;
 battlefield.adjacency[2][2] = 13;
 battlefield.adjacency[2][3] = 70;

 battlefield.adjacency[3][0] = 0;
 battlefield.adjacency[3][1] = 1;
 battlefield.adjacency[3][2] = 4;
 battlefield.adjacency[3][3] = 6;
 battlefield.adjacency[3][4] = 70;

 battlefield.adjacency[4][0] = 1;
 battlefield.adjacency[4][1] = 2;
 battlefield.adjacency[4][2] = 5;
 battlefield.adjacency[4][3] = 6;
 battlefield.adjacency[4][4] = 7;
 battlefield.adjacency[4][5] = 70;

 battlefield.adjacency[5][0] = 4;
 battlefield.adjacency[5][1] = 7;
 battlefield.adjacency[5][2] = 70;

 battlefield.adjacency[6][0] = 3;
 battlefield.adjacency[6][1] = 4;
 battlefield.adjacency[6][2] = 7;
 battlefield.adjacency[6][3] = 8;
 battlefield.adjacency[6][4] = 70;

 battlefield.adjacency[7][0] = 4;
 battlefield.adjacency[7][1] = 5;
 battlefield.adjacency[7][2] = 6;
 battlefield.adjacency[7][3] = 8;
 battlefield.adjacency[7][4] = 70;

 battlefield.adjacency[8][0] = 6;
 battlefield.adjacency[8][1] = 7;
 battlefield.adjacency[8][2] = 70;

 battlefield.adjacency[9][0] = 8;
 battlefield.adjacency[9][1] = 10;
 battlefield.adjacency[9][2] = 11;
 battlefield.adjacency[9][3] = 70;

 battlefield.adjacency[10][0] = 9;
 battlefield.adjacency[10][1] = 11;
 battlefield.adjacency[10][2] = 12;
 battlefield.adjacency[10][3] = 70;

 battlefield.adjacency[11][0] = 9;
 battlefield.adjacency[11][1] = 10;
 battlefield.adjacency[11][2] = 12;
 battlefield.adjacency[11][3] = 70;

 battlefield.adjacency[12][0] = 10;
 battlefield.adjacency[12][1] = 11;
 battlefield.adjacency[12][2] = 70;

 battlefield.adjacency[13][0] = 2;
 battlefield.adjacency[13][1] = 14;
 battlefield.adjacency[13][2] = 15;
 battlefield.adjacency[13][3] = 70;

 battlefield.adjacency[14][0] = 13;
 battlefield.adjacency[14][1] = 15;
 battlefield.adjacency[14][2] = 16;
 battlefield.adjacency[14][3] = 17;
 battlefield.adjacency[14][4] = 70;

 battlefield.adjacency[15][0] = 13;
 battlefield.adjacency[15][1] = 14;
 battlefield.adjacency[15][2] = 16;
 battlefield.adjacency[15][3] = 19;
 battlefield.adjacency[15][4] = 70;

 battlefield.adjacency[16][0] = 14;
 battlefield.adjacency[16][1] = 15;
 battlefield.adjacency[16][2] = 17;
 battlefield.adjacency[16][3] = 18;
 battlefield.adjacency[16][4] = 19;
 battlefield.adjacency[16][5] = 70;

 battlefield.adjacency[17][0] = 14;
 battlefield.adjacency[17][1] = 16;
 battlefield.adjacency[17][2] = 18;
 battlefield.adjacency[17][3] = 20;
 battlefield.adjacency[17][4] = 70;

 battlefield.adjacency[18][0] = 16;
 battlefield.adjacency[18][1] = 17;
 battlefield.adjacency[18][2] = 19;
 battlefield.adjacency[18][3] = 20;
 battlefield.adjacency[18][4] = 21;
 battlefield.adjacency[18][5] = 28;
 battlefield.adjacency[18][6] = 70;

 battlefield.adjacency[19][0] = 15;
 battlefield.adjacency[19][1] = 16;
 battlefield.adjacency[19][2] = 18;
 battlefield.adjacency[19][3] = 26;
 battlefield.adjacency[19][4] = 27;
 battlefield.adjacency[19][5] = 28;
 battlefield.adjacency[19][6] = 70;

 battlefield.adjacency[20][0] = 10;
 battlefield.adjacency[20][1] = 17;
 battlefield.adjacency[20][2] = 18;
 battlefield.adjacency[20][3] = 21;
 battlefield.adjacency[20][4] = 22;
 battlefield.adjacency[20][5] = 23;
 battlefield.adjacency[20][6] = 70;

 battlefield.adjacency[21][0] = 18;
 battlefield.adjacency[21][1] = 20;
 battlefield.adjacency[21][2] = 23;
 battlefield.adjacency[21][3] = 28;
 battlefield.adjacency[21][4] = 70;

 battlefield.adjacency[22][0] = 20;
 battlefield.adjacency[22][1] = 23;
 battlefield.adjacency[22][2] = 24;
 battlefield.adjacency[22][3] = 70;

 battlefield.adjacency[23][0] = 20;
 battlefield.adjacency[23][1] = 21;
 battlefield.adjacency[23][2] = 22;
 battlefield.adjacency[23][3] = 24;
 battlefield.adjacency[23][4] = 25;
 battlefield.adjacency[23][5] = 70;

 battlefield.adjacency[24][0] = 22;
 battlefield.adjacency[24][1] = 23;
 battlefield.adjacency[24][2] = 25;
 battlefield.adjacency[24][3] = 70;

 battlefield.adjacency[25][0] = 23;
 battlefield.adjacency[25][1] = 24;
 battlefield.adjacency[25][2] = 70;

 battlefield.adjacency[26][0] = 19;
 battlefield.adjacency[26][1] = 27;
 battlefield.adjacency[26][2] = 31;
 battlefield.adjacency[26][3] = 36;
 battlefield.adjacency[26][4] = 70;

 battlefield.adjacency[27][0] = 19;
 battlefield.adjacency[27][1] = 26;
 battlefield.adjacency[27][2] = 28;
 battlefield.adjacency[27][3] = 31;
 battlefield.adjacency[27][4] = 70;

 battlefield.adjacency[28][0] = 18;
 battlefield.adjacency[28][1] = 19;
 battlefield.adjacency[28][2] = 21;
 battlefield.adjacency[28][3] = 27;
 battlefield.adjacency[28][4] = 29;
 battlefield.adjacency[28][5] = 31;
 battlefield.adjacency[28][6] = 70;

 battlefield.adjacency[29][0] = 28;
 battlefield.adjacency[29][1] = 30;
 battlefield.adjacency[29][2] = 70;

 battlefield.adjacency[30][0] = 29;
 battlefield.adjacency[30][1] = 31;
 battlefield.adjacency[30][2] = 38;
 battlefield.adjacency[30][2] = 70;

 battlefield.adjacency[31][0] = 26;
 battlefield.adjacency[31][1] = 27;
 battlefield.adjacency[31][2] = 28;
 battlefield.adjacency[31][3] = 29;
 battlefield.adjacency[31][4] = 30;
 battlefield.adjacency[31][5] = 32;
 battlefield.adjacency[31][6] = 36;
 battlefield.adjacency[31][7] = 70;

 battlefield.adjacency[32][0] = 31;
 battlefield.adjacency[32][1] = 33;
 battlefield.adjacency[32][2] = 34;
 battlefield.adjacency[32][3] = 37;
 battlefield.adjacency[32][4] = 70;

 battlefield.adjacency[33][0] = 32;
 battlefield.adjacency[33][1] = 34;
 battlefield.adjacency[33][2] = 70;

 battlefield.adjacency[34][0] = 0;
 battlefield.adjacency[34][1] = 32;
 battlefield.adjacency[34][2] = 33;
 battlefield.adjacency[34][3] = 35;
 battlefield.adjacency[34][4] = 37;
 battlefield.adjacency[34][5] = 70;

 battlefield.adjacency[35][0] = 34;
 battlefield.adjacency[35][1] = 36;
 battlefield.adjacency[35][2] = 37;
 battlefield.adjacency[35][3] = 70;

 battlefield.adjacency[36][0] = 26;
 battlefield.adjacency[36][1] = 31;
 battlefield.adjacency[36][2] = 32;
 battlefield.adjacency[36][3] = 35;
 battlefield.adjacency[36][4] = 37;
 battlefield.adjacency[36][5] = 70;

 battlefield.adjacency[37][0] = 32;
 battlefield.adjacency[37][1] = 34;
 battlefield.adjacency[37][2] = 35;
 battlefield.adjacency[37][3] = 36;
 battlefield.adjacency[37][4] = 70;

 battlefield.adjacency[38][0] = 30;
 battlefield.adjacency[38][1] = 39;
 battlefield.adjacency[38][2] = 40;
 battlefield.adjacency[38][3] = 70;

 battlefield.adjacency[39][0] = 38;
 battlefield.adjacency[39][1] = 40;
 battlefield.adjacency[39][2] = 41;
 battlefield.adjacency[39][3] = 70;

 battlefield.adjacency[40][0] = 38;
 battlefield.adjacency[40][1] = 39;
 battlefield.adjacency[40][2] = 41;
 battlefield.adjacency[40][3] = 70;

 battlefield.adjacency[41][0] = 39;
 battlefield.adjacency[41][1] = 40;
 battlefield.adjacency[41][2] = 70;
}

#define GAMERS battlefield.num_players

//int const total_states = 42;

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

        //cout << "Inserire il nome del giocatore " << c+1 << ":" << endl;
          //  cin >> elem->name_player;

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
