#include <stdlib.h>
#include <stdio.h>

#define NB_BILLES_MAX 100
// Définition du nbre de billes max.


typedef struct {
        int x,y;
    } POSITION;
// Définition Type POSITION

typedef struct {
        int rg;
        POSITION pos;
        } BULLE;
// Définition Type BULLE

typedef struct {
        POSITION pos,dir,futur;
        } BILLE;
// Définition Type BILLE

typedef struct {
        int nbr;
        BILLE* tab[NB_BILLES_MAX];
         }ENSBILLES;
// Définition Type ENSBILLES








// fonction deplacerBilles

ENSBILLES deplacerBilles(ENSBILLES tabBilles){
int i; //variable locale i
int x,y;
for(i=k;k=>0;i--){

    if(BIlLE k==dehors)
    supprimer(BILLE.k);
    // dehors et supprimer() à définir

    if((BILLE.futur K==x,y)&&(estPresentBulle(i,j)==VRAI)) {
        // Définition d'une fonction à valeurs booléennes estPresentBulle
        if (BULLE.rg==-1) // redéfinir la sélection de la bulle considérée
            supprimer(BILLE K);
        if (BULLE.rg==0){
            creerBille(); //meme position, direction BILLE K
            supprimer (BILLE K);}
        if(BULLE.rg==1)
            {supprimer(BILLE K);
            BULLE.rg=-1
            creer4(); }// à définir
        if(BULLE.rg>1)
            BULLE.rg-=;
            supprimer(BILLE K); }

}
}



}


