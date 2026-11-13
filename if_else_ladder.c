#include <stdio.h>
int main (){
 int taka ;
 scanf("%d",&taka);
 if( taka >= 5000)
 {
    printf("I would go to matidali");
 }
 else if (taka>=4000)
 {
    printf("I would bought a keyboard");
 }
 else if (taka >=3000)
 {
    printf("I would Buy a Headphone");
 }
 else if(taka>=2000){
    printf("i would buy a mousepad");
 }
 else if(taka>=1000){
    printf("i would buy a Airbuds");
 }
 else{
    printf("I would not buy any product");
 }

    return 0;
}