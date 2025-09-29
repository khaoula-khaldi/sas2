#include <stdio.h>

int main(){

    int n;
    int helper = 0; 
    printf("entres le nombre des elements de tab :");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
       printf("entres les elements de tab\n :");
       scanf("%d",&arr[i]);
    } 
   printf("les elementsde tab avant le trie\n\n") ;
   
    for (int i = 0 ; i<n ; i++){
    printf(" %d",arr[i]);
    }
    
    printf("\n");
    
    
    
    for(int i =0 ; i<n; i++){
        for(int j = i+1; j<n ; j++){
            if(arr[i]>arr[j]){
                helper = arr[i];
                arr[i] = arr[j]; 
                arr[j] = helper ; 

            }
        }
    }
    printf(" le tableaux apres le trie\n\n  ");
     for(int i = 0 ; i<n ; i++){
        printf( "%d, ", arr[i]); 
    }
    
}