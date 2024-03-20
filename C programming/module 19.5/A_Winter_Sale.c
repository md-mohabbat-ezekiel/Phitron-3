#include<stdio.h>
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
int discount_p=100-n;
float main_p=100*m*1.0/discount_p;
printf("%0.2f",main_p);

    return 0;
}
// 100-15
// 85 -100
// 1 - 100/85
// 20 -100*20/85
// The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son.
//  The T-shirt has a ticket that indicates a discount of X%
//  and its price P
//  after the discount. She now wants to know the price 
//  before the discount to know if the discount was worthy. Help her!