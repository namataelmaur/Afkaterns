#include<stdio.h>
/* program to print all numbers from 1000 to 3000 */
int main()
{
   int counter= 3000, i;
   for(i=1000;i<=counter;i++)
   {
	   switch(i)
	   { 
	    case 1:case 3:case 5: case 7: case 9:
	    {
	     printf("%d(odd)\t",i);
	     break;
	    }
	    case 2:case 4:case 6:case 8:case 0:
	    {
	     printf("%d(even)\t",i );
	     break;
            }                                            
           }
           printf("%d \t",i);
   }

        return 0;
}


