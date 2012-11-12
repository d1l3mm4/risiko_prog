#ifndef MAPPA_H
#define MAPPA_H

/** è il numero di righe assegnate all' array "map" */
const int map_lines = 3;

/** è il numero di colonne assegnate alla matrice "map" */
const int col_map = 42;

/** Rappresenta le righe della matrice adjacency,
  * 42 è il numero totale degli stati */
const int lines_adjacency = 42;

/** Rappresenta le colonne della matrice adjacency, 8 è il numero di
  * adiacenze massime ( solo la cina lo raggiunge ) */
const int col_adjacency = 8;

/** in questa funzione è stato inserito nell' array adjacency il valore degli
  * stati adiacenti allo stato rappresentato dal numero della riga dell' array
  * ( per esempio allo stato "0" sono adiacenti lo stato 1, 2, 34.
  * è stato inserito il valore 70 nel fondo di ogni riga per segnalare che non
  * vi sono altri stati adiacenti a quello preso in considerazione */
const int total_states = 42;

/** Nella riga 0 della matrice map vi star�  il numero del giocatore
  * (nonche il colore), nella riga 1 della matrice il valore numerico
  * di ogni stato nella riga 2 della matrice il numero di carri presenti
  * nello stato nella matrice adjacency vengono salvate tutte le adiacenze
  * tra i vari stati*/
struct info
{
 int map[map_lines][col_map];
 int adjacency[lines_adjacency][col_adjacency];
 int num_players;
};

info battlefield;

/** Ogni giocatore può avere al massimo 20 carte (5 sono le carte massime
  * che un giocatore può mantenere normalmente, ma bisogna sommarci le carte
  * ottenute dagli eventuali giocatori sconfitti ).
  * Il gioco obbliga ad utilizzare un tris se si hanno 5 p più carte. */
const int cell_card = 20;

/** Rappresenta il numero di celle assegnate all' "array name" */
const int cell_name = 20;

struct players
{
 char name_player[cell_name]; /**< Nome del giocatore */
 char card[cell_card]; /**< Carte possedute dal giocatore */
 int color;    /**< Il colore è rappresentato da un numero  che è lo stesso
                * che rappresenta il numero del giocatore */
 int my_state; /**< Tengo il conto degli stati appartenenti al giocatore */
 int my_units; /**< Tengo il conto dei carri armati del giocatore */
 int turn; /**< Rappresenta il giocatore che inizia per primo */
 int conquest;
 players * pun;
};


#endif // MAPPA_H
