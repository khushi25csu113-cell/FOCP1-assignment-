#include<stdio.h>
int main(){
  int array[]={23,4,21,45,75,33,79,73,8,99,32,45,67};
  int length =sizeof(array)/sizeof(array[0]);
  for(i=0;i<length;i++)
    {
       if(array[i]==99)
          {
              printf("99 is in %d",i);
             break;
           }
    }
  return 0;
}
