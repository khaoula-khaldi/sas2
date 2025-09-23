//challeng 1


// 
#include <stdio.h>

int main() {
    float revenu;
    int score_de_credit;
    int duree_du_pret;
    printf(" entrez le revenu annuel ");
    scanf("%f",&revenu);
    printf(" entrez le scorde de credit  ");
    scanf("%d",&score_de_credit);
    printf(" entrez la duree du pert  ");
    scanf("%d",&duree_du_pret);
    if (revenu >= 30000 && score_de_credit >= 700 && duree_du_pret <= 10){
        printf ("vout etes eligible pour le pret \n");
    }else if (revenu >= 30000 && score_de_credit >= 650 && duree_du_pret <= 15){
        printf("vout etes eligible pour le pret avec des condittion \n");
    }else{
        printf("tu n est pas eligible");
    }
    

    return 0;
}