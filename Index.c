/*Hello, this is my first c-programming project.
I made a currency code converter for 10 different currencies.
                    Enjoy*/

/*The following are the currencies used in this project:
npr, usd, aud, inr, britishpound, canadian dollar, singapore dollar ,japanese yen, chinese yuan,euro,swiss franc*/
#include<stdio.h>
int choose;
//Below are the different functions so as to convert the desired currencies.

float nprusd(),npraud(),nprinr(),nprgbp(),nprcad(),nprsgd(),nprjpy(),nprcny(),npreur(),nprchf();

void main(){
        int resume;
        int chooseCurrency;
        printf("\nEnter the currency code for conversion:\n");
        printf("1.NPR and USD\n2.NPR and AUD\n3.NPR and INR\n4.NPR and GBP\n5.NPR and CAD\n6.NPR and SGD\n7.NPR and JPY\n8.NPR and CNY\n9.NPR and EUR\n10.NPR and CHF\n");
        scanf("%d", &chooseCurrency);

        switch (chooseCurrency)
        //Choosing currency so as to convert between two currencies.
        {
            case 1:
                nprusd();

                break;
            case 2:
                npraud();
                break;
            case 3:
                nprinr();
                break;
            case 4:
                nprgbp();
                break;
            case 5:
                nprcad();
                break;
            case 6:
                nprsgd();
                break;
            case 7:
                nprjpy();
                break;
            case 8:
                nprcny();
                break;
            case 9:
                npreur();
                break;
            case 10:
                nprchf();
                break;
            default:
                printf("Error! Please Input correct code.");
                break;
        }
}
/*   Function part      */
/* Conversion rates acquired as of date August 20th, 2022 from:
        https://www.oanda.com/currency-converter/en/

*/

float nprusd(){
    float usd=0.0078,npr=127.8;
    printf("\nChoose\n1.NPR to USD\n2.USD to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f US Dollar",npr,npr*usd);
    }
    else if (choose=2)
    {
        printf("Enter your amount in US Dollar\n");
        scanf("%f",&usd);
        printf("%.3f US Dollar is equivalent to %.3f Nepali Rupee",usd,npr*usd);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float npraud(){
    float aud=0.011,npr=87.84;
    printf("\nChoose\n1.NPR to AUD\n2.AUD to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Austrailian Dollar",npr,npr*aud);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Austrailian Dollar\n");
        scanf("%f",&aud);
        printf("%.3f Austrailian Dollar is equivalent to %.3f Nepali Rupee",aud,npr*aud);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float nprinr(){
    float inr=0.63,npr=1.6;
    printf("\nChoose\n1.NPR to INR\n2.INR to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Indian Rupee",npr,npr*inr);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Indian Rupee\n");
        scanf("%f",&inr);
        printf("%.3f Indian Rupee is equivalent to %.3f Nepali Rupee",inr,npr*inr);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float nprgbp(){
    float gbp=0.0066,npr=151.17;
    printf("\nChoose\n1.NPR to GBP\n2.GBP to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f British Pound",npr,npr*gbp);
    }
    else if (choose=2)
    {
        printf("Enter your amount in British Pound\n");
        scanf("%f",&gbp);
        printf("%.3f British Pound is equivalent to %.3f Nepali Rupee",gbp,npr*gbp);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float nprcad(){
    float cad=0.010,npr=98.36;
    printf("\nChoose\n1.NPR to CAD\n2.CAD to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Canadian Dollar",npr,npr*cad);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Canadian Dollar\n");
        scanf("%f",&cad);
        printf("%.3f Canadian Dollar is equivalent to %.3f Nepali Rupee",cad,npr*cad);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float nprsgd(){
    float sgd=0.011,npr=91.86;
    printf("\nChoose\n1.NPR to SGD\n2.SGD to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Singapore Dollar",npr,npr*sgd);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Singapore Dollar\n");
        scanf("%f",&sgd);
        printf("%.3f Singapore Dollar is equivalent to %.3f Nepali Rupee",sgd,npr*sgd);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float nprjpy(){
    float jpy=1.07,npr=0.93;
    printf("\nChoose\n1.NPR to JPY\n2.JPY to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Japanese Yen",npr,npr*jpy);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Japanese Yen\n");
        scanf("%f",&jpy);
        printf("%.3f Japanese Yen is equivalent to %.3f Nepali Rupee",jpy,npr*jpy);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float nprcny(){
    float cny=0.053,npr=18.75;
    printf("\nChoose\n1.NPR to CNY\n2.CNY to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Chinese Yuan",npr,npr*cny);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Chinese Yuan\n");
        scanf("%f",&cny);
        printf("%.3f Chinese Yuan is equivalent to %.3f Nepali Rupee",cny,npr*cny);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float npreur(){
    float eur=0.0078,npr=127.8;
    printf("\nChoose\n1.NPR to EUR\n2.EUR to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Euro",npr,npr*eur);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Euro\n");
        scanf("%f",&eur);
        printf("%.3f Euro is equivalent to %.3f Nepali Rupee",eur,npr*eur);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}
float nprchf(){
    float chf=0.0075,npr=133.32;
    printf("\nChoose\n1.NPR to CHF\n2.CHF to NPR\n");
    scanf("%d",&choose);
    if (choose==1)
    {
        printf("\nEnter your amount in Nepali Rupee\n");
        scanf("%f",&npr);
        printf("%.3f Nepali Rupee is equivalent to %.3f Swiss Franc",npr,npr*chf);
    }
    else if (choose=2)
    {
        printf("Enter your amount in Swiss Franc\n");
        scanf("%f",&chf);
        printf("%.3f Swiss Franc is equivalent to %.3f Nepali Rupee",chf,npr*chf);
    }
    else
    {
        printf("Error! Please Input correct code.");
    }
    
}