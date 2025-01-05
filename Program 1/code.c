//develope The Program To Read The value Of intergers variables in Memory And Swap Their Values

#include<stdio.h>
void main(){
  int x,y,z;

  printf("\n Enter The Two Number : ");
  scanf("%d %d",&x, &y);

  printf("\n Before swapping ");
  printf("\n x : %d ",x);
  printf("\n y : %d ",y);

  z=x; //swapping
  x=y; //swapping
  y=z; //swapping

  printf("\n After swapping ");
  printf("\n x : %d ",x);
  printf("\n y : %d ",y);

}
