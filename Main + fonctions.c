#include <stdlib.h>
#include <stdio.h>

#define NB_BILLES_MAX 100
// D�finition du nbre de billes max.


typedef struct {
        int x,y;
    } POSITION;
// D�finition Type POSITION

typedef struct {
        int rg;
        POSITION pos;
        } BULLE;
// D�finition Type BULLE

typedef struct {
        POSITION pos,dir,futur;
        } BILLE;
// D�finition Type BILLE

typedef struct {
        int nbr;
        BILLE* tab[NB_BILLES_MAX];
         }ENSBILLES;
// D�finition Type ENSBILLES








// fonction deplacerBilles

ENSBILLES deplacerBilles(ENSBILLES tabBilles){
int i; //variable locale i
int x,y;
for(i=k;k=>0;i--){

    if(BIlLE k==dehors)
    supprimer(BILLE.k);
    // dehors et supprimer() � d�finir

    if((BILLE.futur K==x,y)&&(estPresentBulle(i,j)==VRAI)) {
        // D�finition d'une fonction � valeurs bool�ennes estPresentBulle
        if (BULLE.rg==-1) // red�finir la s�lection de la bulle consid�r�e
            supprimer(BILLE K);
        if (BULLE.rg==0){
            creerBille(); //meme position, direction BILLE K
            supprimer (BILLE K);}
        if(BULLE.rg==1)
            {supprimer(BILLE K);
            BULLE.rg=-1
            creer4(); }// � d�finir
        if(BULLE.rg>1)
            BULLE.rg-=;
            supprimer(BILLE K); }

}
}



}


