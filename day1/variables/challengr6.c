// challenge 6
#include <stdio.h>

int main() {
    int a , b ;
    float s,p,S,D;
    printf (" veuillerz entrez lzs deux nombre a et b : ");
    scanf("%d %d",&a,&b);
    s=a+b;
    p=a*b;
    S=a-b;
    D=a/b;
    printf("\nla somme %f",s);
    printf("\nle produit %f",p);
    printf("\nla soustraction %f",S);
    printf("\nla division %f",D);
    return 0;
}