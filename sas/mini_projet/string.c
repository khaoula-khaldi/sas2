//challenge 1

#include <stdio.h>

int main()
{
    char chaine[100];
    printf ("veuillerz entre une chaine de caractere : ");
    gets (chaine);
    return 0;
}



//challenge 2
 #include <stdio.h>

int main()
{
    char chaine[100];
    int longeur=0;
    
    printf ("veuillerz entre une chaine de caractere : ");
    scanf(" %[^\n]",chaine);
    int i=0;
    while (chaine[i])i++;
    

    
    printf("voila la longeur de la chaine %d",i);

    
    
    return 0;
}




//challenge 3
#include <stdio.h>

int main()
{
    char chaine1[100];
    char chaine2[100];
    char resultats[100];
    printf ("veuillerz entre une chaine de caractere : ");
    scanf(" %[^\n]",chaine1);
    printf ("veuillerz entre autre chaine de caractere : ");
    scanf(" %[^\n]",chaine2);
    int i=0;
    int j=0;
    while(chaine1[i]!='\0'){
        resultats[i]=chaine1[i];
        i++;
    }
    while(chaine2[j]!='\0'){
        resultats[i]=chaine2[j];
        j++;
        i++;
    }
    printf("voila la resultats :%s",resultats);

    
    
    return 0;
}
 //challenge4
 #include <stdio.h>
#include <string.h>
int main()
{
    char chaine1[100];
    char chaine2[100];
    
    printf ("veuillerz entre une chaine de caractere : ");
    scanf(" %[^\n]",chaine1);
    printf ("veuillerz entre autre chaine de caractere : ");
    scanf(" %[^\n]",chaine2);
    printf("%d",strcmp(chaine1,chaine2));
    if(strcmp(chaine1,chaine2)==0){
        printf (" les deux chaine sant egaux ");
    }else{
        printf(" les deux chaine ne sont pas egaux ");
    }
    
    
    return 0;
}
//challenge 5

#include <stdio.h>

int main() {
    char chaine[100];
    int i = 0;

    printf(" entres la chain :  ") ;
    char c;
    while ((c = getchar()) != '\n' ) {
        chaine[i] = c;
        i++;
    }
     
    printf(" l'inverse: ");
    for (int j = i - 1; j >= 0; j--) { 
        printf("%c",chaine[j]);
    }
    printf("\n");

    return 0;
}

//challenge 6 
#include <stdio.h>

int main() {
    char chaine[100], c;
    int i, stoke = 0;
    
    printf("la chaine : ");
    scanf("%[^\n]s", chaine);
    printf("le caractere: ");
    scanf(" %c", &c);
    
    for(i = 0; chaine[i]; i++)
        if(chaine[i] == c)
            stoke++;
        
    printf("resultats: %d\n", stoke);
    
    return 0;
}

//challenge 7
#include <stdio.h>

int main() {
    char chaine[100];
    int i;
    
    printf("entre une chaine en minuscule  : ");
    scanf("%s", chaine);
    
    for(i = 0; chaine[i]; i++) {
        if(chaine[i] >= 'a' && chaine[i] <= 'z')
            chaine[i] =chaine[i] - 32;
    }
    
    printf("le majuscule    %s\n", chaine);
    
    return 0;
}

//challenge 8
#include <stdio.h>

int main() {
    char chaine[100];
    int i;
    
    printf("entre une chaine en majuscule  : ");
    scanf("%s", chaine);
    
    for(i = 0; chaine[i]; i++) {
        if(chaine[i] >= 'A' && chaine[i] <= 'Z')
            chaine[i]=chaine[i]+32;
    }
    
    printf("le minuscule    %s\n", chaine);
    
    return 0;
}


//challenge en grp
#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int trouvee=0;
    int enregistrez=0;
    char mots[10];
    char tracks[][80] = {
            "I left my heart in Harvard Med School",
            "Newark, Newark - a wonderful town",
            "Dancing with a Dork",
            "From here to maternity",
            "The girl from Iwo Jima",
        } ;
    printf ("entre le mots qui tu a rechercher");
    scanf("%s",mots);
    for(i=0;i<5;i++){
        if(strstr(tracks[i],mots)){
            trouvee=1;
            enregistrez=i;
            printf("trouvee la position %d:%s\n",i+1,tracks[i]);
        }
    }  
    if (!trouvee){
        printf("le mots invalide");
    }
   
    return 0;
}
   