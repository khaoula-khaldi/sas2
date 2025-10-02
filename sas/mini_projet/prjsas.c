#include<stdio.h>
#include<string.h>

typedef struct {
    int id_unique;
    char nom[100];
    char espece[100];
    int age;
    char habitat[100];
    float poids;

}zoo;
zoo animal[100] = {
    {1, "Simba", "Lion", 5, "Savane", 190.5},
    {2, "Nala", "Lion", 4, "Savane", 175.0},
    {3, "ShereKhan", "Tigre", 8, "Jungle", 220.3},
    {4, "Baloo", "Ours", 12, "Forêt", 310.0},
    {5, "Raja", "Éléphant", 15, "Savane", 540.7},
    {6, "Marty", "Zèbre", 6, "Savane", 300.2},
    {7, "Gloria", "Hippopotame", 10, "Rivière", 450.0},
    {8, "Alex", "Lion", 7, "Savane", 200.0},
    {9, "Julien", "Lémurien", 3, "Jungle", 12.5},
    {10, "Melman", "Girafe", 9, "Savane", 390.8},
    {11, "Timon", "Suricate", 2, "Désert", 1.2},
    {12, "Pumbaa", "Phacochère", 5, "Savane", 120.0},
    {13, "Scar", "Lion", 11, "Savane", 210.4},
    {14, "Kaa", "Serpent", 6, "Jungle", 45.0},
    {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
    {16, "Dumbo", "Éléphant", 3, "Savane", 320.0},
    {17, "Kiki", "Chien sauvage", 7, "Savane", 25.0},
    {18, "Donatello", "Tortue", 40, "Rivière", 90.5},
    {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
    {20, "Kong", "Gorille", 13, "Jungle", 180.0}
};

int count=20;
int n=0;
zoo temp;
int selecton=0;
void afficher_menu_de_ajoute() {
 printf("\n===== Menu de ajoute =====\n");
 printf("1. ajout.\n");
 printf("2. ajouter_plusieur.\n");
 printf("0. return tour a la menu principal \n");
 printf("selecton : ");
}
void ajouter(){

        animal[count].id_unique = count+1 ;

        printf("Entrer nom : ");
        scanf(" %[^\n]",animal[count].nom );

        printf("Entrer espece : ");
        scanf(" %[^\n]",animal[count].espece );

        printf("Entrer age (entier) : ");
        scanf("%d",&animal[count].age );

        printf("Entrer habitat : ");
        scanf(" %[^\n]",animal[count].habitat );

        printf("Entrer poids (reel): ");
        scanf("%f",&animal[count].poids );

    count++;

}
void ajouter_plusieur(){
    printf("Entre le nombre des animeaux qui tu peut ajouter : ");
    scanf("%d", &n);
    animal[count].id_unique = count+1 ;

    for (int i = 0; i < n; i++) {

        printf("Entrer nom : ");
        scanf(" %[^\n]",animal[i].nom );

        printf("Entrer espèce : ");
        scanf(" %[^\n]",animal[i].espece );

        printf("Entrer âge : ");
        scanf(" %d",&animal[i].age );

        printf("Entrer habitat : ");
        scanf(" %[^\n]",animal[i].habitat );

        printf("Entrer poids : ");
        scanf(" %f",&animal[i].poids );

    }
    count+=n;

}
void afficher_menu_de_affichage() {
 printf("\n===== Menu de affichage =====\n");
 printf("1. Afficher la liste complete.\n");
 printf("2. Trier par nom.\n");
 printf("3. Trier par age.\n");
 printf("4. Afficher uniquement les animaux d un habitat spécifique. \n");
 printf("0. return tour a la menu principal \n");
 printf("option : ");
}
void AffichageTout() {
    if (count == 0) {
        printf("Aucun animal à afficher.\n");
        return;
    }

    for(int i=0;i<count;i++){
        printf("\n--- animal ---\n");
        printf(" id_unique: %d\n", animal[i].id_unique);
        printf(" Nom: %s\n",animal[i].nom );
        printf("Espec: %s\n",animal[i].espece );
        printf("age: %d\n",animal[i].age );
        printf("habitat: %s\n",animal[i].habitat );
        printf("poids: %f\n", animal[i].poids );
        printf("----------------------------\n");
    }
}
void Trier_par_nom(){

    if (count == 0) {
        printf("Aucun animal à afficher.\n");
        return;
    }

for (int i = 0; i < count-1 ; i++) {
        for (int j = 0; j < count-i-1 ; j++) {
            if (strcoll(animal[j].nom, animal[j + 1].nom) > 0) {
                temp = animal[j];
                animal[j] = animal[j + 1];
                animal[j + 1] = temp;
            }
        }
    }
    for(int i = 0 ; i<count ; i++){
        printf(" %d\n %s\n %s\n %d\n %s\n %.2f\n", animal[i].id_unique, animal[i].nom,

       animal[i].espece, animal[i].age, animal[i].habitat, animal[i].poids);

    }
}
void Trier_par_age(){

    if (count == 0) {
        printf("Aucun animal à afficher.\n");
        return;
    }
for (int i = 0; i < count-1 ; i++) {
        for (int j = 0; j < count-i-1 ; j++) {
            if (animal[j].age > animal[j + 1].age) {

                temp = animal[j];
                animal[j] = animal[j + 1];
                animal[j + 1] = temp;
            }
        }
    }
    for(int i = 0 ; i<count ; i++){
        printf("id : %d \n nom: %s \n espece: %s\n age: %d\n habitat: %s \npoids: %.2f\n", animal[i].id_unique, animal[i].nom,

       animal[i].espece, animal[i].age, animal[i].habitat, animal[i].poids);

    }
}
void affichage_habitat_specifique(){
    char habitat_r[100];
    printf("Entrez l'habitat que vous voulez afficher : ");
    scanf(" %[^\n]", habitat_r);

   int trouve=0;

    for(int i = 0; i < count; i++){
        if (strcmp(animal[i].habitat, habitat_r) == 0){
            printf("\n--- Animal ---\n");
            printf("ID unique: %d\n", animal[i].id_unique);
            printf("Nom: %s\n", animal[i].nom);
            printf("Espèce: %s\n", animal[i].espece);
            printf("Age: %d\n", animal[i].age);
            printf("Habitat: %s\n", animal[i].habitat);
            printf("Poids: %.2f\n", animal[i].poids);
            printf("----------------------------\n");
            trouve=1;

        }
    }
    if (!trouve) {
        printf("Aucun animal trouve dans l habitat '%s'.\n", habitat_r);
    }
}
void menu_modification(){
    printf("\n===== Menu de modification =====\n");
    printf("1. modifier l habitat.\n");
    printf("2. modifier age .\n");
    printf("0. return tour a la menu principal \n");
    printf("alternative : ");
}
void modifier_habitat() {
    int id ;
    char habitat_m[100];
    int trouve = 0;
    if (count == 0) {
        printf("Aucun animal disponible !\n");
        return;
    }
    printf("Veuillez entrer id de animal qui tu peut modifier : ");
    scanf("%d",&id );

    for (int i = 0; i < count; i++) {
        if (animal[i].id_unique==id){
            printf("Entrer la nouvelle l habitat \n: `");
            scanf(" %[^\n]",habitat_m);
            strcpy(animal[i].habitat,habitat_m);
        }
        trouve = 1;

    }
    if (!trouve) {
        printf(" animal introuvable !\n");
    }

}
void modifier_age() {
    int id;
    int trouve = 0;
    if (count == 0) {
        printf("Aucun animal disponible !\n");
        return;
    }
    printf("Veuillez entrer id de animal à modifier : ");
    scanf("%d",&id);
    for (int i = 0; i < count; i++) {
        if (animal[i].id_unique==id){
            printf("Entrer la nouvelle age \n: `");
            scanf("%d",&animal[i].age);

        trouve = 1;

        }
    }
     if (!trouve) {
        printf("animal introuvable !\n");
    }

}
void Supprimer(){

    int id;
    int trouve = 0;

    if (count == 0) {
        printf("Le carnet est vide.\n");
        return;
    }

    printf("Entrer le id de animal à supprimer : ");
    scanf(" %d",&id);

    for (int i = 0; i < count; i++) {
        if (animal[i].id_unique==id) {
            animal[i].id_unique=animal[count-1].id_unique;
            count--;
        }
            trouve = 1;
    }
                printf("animal supprimé.\n");
    if (!trouve)
        printf("animalt introuvable.\n");

}
void le_menu_de_recherch(){
    int Choix;
    printf("\n===== Menu de recherche =====\n");
    printf("1. recherche par id \n");
    printf("2. recherch par nom \n");
    printf("3. recherch par espece\n");
    printf("0. Quitter \n");
    printf(" Decision: ");
}
void recherche_id(){
    int id ;
    int trouve=0;
    if (count == 0) {
        printf("Le carnet est vide.\n");
        return;
    }
    printf(" entre id de animal qui tu vu rechercher : ");
    scanf("%d",&id);
    for (int i=0;i<count;i++){
        if (id==animal[i].id_unique){
            printf ("\n ======voila animal qui tu a rechercher ======\n\n");
            printf("ID unique: %d\n", animal[i].id_unique);
            printf("Nom: %s\n", animal[i].nom);
            printf("Espèce: %s\n", animal[i].espece);
            printf("Age: %d\n", animal[i].age);
            printf("Habitat: %s\n", animal[i].habitat);
            printf("Poids: %f\n", animal[i].poids);
            printf("----------------------------\n");
       trouve=1;
        }
    }
     if (!trouve) {
        printf("animalt introuvable.\n");
    }
}
void Menu_de_statistique(){
    printf("\n===== Menu de statistique =====\n");
    printf("1. nombre total des animeaux.\n");
    printf("2. la moyeen des age .\n");
    printf("3.Plus vieux et plus jeune animal.\n");
    printf("4. Afficher les espèces les plus représentées.\n");
    printf("0.Quitter.\n");
    printf("le choix : ");
}
void recherche_nom(){
    char nom_r[100];
    int trouve=0;
    if (count == 0) {
        printf("Le carnet est vide.\n");
        return;
    }
    printf(" entre nom de animal qui tu vu rechercher : ");
    scanf(" %[^\n]",nom_r);
    for (int i=0;i<count;i++){
        if (strcmp(animal[i].nom,nom_r)==0){
            printf (" ======voila animal qui tu a rechercher ======");
            printf("ID unique: %d\n", animal[i].id_unique);
            printf("Nom: %s\n", animal[i].nom);
            printf("Espèce: %s\n", animal[i].espece);
            printf("Age: %d\n", animal[i].age);
            printf("Habitat: %s\n", animal[i].habitat);
            printf("Poids: %.2f\n", animal[i].poids);
            printf("----------------------------\n");
       trouve=1;
        }
    }
     if (!trouve) {
        printf("animalt introuvable.\n");
    }
}
void recherche_espece(){
    char espece_r[100];
    int trouve=0;
    if (count == 0) {
        printf("Le carnet est vide.\n");
        return;
    }
    printf(" entre espece de animal qui tu vu rechercher : ");
    scanf(" %[^\n]",espece_r);
    for (int i=0;i<count;i++){
        if (strcmp(animal[i].espece,espece_r)==0){
            printf (" ======voila animal qui tu a rechercher ======");
            printf("ID unique: %d\n", animal[i].id_unique);
            printf("Nom: %s\n", animal[i].nom);
            printf("Espèce: %s\n", animal[i].espece);
            printf("Age: %d\n", animal[i].age);
            printf("Habitat: %s\n", animal[i].habitat);
            printf("Poids: %.2f\n", animal[i].poids);
            printf("----------------------------\n");
       trouve=1;
        }
    }
     if (!trouve) {
        printf("animalt introuvable.\n");
    }
}
void nb_total(){
    printf(" \nvoila le nombre total dans cette zoo :%d\n ",count);

}
float age_moyeen(){
    float somme =0;
    float moyeen=0;
    for (int i=0;i<count;i++){
        somme += animal[i].age;
    }
    moyeen=somme/count;

    return moyeen;
}
void jeune_vieux() {
    int min = 0;
    int max = 0;
    for (int i = 1; i < count; i++) {
        if (animal[i].age < animal[min].age) {
            min = i;
        }
        if (animal[i].age > animal[max].age) {
            max = i;
        }
    }

    printf("\n===== Animal le plus jeune =====\n");
    printf("ID unique: %d\n", animal[min].id_unique);
    printf("Nom: %s\n", animal[min].nom);
    printf("Espèce: %s\n", animal[min].espece);
    printf("Age: %d\n", animal[min].age);
    printf("Habitat: %s\n", animal[min].habitat);
    printf("Poids: %.2f\n", animal[min].poids);

    printf("\n===== Animal le plus vieux =====\n");
    printf("ID unique: %d\n", animal[max].id_unique);
    printf("Nom: %s\n", animal[max].nom);
    printf("Espèce: %s\n", animal[max].espece);
    printf("Age: %d\n", animal[max].age);
    printf("Habitat: %s\n", animal[max].habitat);
    printf("Poids: %.2f\n", animal[max].poids);
}
void espece_repetitive(){
    int trouvee=0;
    int compteur=0;
    for(int i=0;i<count;i++){

        for(int j=0;j<count;j++){
            if (strcmp(animal[i].espece,animal[i+1].espece)==0){
                compteur++;
            }
            trouvee=1;
        }
   }
   printf("%s",animal[compteur].espece);
   printf("%s",animal[compteur].nom);
   if(!trouvee){
       printf (" Aucun animal repetee");
   }
}

void Afficher_les_especes_les_plus_representees() {
    if (count == 0) {
        printf("Aucun animal dans le zoo.\n");
        return;
    }

    int compteur;
    int max_count = 0;
    char espece_max[100];

    for (int i = 0; i < count; i++) {
        compteur = 1;

        for (int j = i + 1; j < count; j++) {
            if (strcmp(animal[i].espece, animal[j].espece) == 0) {
                compteur++;
            }
        }

        if (compteur > max_count) {
            max_count = compteur;
            strcpy(espece_max, animal[i].espece);
        }
    }

    printf("\nL'espece la plus representée est : %s avec %d animaux.\n", espece_max, max_count);
}



void afficher_menu() {
 printf("\n===== Menu Carnet de zoo =====\n");
 printf("1. Ajouter un animal\n");
 printf("2. Afficher tous les animal\n");
 printf("3. modifier un animal\n");
 printf("4. Supprimer un animal\n");
 printf("5. recherch un animal\n");
 printf("6. Statistiques\n");
 printf("0. Quitter\n");
 printf("Choix : ");
}
int main() {
 int choix;
 int option;
 int alternative;
 int Decision;
 int le_choix;
 do {

  afficher_menu();
  if (scanf("%d", &choix)!=1){
      printf(" choix invalide entres une nombre   !! ");

  }

  switch (choix) {
  case 1:
   do{
     afficher_menu_de_ajoute();
     scanf("%d", &selecton);
     switch(selecton){
         case 1:
           ajouter();
           break;
         case 2:
           ajouter_plusieur();
           break;
         case 0:
         printf("Au revoir\n");
         break;
         default:
           printf("invalider.\n");
     }
   }while(selecton != 0);
    break;


  case 2:
  do{
   afficher_menu_de_affichage();
   scanf("%d", &option);
   switch (option){
       case 1:
          AffichageTout();
           break;
       case 2:
           Trier_par_nom();
            break;
       case 3:
           Trier_par_age();
           break;
        case 4:
          affichage_habitat_specifique();
       case 0:
           printf("Au revoir\n");
           break;
        default:
          printf(" invalide.\n");
     }

   }while(option != 0);
    break;

  case 3:
  do{
   menu_modification();
   scanf("%d", &alternative);
   switch(alternative ){
       case 1:
        modifier_habitat();
        break;
       case 2:
        modifier_age();
        break;
       case 0:
           printf("Au revoir\n");
           break;
        default:
          printf(" stop le choix invalide .\n");
     }
   }while(alternative!=0);
   break;

   case 4:
     Supprimer();
      break;
    case 5:
    do{
        le_menu_de_recherch();
        scanf("%d",& Decision);
        switch(Decision){
            case 1:
                recherche_id();
                break;
            case 2:
                recherche_nom();
                break;
            case 3:
                 recherche_espece();
                 break;
            case 0:
                printf("Au revoir\n");
                break;
            default:
                 printf(" ta choix invalide !!\n");
        }
    }while(Decision!=0);
    break;
    case 6:
    do{
       Menu_de_statistique();
       scanf("%d",& le_choix);
       switch(le_choix){
            case 1:
            nb_total();
            break;
            case 2:
               printf("\nvoila la moyeen des age se cette zoo :%f\n",age_moyeen());
               break;
            case 3:
                jeune_vieux();
                break;
            case 4:
                Afficher_les_especes_les_plus_representees();
                break;
            case 0:
                printf(" Au revoir !");
                break;
            default:
                printf("le choix invalide !!\n");
       }
    }while(le_choix!=0);
 case 0:
   printf("Au revoir\n");
   break;
 default:
   printf("Choix invalide.\n");
  }
 }while (choix != 0);

 return 0;
}
