#include <stdio.h>







int main()
{
 int secretnumber= 5;
 int guess = 0;
 int guesslimit = 3;
 int outofguesses = 0;
 int guesscount =0 ;







 while (guess != secretnumber && outofguesses ==0 ){
    if ( guesscount < guesslimit ){
  printf("enter a number: ");
  scanf("%d", &guess);
     guesscount++;
 }
 else { 
        outofguesses=1;
 }

}
if(outofguesses==1){
    printf("you lose ");

}
else{
    
printf("you got it right ");
}
 


    return 0;
} 