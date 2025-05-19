#include<stdio.h>
void tasbiha(int N){
     for (int i=1;i<=N;i++){
            if(i>1){
                    printf(" ");

            }
        printf("%d", i);
     }
     printf("\n");
}
int main(){
    int N;
    scanf("%d",&N);


   tasbiha(N);


    return 0;
}
