#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[100];
    char adresse_email[100];
    char tele[11];
} contact;

contact pers[100];
int count = 0;

void ajouter() {
    int n;
    printf("Entre le nombre de contacts à ajouter : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Entrer le nom : ");
        scanf(" %[^\n]", pers[count].nom);

        printf("Entrer l'adresse email : ");
        scanf(" %[^\n]", pers[count].adresse_email);

        do {
            printf("Entrer le numéro de téléphone (10 chiffres, commence par 0) : ");
            scanf("%s", pers[count].tele);
        } while (strlen(pers[count].tele) != 10 || pers[count].tele[0] != '0');

        count++;
    }
}

void modifier() {
    char nomr[100];
    char Madresse_email[100];
    char Mtele[100];
    int trouve = 0;

    if (count == 0) {
        printf("Aucun contact disponible !\n");
        return;
    }

    printf("Veuillez entrer le nom du contact à modifier : ");
    scanf(" %[^\n]", nomr);

    for (int i = 0; i < count; i++) {
        if (strcmp(pers[i].nom, nomr) == 0) {
            printf("Entrer la nouvelle adresse email : ");
            scanf(" %[^\n]", Madresse_email);
            strcpy(pers[i].adresse_email, Madresse_email);

            do {
                printf("Entrer le nouveau numéro de téléphone (10 chiffres, commence par 0) : ");
                scanf("%s", Mtele);
            } while (strlen(Mtele) != 10 || Mtele[0] != '0');

            strcpy(pers[i].tele, Mtele);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Contact introuvable !\n");
    }
}

void rechercher() {
    char nom_rechercher[100];
    int trouve = 0;

    if (count == 0) {
        printf("Aucun contact disponible !\n");
        return;
    }

    printf("Veuillez entrer le nom du contact à rechercher : ");
    scanf(" %[^\n]", nom_rechercher);

    for (int i = 0; i < count; i++) {
        if (strcmp(nom_rechercher, pers[i].nom) == 0) {
            printf("\n--- Contact trouvé ---\n");
            printf("Nom : %s\n", pers[i].nom);
            printf("Email : %s\n", pers[i].adresse_email);
            printf("Téléphone : %s\n", pers[i].tele);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Contact introuvable !\n");
    }
}

void affichage() {
    if (count == 0) {
        printf("Aucun contact à afficher.\n");
        return;
    }

    for(int i=0;i<count;i++){
        printf("\n--- Contact ---\n");
        printf("Nom : %s\n", pers[i].nom);
        printf("Email : %s\n", pers[i].adresse_email);
        printf("Téléphone : %s\n", pers[i].tele);
        printf("----------------------------\n");
    }
}

void Supprimer() {
    char Snom[100];
    int trouve = 0;

    if (count == 0) {
        printf("Le carnet est vide.\n");
        return;
    }

    printf("Entrer le nom du contact à supprimer : ");
    scanf(" %[^\n]", Snom);

    for (int i = 0; i < count; i++) {
        if (strcmp(Snom, pers[i].nom) == 0) {
            for (int j = i; j < count - 1; j++) {
                pers[j] = pers[j + 1];
                
            }
            count--;
            trouve = 1;
            printf("Contact supprimé.\n");
            break;
        }
    }

    if (!trouve) {
        printf("Contact introuvable.\n");
    }
}

void afficher_menu() {
    printf("\n===== Menu Carnet de Contacts =====\n");
    printf("1. Ajouter un contact\n");
    printf("2. Afficher tous les contacts\n");
    printf("3. Rechercher un contact\n");
    printf("4. Modifier un contact\n");
    printf("5. Supprimer un contact\n");
    printf("0. Quitter\n");
    printf("Choix : ");
}

int main() {
    int choix;
    do {
        afficher_menu();
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajouter(); break;
            case 2: affichage(); break;
            case 3: rechercher(); break;
            case 4: modifier(); break;
            case 5: Supprimer(); break;
            case 0: printf("Au revoir\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}