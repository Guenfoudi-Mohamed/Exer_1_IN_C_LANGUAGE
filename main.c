// include tool
#include<stdio.h> //or >> "stdio.h"

// standard function
main()
//block
{

    
    int days;
    float salary_tva,tva,price_of_hour,num_hour,one_day,salary_pure;
    printf("Enter number of days you work: ");
    scanf("%i",&days);
    printf("Enter number of hour you work in one day: ");
    scanf("%f",&num_hour);
    printf("Enter price of one hour : ");
    scanf("%f",&price_of_hour);
    one_day = num_hour*price_of_hour;
    salary_pure = days * one_day;
    if(salary_pure < 3500){
        tva = (salary_pure*5)/100;
        salary_tva = salary_pure - (salary_pure*5)/100;
        printf("Your salary without tva is %.1f\n",salary_pure);
        printf("Your salary with tva is %.1f & your tva is %.1f\n",salary_tva,tva);
    }
    if((salary_pure >= 3500) && (salary_pure < 4500)){
        tva = (salary_pure*10)/100;
        salary_tva = salary_pure - (salary_pure*10)/100;
        printf("Your salary without tva is %.1f\n",salary_pure);
        printf("Your salary with tva is %.1f & your tva is %.1f\n",salary_tva,tva);
    }
    if((salary_pure >= 4500) && (salary_pure < 10000)){
        tva = (salary_pure*18)/100;
        salary_tva = salary_pure - (salary_pure*18)/100;
        printf("Your salary without tva is %.1f\n",salary_pure);
        printf("Your salary with tva is %.1f & your tva is %.1f\n",salary_tva,tva);
    }
    else if(salary_pure >= 10000){
        tva = (salary_pure*0)/100;
        salary_tva = salary_pure - (salary_pure*0)/100;
        printf("Your salary without tva is %.1f\n",salary_pure);
        printf("Your salary with tva is %.1f & your tva is %.1f\n",salary_tva,tva);
    }


}
