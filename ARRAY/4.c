//Enter price of three product with 15% vat
 #include<stdio.h>
 int main()
 {
     int price[3];
     printf("Enter price of first product :");
     scanf("%d",&price[0]);
     printf("Enter price of second t product :");
     scanf("%d",&price[1]);
     printf("Enter price of third product :");
     scanf("%d",&price[2]);

     printf("price of first product is :%.2f\n",price[0]+.15*price[0]);
     printf("price of second product is :%.2f\n",price[1]+.15*price[1]);
     printf("price of third product is :%.2f\n",price[2]+.15*price[2]);

 }
