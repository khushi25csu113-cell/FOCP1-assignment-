#include<stdio.h>
int main(){
int x,y;
  printf("enter x coordinate");
  scanf("%d",&x);
   printf("enter y coordinate");
  scanf("%d",&y);
  if(x>0 && y>0)
    printf("coordinate is in first quadrant");
  else if(x>0&&y<0)
     printf("coordinate is in second quadrant");
  else if(x<0&& y<0)
     printf("coordinate is in third quadrant");
  else 
     printf("coordinate is in fourth quadrant");
    return 0;
  
}
