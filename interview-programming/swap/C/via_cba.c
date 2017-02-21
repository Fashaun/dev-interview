#include <stdio.h>
 
void swap(int*, int*);
 
int main()
{
   int x, y;
        
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
              
   printf("Before Swapping\nx = %d (%d)\ny = %d (%d)\n", x,  &x, y, &y);

   //Call by Address
   swap(&x, &y); 
                    
   printf("After Swapping\nx = %d (%d)\ny = %d (%d)\n", x, &x, y, &y);
                       
   return 0;
}
 
void swap(int *a, int *b)
{
    int temp;
    printf("Before Swapping\na = %d (%d)\nb = %d (%d)\n", *a,  a, *b, b);
    temp = *b;
    *b   = *a;
    *a   = temp;   
}
