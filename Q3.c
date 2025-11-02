#include<stdio.h>
int subtract(int a,int b){
while(b!=0){
unsigned borrow= (~a) & b;
a=a^b;
b=borrow<<1;}
return a;}

int main(){ intx,y;
           printf(" enter two integers (x y) :");
           scanf(%d %d",&x,&y);
             int result=subtract(x,y);
             printf("result of %d - %d =%d\n",x,y,result);
           return 0;
  
}
