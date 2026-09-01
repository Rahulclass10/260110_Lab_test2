#include<stdio.h>
int main()
{
    int pin,enter,attempt,access;
    pin = 4512;
    access =0;

    for(attempt =3; attempt>0;attempt--)
    {
        printf("Enter your 4-digit pin number:\n");
        scanf("%i",&enter);


            {
            if(pin==enter)
            {
                printf("Access Granted!\n");
                break;
            }
            else
            {
                access = access+1;
                printf("Incorrect PIN. Attempts reamining %d\n",attempt-1);
            }
            }
    if(access==3)
        {
            printf("SYSTEM LOCKED: too many failed attempts.\n");
        }

    }

}
