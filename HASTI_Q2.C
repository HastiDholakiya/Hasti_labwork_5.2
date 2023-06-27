#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d;
clrscr();
printf("Enter the value of a: ");
scanf("%d",&a);
printf("Enter the value of b: ");
scanf("%d",&b);
printf("Enter the value of c: ");
scanf("%d",&c);
printf("Enter the value of d: ");
scanf("%d",&d);
if(a>b){
  if(a>c){
    if(a>d){
    printf("%d is max",a);
    }else{
    printf("%d is max",d);
    }
   }
  }else if(b>c){
   if(b>d){
    if(b>d){
    printf("%d is max",b);
    }else{
    printf("%d is max",d);
    }
  }else if(c>d){
    printf("%d is max",c);
    }else{
    printf("%d is max",d);
    }
  }
getch();
}