/*pointer to pointer is a variable that stores the memory address of another pointer
syntax
int **ptr;
float **ptr;
char **ptr;
*/
#include<stdio.h>
int main()
{
    int i=5;
    int *ptr=&i;
    //int **ptr=&ptr;
    printf("%d\n",*(ptr));
}
