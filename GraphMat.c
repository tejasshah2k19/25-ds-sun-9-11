
#include<stdio.h>
#define R 4
#define C 4 

int main(){

    int g[R][C];
    int i,j;

    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            printf("\nEnter value for %d -> %d ",i,j);
            scanf("%d",&g[i][j]);
        }
    }


    //node-> 0 
    //0 is connected with  : 1 3 
    
    
    return 0; 

}