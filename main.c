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
    
    
                                                                                                   //EX_3


            char num_char;
            char answer = 'y';
            char t1[10],t2[10];
            printf("Hello Dear\n");
            int i = 0,j = 0;
            do{
                printf("Please enter the character OR number : ");
                scanf("%c",&num_char);
                getchar();
                if(isdigit(num_char)){
                 t1[i]= num_char;
                 i++;
                }
                else if(isalpha(num_char)){
                    t2[j]= num_char;
                    j++;
                }
                printf("do you want to complete ?! Y/N : ");
                scanf("%c",&answer);
                getchar();
                if(answer == 'n'){
                    break;
                }
                else{
                    answer = 'y';
                }
            }while(answer == 'y');
            printf("\nThe Numbers :");
            for(int t = 0;t < 10;t++){
                printf("%c",t1[t]);
            }
            printf("\n\n");
            printf("The Numbers :");
            for(int r = 0;r < 10;r++){
                printf("%c",t2[r]);
            }
            printf("\n");
  
  
  
                                                                                                   //EX_4

            float numbers;
            char answer  = 'y';
            float t1[5],t2[5];
            int i = 0,length = 4;
            printf("Hello Dear ;\nPlease Enter 5 times, \n");
            while(answer != 'n'){
                printf("Please Enter a Number : ");
                scanf("%f",&numbers);
                getchar();
                t1[i]=numbers;
                i++;
                if(i == 5){
                        break;
                }
                printf("do you want to continue ? Y/N : ");
                scanf("%c",&answer);
                getchar();
                if(answer == 'n' || answer == 'N'){
                    break;
                }
                else{
                    answer == 'y';
                }

            }
            printf("your numbers are : \n");
            for(i = 0;i <= length ;i++){
                printf("\n %.1f ",t1[i]);
            }
            i = 0;
            for(int j = length;j >= 0;j--){
                t2[i] = t1[j];
                i++;
            }
            printf("\n\ntable Two reverse is : \n");
            i= 0;
            for(i = 0;i <= length ; i++){
                printf("\n %.1f ",t2[i]);
            }
            printf("\n\n\n");
    
    
}
