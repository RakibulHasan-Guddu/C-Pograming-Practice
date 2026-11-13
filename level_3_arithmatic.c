

// একটি তিন অঙ্কের সংখ্যার অঙ্কগুলোর যোগফল বের করো।

// Input: 345

// Output: 12



#include <stdio.h>
   int main (){

      int num;
      scanf("%d",&num);

// To find the first digit of a three-digit number, 
// the number must be divided by 100.
    int  a = num/100;

// To find the middle digit of a three-digit number,
//  divide the number by 10 and then take the remainder
//   when the quotient is divided by %10 (using the modulos operator) exm:(num/10)%10

int b = (num/10)%10;
// To find the last  digit of a three-digit number,
//  divide the number by modulas %10 and then take the remainder
int c = (num % 10);

int sum = a+b+c;
printf("%d",sum); 
    return 0;
   }


   