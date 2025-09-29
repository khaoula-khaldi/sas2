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
 
     printf("%s ", n1.nom); 
     printf("%s", n1.prenom);
     printf("%d", n1.age);
     return 0;
}  