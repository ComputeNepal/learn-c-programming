//A simple program of electricity bill generator

#include<stdio.h>
#include <stdlib.h>

int main(){
  int units;
  float price;

  printf("Enter the units:\t");
  scanf("%d",&units);
  system("clear");

  if(units<=20){
    price=units*4;
  }
  else if(units<=50){
      price=(20*4)+((units-20)*7.3);
  }

  else if(units<=150){
      price=((20*4)+(50*7.3))+((units-50)*8.6);
  }
  else if(units<=250){
      price=(20*4+30*7.3+100*8.6)+((units-150)*9.5);
    }
  else if(units>250){
      price=(20*4+30*7.3+100*8.6+100*9.5)+((units-250)*12.5);
  }

  //you can automate the bill no, date and sc no for advancement
  printf("~~~NEPAL ELECTRICITY AUTHORITY~~~\n");
  printf("-----------------------------------\n");
  printf("\tELECTRICITY BILL\n");
  printf("-----------------------------------\n\n");   
  printf("BILL NO:\t843948394\n");
  printf("BILL DATE:\t2079/12/12\n");
  printf("BRANCH:\t\tDAMAK\n");
  printf("-----------------------------------\n");
  printf("SC NO:\t\t309.11.012A\n");
  printf("BILL NO:\t843948394\n");
  printf("TOTAL UNITS:\t%d\n",units);
  printf("TOTAL AMOUNT:\tRS.%.3f\n",price);
  printf("-----------------------------------\n");
  printf("-----------------------------------\n");
  return 0;
}
