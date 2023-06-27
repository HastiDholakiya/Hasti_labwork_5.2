#include<stdio.h>
#include<conio.h>

void main(){
int first_number,second_number,third_number;
clrscr();
printf("Enter the first number: ");
scanf("%d",&first_number);
printf("Enter the second number: ");
scanf("%d",&second_number);
printf("Enter the third number: ");
scanf("%d",&third_number);
if(first_number<second_number){
  if(first_number<third_number){
  printf("first number is min...");
  }else{
  printf("third number is min...");
  }
}else{
  if(second_number<third_number){
  printf("second number is min...");
  }else{
  printf("third number is min...");
  }
}
getch();
}

















































