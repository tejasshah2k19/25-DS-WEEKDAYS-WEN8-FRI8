#include<stdio.h>   
#define S 4 



int main(){

    int i,j;
    int graph[S][S]; // 4*4 
    int source; 

    for(i=0;i<S;i++){
        for(j=0;j<S;j++){
            printf("\n %d connected %d ? ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }

    printf("\n*******\n");
    for(i=0;i<S;i++){
        for(j=0;j<S;j++){
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }


    source = 2; 

    printf("\n %d is connected with : ",source);
    for(i=0;i<S;i++){
        if(graph[source][i] == 1 ){
            printf(" %d ",i);
        }
    }

    return 0; 
}