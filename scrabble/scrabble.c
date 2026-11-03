#include<stdio.h>
#include<ctype.h>
#include<string.h>


int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(char word[]);



int main(void)


{
    char word[100] ;
    char word1[100];
    printf("Player 1:");
    scanf("%s",word);
      printf("Player 2:");
    scanf("%s",word1);

int score1 =    compute_score(word);
int score2 =   compute_score(word1);

if ( score1 > score2)
{
  printf("Player 1 wins!\n");  
}else if (score1 < score2)
{
  printf("Player 2 wins!\n"); 
}
else{
   printf("Tie!\n");
}
    


}

int compute_score(char wordx[])
{
    int score = 0 ; 
for (int i = 0 , len = strlen(wordx); i < len  ; i++)
{



    if (isupper(wordx[i]))
    {
score = score + POINTS[wordx[i]- 'A'];

    }
    else if (islower(wordx[i]))
     {
score = score + POINTS[wordx[i]- 'a'];
    }
}

return score ;
}

