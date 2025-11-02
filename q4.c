#include<stdio.h>
int main(){
  int a=4,b=7;
  //1st method using another variable
  int c=a;
  a=b;
  b=c;
  printf(" a is %d and b is %d",a,b);
return 0;
  // 2nd method using arithematic operation
   a=a-b;
  b=a+b;
  a=b-a;
  printf(" a is %d and b is %d",a,b);
    //3rd method using
  a=a^b;
  b=a^b;
  a=a^b;
  printf(" a is %d and b is %d",a,b);
  //4th method using pointer
  void swap(int *x,int *y){
  int z= *x;
    *x=*y;
    *y= z}
      int main(){
      int a=3,b=5;
        swap(&a,&b);
         printf(" a is %d and b is %d",a,b);
    }
  return o;
}
