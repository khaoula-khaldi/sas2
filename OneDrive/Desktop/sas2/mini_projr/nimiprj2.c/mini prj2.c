//challenge 1

#include <stdio.h>
#include <string.h>

typedef struct{
    char nom[50];
    char prenom[60];
    int age ;
} etudiant;

int main(){
    etudiant n1;
    printf ("veuillez entrez le nom : ");
    fgets(n1.nom, sizeof(n1.nom), stdin); 
    n1.nom[strcspn(n1.nom , "\n")] = 0 ; 
    printf("veullez entrez le prenom : ");
    fgets(n1.prenom, sizeof(n1.prenom),stdin);
    n1.prenom[strcspn(n1.nom, "\n")]=0;
    printf(" veuillerz entres votre age : ");
    scanf("%d",&n1.age);
 printf("________laffichage________\n");
     printf(" nom :%s \n", n1.nom); 
     printf("prenom :%s\n", n1.prenom);
     printf("age : %d\n", n1.age);
     return 0;
}  

//challenge 
#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    char prenom[60];
    int notes[5];  // 5 notes par étudiant
} etudiant;

int main() {
    int n;
    printf("Entrez le nombre d'etudiants : ");
    scanf("%d", &n);

    etudiant tab[n]; // tableau d'étudiants

    for (int i = 0; i < n; i++) {
        printf("\n=== Etudiant %d ===\n", i + 1);

        printf("Nom : ");
        scanf("%49s", tab[i].nom);

        printf("Prenom : ");
        scanf("%59s", tab[i].prenom);

        for (int j = 0; j < 5; j++) {
            printf("Note %d : ", j + 1);
            scanf("%d", &tab[i].notes[j]);
        }
    }

    printf("\n===== AFFICHAGE =====\n");
    for (int i = 0; i < n; i++) {
        printf("Etudiant %d : %s %s\n", i + 1, tab[i].prenom, tab[i].nom);

        
        for (int j = 0; j < 5; j++) {
            printf("  Note %d = %d\n", j + 1, tab[i].notes[j]);
            
        }

        
    }   
    

    return 0;
}
//challenge 5 

#include <stdio.h>
#include <string.h>
typedef struct{
    char titre[50];
    char auteur[50];
    int jour;
    int mois;
    int annee;
}livre;
livre info(){
    livre book;
    printf("veuillez entres le titre de livre : ");
    fgets(book.titre,sizeof(book.titre),stdin);
    printf("veuillez entres l auteur  de ce livre : ");
    fgets(book.auteur,sizeof(book.auteur),stdin);
    printf("veuillez entres le jour de ce livre : ");
    scanf  ("%d",&book.jour);
    printf("veuillez entres le mois de ce livre : ");
    scanf  ("%d",&book.mois);
    printf("veuillez entres l annee de ce livre : ");
    scanf  ("%d",&book.annee);
    return book;
}
void affichage(livre book){
    printf("le titre  :%s \n",book.titre);
    printf("l auteur   :%s \n",book.auteur);
    printf("la date de publication \n  :%d / %d / %d ",book.jour ,book.mois,book.annee);
}
int main(){
    livre book=info();
    printf("\n \n ==========VOILA L AFFICHAGE =========\n \n ");
    affichage(book);
    printf("\n ========FIN DE PROGRAMME========");
    
    return 0;
}

//challenge 2 
#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[40];
    char prenom[50];
    int notes[5];
} Etudiant;

int main() {
    Etudiant n1;
    strcpy(n1.nom, "mohamed");
    strcpy(n1.prenom, "elbdgari");
    n1.notes[0] = 12;
    n1.notes[1] = 18;
    n1.notes[2] = 16;
    n1.notes[3] = 17;
    n1.notes[4] = 15;

    printf("Voilà les informations de cette personne :\n");
    printf("Nom : %s\n", n1.nom);
    printf("Prénom : %s\n", n1.prenom);
    printf("Notes :\n");
    for (int i = 0; i < 5; i++) {
        printf("Note %d : %d\n", i + 1, n1.notes[i]);
    }

    return 0;
}
//challenge 3 
#include <stdio.h>
#include<string.h>
typedef struct{
    int longeur ;
    int largeur ;
}rectangle ;
int surface(rectangle rec){
    return rec.longeur*rec.largeur;
}
int main()
{
    rectangle rec;
    printf ("veuillez entrez les valeur de longeur et largeur :");
    scanf(" %d \n %d",&rec.longeur ,&rec.largeur );
    int aire=surface(rec);
    printf("voilà la surface d'un rectangle %d",aire);
    
    return 0;
}
    