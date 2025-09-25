// challenge 5
#include <stdio.h>

int main() {
    float c;
    printf("entrez la temperateur en celusious :");
    scanf("%f",&c);
    if (c<0){
       printf(" l etat est solide ");
    }else if (0<=c && c<100){
       printf ("l etat est liquide ");
    }else{
       printf("l etat est gaz ");a
    }

    return 0;
}

