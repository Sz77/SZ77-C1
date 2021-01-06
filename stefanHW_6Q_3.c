#include <stdio.h>

int
main (void)
{
    //creating vers
    int rows = 0;
    int columns = 0;
    
    printf ("Daniel Presents: The Board of Multiplication!\n\n");

    // printing the tabel
    for (rows =1 ; rows <= 10; rows++)
    {
        for (columns = 1; columns <= 10; columns++)
        {
        printf("%4d   ", rows * columns);
        }
        printf("\n"); 
    }

  return 0;
}
