// include tool
#include<stdio.h> //or >> "stdio.h"

// standard function
main()
//block
{

                                                                                    //EX_1
    int days;
    float salary_tax,tax,price_of_hour,num_hour,one_day,salary_pure;
    #define tva 2.5
    printf("Enter number of days you work: ");
        scanf("%i",&days);
    printf("Enter number of hour you work in one day: ");
        scanf("%f",&num_hour);
    printf("Enter price of one hour : ");
        scanf("%f",&price_of_hour);
    one_day = num_hour*price_of_hour;
    salary_pure = days * one_day;

    if(salary_pure >= 2500 && salary_pure < 3500){
        tax = (salary_pure*tva)/100;
        salary_tax = salary_pure - tax;
        printf("Your salary without tax is %.1f\n",salary_pure);
        printf("Your salary with tax is %.1f & your tax is %.1f\n",salary_tax,tax);
    }
    else if(salary_pure >= 3500 && salary_pure < 4500){
        #define tva 10
        tax = (salary_pure*tva)/100;
        salary_tax = salary_pure - tax;
        printf("Your salary without tax is %.1f\n",salary_pure);
        printf("Your salary with tax is %.1f & your tax is %.1f\n",salary_tax,tax);
    }
    else if((salary_pure >= 4500) && (salary_pure < 10000)){
        #define tva 18
        tax = (salary_pure*tva)/100;
        salary_tax = salary_pure - tax;
        printf("Your salary without tax is %.1f\n",salary_pure);
        printf("Your salary with tax is %.1f & your tax is %.1f\n",salary_tax,tax);
    }
    else if(salary_pure >= 10000){
        #define tva 22
        tax = (salary_pure*tva)/100;
        salary_tax = salary_pure - tax;
        printf("Your salary without tax is %.1f\n",salary_pure);
        printf("Your salary with tax is %.1f & your tax is %.1f\n",salary_tax,tax);
    }
    else{
        #define tva 0
        int mo3awana = 500;
        tax = (salary_pure*tva)/100;
        salary_tax = salary_pure - tax + mo3awana;
        printf("Your salary without tax is %.1f\n",salary_pure + mo3awana);
        printf("Your salary with tax is %.1f & your tax is %.1f\n",salary_tax,tax);
    }


                                                                        //EX_2


    int num_1,num_2;char operation;
    printf("Welcome Dear\nPlease Enter number one : ");
    scanf(" %d",&num_1);
    printf("Please Enter number two : %c",operation);
    scanf(" %d",&num_2);
    printf("chois any operator\n1 __ '+'\n2 __ '-'\n3 __ '*'\n4 __ '/'\n5 __ '%s'\nChoose pls : ","%");
    getchar();                                                                                              //Urgent function in the system
    scanf(" %c",&operation);
    if(operation == '1' || operation == '+'){
        printf("Result is : %d\n",num_1+num_2);
    }
    else if(operation == '2' || operation == '-'){
        printf("Result is : %d\n",num_1-num_2);
    }
    else if(operation == '3' || operation == '*'){
        printf("Result is : %d\n",num_1*num_2);
    }
    else if(operation == '4' || operation == '/'){
        printf("Result is : %d\n",num_1/num_2);
    }
    else if(operation == '5' || operation == '%'){
        if(num_1 < num_2){
            printf("Please You must enter the first number greater than the second\nnumber one please :");
            scanf(" %d",&num_1);
            printf("number two please :");
            scanf(" %d",&num_2);
            printf("Result is : %d\n",num_1%num_2);
        }else{
            printf("Result is : %d\n",num_1%num_2);
        }
    }
    else{
        printf("\nERROR >> operation not correct\n");
    }
    
    
    
    
    
}
