//print sum of nth number
#include<stdio.h>
int sum(int term);

int main()
{
    int finalSum=sum(10);
    printf("sum is %d",finalSum);
}

int sum(int term)
{
   if(term==1)
   {
       return 1;
   }
   int SumOfTermMinus1=sum(term-1);
   int sumOfTerms=SumOfTermMinus1+term;
   return sumOfTerms;

}
