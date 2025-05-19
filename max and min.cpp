#include<stdio.h>
void tasbiha(int N,int Xi[N]){
    int max=Xi[0];
    int min=Xi[0];
      for(int i=0;i<N;i++){
        if(Xi[i]>max){
            max=Xi[i];
        }
        if(Xi[i]<min){
            (min=Xi[i]);
        }
    }
     printf("%d %d\n", min ,max);
}



 int main(){
    int N;
    scanf("%d",&N);
    int Xi[N];
    for(int i=0;i<N;i++){
        scanf("%d",&Xi[i]);
    }


    tasbiha(N,Xi);


    return 0;
}
