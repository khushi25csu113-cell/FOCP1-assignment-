#include<stdio.h>
int main(){
  int array[]={34,5,12,5,41,21};
  int length=sizeof(array)/sizeof(array[0]);
  for(int i=1;i<length-1;i++)
    {
      if(array[i]>=array[i-1] && array[i]>=array[i+1]){
        printf("peak element is %d at index %d",array[i],i);
      }
      break;
    }
  return 0;
}
