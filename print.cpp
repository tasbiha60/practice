#include<stdio.h>
void tasbiha(int n,int a[n]){
for (int i=1;i<=n;i++){
        printf("%d " ,a[i]);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    tasbiha(n,a);


    return 0;
}
