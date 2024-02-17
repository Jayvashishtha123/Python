#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int max, min;
int a[100000];
void maxmin(int i, int j)
{
      int max1, min1, mid;
      if(i==j)
      {
        max = min = a[i];
        }
        else
        {
            if(i == j-1)
            {
                if(a[i] <a[j])
                {
                    max = a[j];
                    min = a[i];
                    }
                    else
                    {
         max = a[i];
         min = a[j];
         }
         }
         else
         {
            mid = (i+j)/2;
            maxmin(i, mid);
            max1 = max; 
            min1 = min;
            maxmin(mid+1, j);
            if(max < max1)
            max = max1;
            if(min > min1)
            min = min1;
            }
            }
            }
            int main ()
            {
                int i, num;
                printf ("\nEnter the size numbers: ");
                scanf ("%d",&num);
               
                for (int i = 0; i < num; i++) {
                  a[i] = rand() ; // Generates random numbers between 0 and 99
                }

                printf("Array elements: [ ");
               for (int i = 0; i < num; i++) {
               printf("%d,", a[i]);
              }
              printf("]");
           
                max = a[0];
                min = a[0];
                clock_t start_time = clock();
                maxmin(1, num);
                clock_t end_time = clock();


              double total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

                printf ("\nMinimum element in an array : %d\n", min);
                printf ("Maximum element in an array : %d\n", max);
                printf("Total time taken: %f seconds\n", total_time);
                return 0;
                }