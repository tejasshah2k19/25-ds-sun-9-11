#include <stdio.h>
#define SIZE 7

int a[] = {15, 12, 19, 7, 60, 3, 11};


void main(){

    int target = 26;
    int i,j;


    for(i=0;i<SIZE;i++){
        for(j=i+1;j<SIZE;j++){
            if( (a[i]+ a[j])  == target  ){
                printf("\n %d  %d",i,j);
                
            }
        }
    }



}