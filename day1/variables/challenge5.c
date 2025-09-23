// challenge 5
#include <stdio.h>

int main() {
    float t;
    printf ("veuillez entrez la temperateur en celusious:");
    scanf("%f",&t);
    if(t<0){
        printf("solide : ");
    }else if (0<=t && t<100){
        printf("liquide :");
    }else{
        printf(" gaze");
    }

    return 0;
}