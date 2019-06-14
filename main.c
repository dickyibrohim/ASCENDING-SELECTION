#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
// ASCENDING SELECTION
int main()
{   int loop1, loop2, swap, manydata;
    int myarray [100];
    printf("Input Many Element= ");
    scanf ("%d", &manydata);

    for (loop1=0;loop1<manydata;loop1++)
    {
        printf ("Index %d= ", loop1);
        scanf ("%d", &myarray [loop1]);
    }
// SELECTION SORT
    for (loop2=0;loop2<manydata;loop2++)
    {
       for (loop1=0;loop1<manydata;loop1++)
       {
           if (myarray[loop2]<myarray [loop1])
           {
               swap = myarray [loop2];
               myarray [loop2] = myarray [loop1];
               myarray [loop1] = swap;
           }
       }
       printf ("Process %d: ", loop2+1);
       for (loop1=0;loop1<manydata;loop1++)
        {
        printf ("%d ", myarray [loop1]);
        }
        printf ("\n");
    }
    printf ("\nRESULT ASCENDING WITH SELECTION SORT= \n");
    for (loop1=0;loop1<manydata;loop1++)
        {
        printf ("%d ", myarray [loop1]);
        }
    return 0;
}
