#include <stdio.h>

int main(){

    int arr[] = {8,6,7,2,6,1};

    int helper = 0; 

    for(int i =0 ; i<6; i++){
        for(int j = i+1; j<6 ; j++){
            if(arr[i]>arr[j]){
                helper = arr[i];
                arr[i] = arr[j]; 
                arr[j] = helper ; 

            }
        }
    }

    for(int i = 0 ; i<6 ; i++){
        printf("%d", arr[i]); 
    }
    
}