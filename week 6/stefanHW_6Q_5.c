
#include <stdio.h>
 
int main () 
{
    
   // //creating vars
   int i=0, j=0, numOfPrimes=0;
   const int SMOLLEST_NUM=2;
   const int BIGEST_NUM =1000;
   //looping all the nu, from 1 to 100
   //and chacking if prime
   for(i =SMOLLEST_NUM ; i<BIGEST_NUM;i++)
   {
       
           for(j =SMOLLEST_NUM ; j <= (i/j); j++)
           {
               if(i%j==0)
               { 
                   break; // if factor found, not prime
               }
            }
            if(j > (i/j)) 
            {
                printf("%d is prime\n", i);
                numOfPrimes++;
            }
   }
   printf("the num of primes %d",numOfPrimes);
   
    return 0;
}
