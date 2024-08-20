/* **ARRAY IN A POINTER**
array name always point at the first array element.So array is also a pointer_safety
int *ptr =  &arr[0];
    OR
int *ptr = arr;


TRANSVERSE OF AN ARRAY means travel through all the elements of an array.
We can use for loop to go through all the element of an array and we can print the values.*/
#include<stdio.h>
int main(){
int printValue[5];

//input
int *ptr = &printValue[0];
for(int i =0; i<5; i++)
{
    printf("%d index = %d\n",i);
    scanf("%d",(ptr+i));
}

//output
for(int i=0; i<5; i++)
{
    printf("%d index = %d\n",i,*(ptr+i));
}

}












