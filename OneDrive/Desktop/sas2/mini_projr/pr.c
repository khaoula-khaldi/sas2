#include <stdio.h>
#include <string.h>

char titres[100][100];
char auteurs[100][100];
float prix[100];
int quantite[100];
int n=0;
 
void AjouteLivre() {
    int nb;
    printf("Veuillez entrer le nombre de livres à ajouter : ");
    scanf("%d", &nb);

    for (int i = n; i < n+nb; i++) {
        printf("Titre : ");
        scanf("%s", titres[i]);
        printf("Auteur : ");
        scanf("%s", auteurs[i]);
        printf("Prix : ");
        scanf("%f", &prix[i]);
        printf("Quantité : ");
        scanf("%d", &quantite[i]);
    }
    n += nb;
}

void afficheToutLivre() {
    if (n == 0) {
        printf("Aucun livre disponible.\n");
        
    }else{
    
       printf("Voici les livres disponibles :\n");
       for (int i = 0; i < n; i++) {
           printf("Titre: %s    Auteur: %s   Prix: %.2f  | Quantité: %d\n",
               titres[i], auteurs[i], prix[i], quantite[i]);
       }
    }   
    printf("\nTotal de livres enregistrés : %d\n", n);
}

void RechercheLivreTitre() {
    char titreR[100];
    int trouvee=0;
    printf("Entrez le titre que vous recherchez : ");
    scanf("%s", titreR);

    for (int i = 0; i < n; i++) {
        if (strcmp(titreR, titres[i]) == 0) {
            printf("Livre trouvé : %s | Auteur: %s | Prix: %.2f | Quantité: %d\n",
                   titres[i], auteurs[i], prix[i], quantite[i]);
         trouvee=1;
         break;
        
        }
    } 
    
    if (!trouvee){
        printf("le livre nest pas trouvee!!");
    }
    
}   
void MettreAJour() {
    char titre_mis[100];
    int  trouvee=0;
    printf("Entrer le titre du livre à mettre à jour : ");
    scanf("%s", titre_mis);

    for (int i = 0; i < n; i++) {
        if (strcmp(titre_mis, titres[i]) == 0) {
            int nouveaux;
            printf("Entrer la nouvelle quantité : ");
            scanf("%d", &nouveaux);
            quantite[i] = nouveaux;
            printf("Quantité mise à jour avec succès !\n");
            trouvee=1;
        }
    }
    if(!trouvee){
        printf("ce livre nest pas etait dans le stok" );
    }
}    
void SupprimerLivre() {
    char titre_s[100];
    printf("Entrer le titre du livre à supprimer : ");
    scanf("%s", titre_s);
    int trouvee=0;
    for (int i = 0; i < n; i++) {
        if (strcmp(titre_s, titres[i]) == 0) {
            for (int j = i; j < n - 1; j++) {
                strcpy(titres[j], titres[j+1]);
                strcpy(auteurs[j], auteurs[j+1]);
                prix[j] = prix[j+1];
                quantite[j] = quantite[j+1];
            }
            n--;
            printf("Livre supprimé avec succès.\n");
            trouvee=1;
        }
    }
    if(!trouvee){
         printf("Livre non trouvé.\n");
    }     
}

void AfficherNombreTotal() {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += quantite[i];
    }
    printf("Nombre total de livres disponibles : %d\n", total);
}

int main() 
{
    int choix;

    while (1) {
        printf("\n================================\n");
        printf("     GESTIONNAIRE DE LIVRES     \n");
        printf("================================\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre à jour la quantité\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le total des livres\n");
        printf("7. Sortir\n");
        printf("================================\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: AjouteLivre(); break;
            case 2: afficheToutLivre(); break;
            case 3: RechercheLivreTitre(); break;
            case 4: MettreAJour(); break;
            case 5: SupprimerLivre(); break;
            case 6: AfficherNombreTotal(); break;
            case 7:
                printf("Merci d'avoir utilisé notre système. Au revoir!\n");
                return 0;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
    }
}