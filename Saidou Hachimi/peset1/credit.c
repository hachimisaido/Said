#include<stdio.h>
#include<cs50.h>
int maim(void)
{
    // declaration et initialisation des variables
    long long numero de la carte;
    int counter = 0;
    long long carte de credit = 0;
    long long credit = 0;
    long long n=0;
    int i = 0;
    int sum = 0;
    int sum1 = 0;
    long long creditc1 = 0;
    // promptb the useer for a valid credit cart for verification
    do
    {
        ccreditnumber = get long_long(" enter tle ccredit number for verification")
    }
    while( ccreditNumber<=0);
    // declaration des differentes variable pour une carte de credit
    ccredit = ccreditNumber;
    credit = ccreditNumber;

    // long dans l'ordre d'avoir la longueur de la carte de credit
    while (ccredit > 0)
    {
        ccredite = ccredit/ 10;
        counter++;
    }
       // verifier si la longueur de la carte de credit est correct
    if ( counter == 13|| counter == 15 || counter == 16)

    {
        // loop the credit cart digit in order to multiply  the number
        if (i = 1; 1 <= counter; i++)
        {
            if (i% 2 ==0)
            {
                ccredit = ccreditNumber % 10;
                sum +ccredit * 2;
            }

            if (i % 2 !=0)
            {
                card = ccreditNumber % 10;
                sum1 =card* 1;
            }
            if (sum1>9)
            {
                sum1=sum1-9;
            }
            sum = sum1+sum;
            ccreditNumber=ccreditNumber / 10;
        }
        //check if the credit card is valid by looking at the last digit of the sum
        if (sum % 10 ==0)
        {
            // divid the credit cart long long number is order to get a suit of two number
            while (credit > 300)
            {
                credit = credit / 10;
                n = credit;
            }
            // check the information of the card by looking at the length and the first
            if (( counter == 13 || counter == 16)&& n == 40)
            {
                printf("visa\n");
            }
            // check the information of the card by looking at the length and the first
            if ((counter == 15)&& (n == 34 || n == 37))
            {
                printf("AMEX\n");
            }
            // check the information of the card by looking at the length and the first
            if (( counter == 16) && (n == 52 ||n ==53 || n == 54 || n == 55))
            {
                printf("MasterCard\n");
            }
        }
        else
        {
            // print out the ivalidity of the credit card after the application
            printf ("INVALIDE\n");
        }
    }
