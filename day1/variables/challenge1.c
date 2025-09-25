

//challenge 1 

#include <stdio.h>

int main(){
    char nom[20];
    char prenom[30];
    char sex;
    int age;
    char adresse_email[60];
    printf("veuillez entres votre nom : ");
    scanf(" %s",&nom);
    printf("veuillez entres votre prenom : ");
    scanf(" %s",&prenom);
    printf("veuillez entres votre sex f ou h  : ");
    scanf(" %c",&sex);
    printf("veuillez entres votre adesse email: ");
    scanf(" %s",&adresse_email);
    printf("veuillerz entrer votre age : ");
    scanf(" %d" , &age);
    printf("\n________________________\n");
    printf("voila les informmation de cette presonne ");
    printf("\n nom  %s",nom);
    printf("\n prenom %s",prenom);
    printf("\n sex %c ",sex);
    printf("\n age %d",age);
    printf("\n adresse_email  %s ",adresse_email);
    printf("\n fin de programme ");

    }