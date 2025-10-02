#include <stdio.h>
#include <string.h>

int main(){
    int stok;
    int j,i,n;
    
    printf (" entres le nombre des case de tableaux : ");
    scanf("%d",&n);
    int tab[n]={};
    for (i=0;i<n;i++){
        printf(" entres les elements de tableaux : ");
        scanf("%d",&tab[i]);
    }
    for ( i=0;i<n;i++){
        for (j=0;j<5;j++){
            if(tab[j]>tab[i]){
            stok=tab[i];
            tab[i]=tab[j];
            tab[j]=stok;
            }
        }
    }
    printf("voila le trie de ses elements : ");
    for(int i = 0 ; i<n ; i++){
        
    printf(" %d",tab[i]);
    }
    int x;
    printf(" entre lelement qui tu a recherches  : ");
    scanf("%d",&x);
    for ( i=0;i<n;i++){
        

    return 0;
}