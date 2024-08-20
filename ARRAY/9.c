/*                            MULTIDIMENSIONAL ARRAY
int arr[][]={1,2,3,4,5};
//ACECESS OF ARRAYS ELEMENT
arr[0][0]---------1
arr[0][1]---------2
arr[1][0]---------3
arr[1][1]---------4
                               it works like matrices                  */

#include<stdio.h>
int main()

{
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=98;
    marks[0][2]=80;
    marks[1][0]=89;
    marks[1][1]=88;
    marks[1][2]=85;

    printf("marks = %d\n",marks[1][2]);

}
