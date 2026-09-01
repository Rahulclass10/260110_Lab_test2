#include<stdio.h>
int main()
{
    float price,tax,bill,total;
    while(1)
    {
        printf("Enter the price of your item:\n");
        printf("you need to press -1 for exit from this\n");
        scanf("%f",&price);


        if(price== -1)
        {
            break;
        }
        else if(price<0)
        {
            printf("Your price is invalid\n");
            continue;
        }
        else
        {
            total = price;
        }

    }
    tax =(total*0.05);
    bill = total + tax;

    printf("Total bill is %f\n",bill);
}
