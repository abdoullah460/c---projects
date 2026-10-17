#include<stdio.h>
int main(){
    int height ;

    do { 
        printf("height:");
        scanf("%d",&height);
    }while( height < 1|| height >8 );
    
    {
        int i ;
        int j ;
        int l ;
    


        for (i = 0; i < height; i++)
        {    


            for (l = 0; l < height -i -1; l++)
            {
                 printf(" ");
            }
            

            for ( j = 0 ; j < i + 1   ; j++)
            {
             
                printf("#");

            
            }
            printf(" ");
            int x ;

        for(x = 0 ;x <i+1; x++ ){
            printf("#");

        }
            printf("\n");
        }
        
    }
    
    return 0;

}