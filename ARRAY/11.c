//write a program to print how many odd numbers in an array
void countOdd(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    printf("toall number of odds are:%d\n",count);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    countOdd(arr,9);
}


