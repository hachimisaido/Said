#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int i=0;
    int montant;
    do{

      montant = get_int ("type montant : ");
    }
    while (montant<0);

    while (montant >=a)

    {
        montant=montant-a;

        i++;
    }

    while(montant>=b)
    {
        montant=montant-b;
        i++;

    }

    while(montant>=c)
    {

        montant=montant-c;
        i++;
    }

    while(montant>=d)
    {

        montant=montant-d;
        i++;
    }

    while(montant>=e)
    {

        montant=montant-e;
        i++;
    }

    while(montant>=f)
    {

        montant=montant-f;
        i++;
    }
    while(montant>=g)
    {

        montant=montant-g;
           i++;
    }
    while(montant>=h)
        {
       montant=montant-h;
       i++;
        }

        printf(" le nombre des pieces utilises est %i\n :", i);
}