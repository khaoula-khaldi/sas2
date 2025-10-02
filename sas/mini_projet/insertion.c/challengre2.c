#include <stdio.h>
#include <string.h>

int main(){
    int stok;
    int j,i;
    int tab[]={25,45,1,3,87,69};
    for ( i=0;i<6;i++){
        stok=tab[i];
        j=i-1;
        while(j>=0 && tab[j]>stok){
            tab[j+1]=tab[j];
            j--;
        }
        tab[j+1]=stok;
    }
    for(int i = 0 ; i<6 ; i++){
        
    printf(" %d",tab[i]);
    } 

    return 0;
}


//autre methode ***********************************************************************

#include <stdio.h>
#include <string.h>

int main(){
    int stok;
    int j,i;
    int tab[]={25,45,1,3,87,69};
    for ( i=0;i<6;i++){
        for (j=0;j<5;j++){
            if(tab[j]>tab[i]){
            stok=tab[i];
            tab[i]=tab[j];
            tab[j]=stok;
            }
        }
    }
    for(int i = 0 ; i<6 ; i++){
        
    printf(" %d",tab[i]);
    } 

    return 0;
}