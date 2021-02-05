

#include <stdio.h>

int main()
{
    //vars crating
    int option=0;
    char ans =' ';
    const int SMOLLEST_NUM =0;
    const int BIGEST_NUM =20 ;
    
    /*
    im realy sorry about the tripel nasted do while block
    is ther a better way?
    */
    
    //alwos to ran miltipol time
    do
    {   // input 
        do
        {
            printf("enter the option you want 0-20\n");
            scanf("%d",&option);
            getchar();//buffer clining
            (option<SMOLLEST_NUM||option>BIGEST_NUM) ? printf(" invalid input\n") : option;
            }
            while(option<SMOLLEST_NUM||option>BIGEST_NUM);
                /* simulats user input to print the path (could be jast switch case
                block but to many cases and Writing the path by hand is boring )
                */
                do
                {
           
                switch (option)
                {
                    case 0 :
                    case 5 :
                    case 9 :
                        printf("%d goes to 4\n",option);
                        option =4;
                        break;
                    case 1 :
                    case 2 :
                    case 6 :
                    case 10 :
                        printf("%d goes to 3\n",option);
                        option=3;
                        break;
                    case 3 :
                    case 7 :
                    case 8 :
                        printf("%d goes to 5\n",option);
                        option=5;
                        break;
                    case 4 :
                        printf("%d goes to magshimim\n",option);
                        option=-1;//exit cod
                        break;
                    case 11 :
                    case 12 :
                    case 20 :
                        printf("%d goes to 6\n",option);
                        option=6;
                        break;
                    case 15 :
                    case 16 :
                        printf("%d goes to 7\n",option);
                        option=7;
                        break;
                    case 13 :
                    case 14 :
                    case 18 :
                    case 19 :
                        printf("%d goes to 8\n",option);
                        option=8;
                        break;
                    case 17 :
                        printf("%d goes to 9\n",option);
                        option=9;
                        break;
            }
        } 
        while(option!= -1);
       
        // asking if the user wants to do it agian
        printf("agian ? y for yes any other key for no\n");
        ans =getchar();
        getchar();//buffer clining
       
    }
    while(ans=='y');
    
    return(0); 
}
