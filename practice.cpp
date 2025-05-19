#include<stdio.h>
int sum(int a,int b){
  int  ans = a+b;
    return ans;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int ans = sum(x,y);
    printf("%d\n",ans);
    return 0;
}
