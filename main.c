// include tool
#include<stdio.h> //or >> "stdio.h"
/*#define number 'v'
/*#define number_1 "med"
#define greetings() printf("\n Hello guys my name is %s iam %d years old\n","Mohamed",23);*/

// standard function
main()
//block
{

    //#define number '2' << ktkhdm #define

    //printf("Hello","world"); min knktbo << === "1","2" ==>> kyttbe3 ri content li f "1" why ?!
    //printf("hello world");
    //{ == >> {} << new block  |>> \n >> new line
    //    printf("hello1");
    //}
    // %d > number decimal
    // %f > number float
    //printf("almisaha alma5zona<<z-index:1 katban hiya lwla",number li mdeclariwhom<<z-index:2 ktban ou sf  ,operation number li mdeclariwhom<<z-index:3 mktbanx mais hiya les numbers li ktkun fback ou hiya li system kykhdm 3liha );
    //printf("%d+%d+%d+%d = %d",10,15,21,12,10+15+21+12);
    //printf("= %d",15+20,20); <=<=<= hna mkyhsb 20 li flkher lh9ax huwa kytb3 f print ou ky3wed ou sf hta ktsali , walkin ila kan khaso ta3wid f rah ky3tina erorr f rrsult
    //printf("%d+%d*%d = %d",10,10,10,(10+10*10));
    //printf("\n");
    // if(%d != 1.5  <= float nomber =>=> 0 , l3aks hta huwa sahih %f != 1  <= decimal nomber =>=> 0 )
    //printf("hello Mr : %d",7,"how are you now and you %d brothers",3); <=<=<= fhad lhala mkyttb3x dakxi dyal how are .. kyttb3 ri: >> "hello Mr : 7"
    //printf("%c",'med');// %c <= char or charcater '', fhalat m3tinah string 'word' fkytb3 ri lharf lakhir li huwa word.length-1
    //printf("\n%s","hello world");
    //printf("hello how are you miss %s i have %d and my dad's name is %s and i have a char is %c","Rkiya",23,"Hamid",'a');
    //char name_1 = '1';int name_2;name_2 = 12;
    //int f1;
    //f1= 5;
    //f1 = 15.633;
    //int f2 = 10.1;
    //printf("%c hello %i & %s && %d && %i <<",name_1,name_2,"hamid",f1,f2);
    //printf(" hello man");
    //int t1 = 6;
    //printf("\nMy number is : %d",t1);

                    // HOW TO DECLARATE THE const >>> const type_of_const name_of_const = value; <<<

    //const char ch = '156145fd.25f';                 // dyamn f const or variable mn type char ila kant l value  == ' value.lenght < 2 ' f kytb3 char == value.length-1 <<
    //printf("\n%c",ch);

                    // kndeclariwe variable or constant m3a ana #define khasa b constant

    /*printf("hello %s",number_1);
    const int v1 = 12;
    #define number '8'
    printf("\nhello %d & %c",v1,number);*/
    //#define greetings() printf("hello");
    //greetings();


                                    // >>> input scanf("%type_of_variable",&name_of_variable); <<<
    /*int num;
    printf("enter the number : ");
    scanf("%i",&num);                   //stock in inside of variable
    printf("\nHello Mr : %i",num%2); */           //view the variable

    /*#define hello() printf("\nHello bro %c",num);
    hello();*/


    /*int num_1 , num_2;
    printf("Enter number 1 : ");
    scanf("%i",&num_1);
    printf("\nEnter number 2 : ");
    scanf("%i",&num_2);
    printf("\nnfumber 1 is : %i & number 2 is : %i & the edition is %i\n",num_1,num_2,num_1+num_2);*/

    /*printf("Enter 2 number , number one is integer and number two is float : ");
    int num1;float num2;
    scanf("\n%i%f",&num1,&num2);
    num1++;
    printf("\nNum one is %i and num two is %f and the some is : %f",num1,num2,num1+num2);*/

                                    //increment ++
    /*int increment;
    scanf("%i",&increment);
    increment++;
    //increment--;                             mnb3d ou y3lmna oustad 3lax mktkhdmx nraj3 dars dyal ' Operators plus & [ Remainder Calculator ] ' << urgent
    printf("%i\n",increment);
   ++increment;
    printf("%i\n",increment);
    increment = increment + 8;
    printf("%i\n",increment);
    increment += 12;
    printf("%i\n",increment);*/

                                    //decrement --

    /*int decrement;
    scanf("%i",&decrement);
    decrement--;
    printf("%i\n",decrement);
   --decrement;
    printf("%i\n",decrement);
    decrement = decrement - 8;
    printf("%i\n",decrement);
    decrement -= 12;
    printf("%i\n",decrement);*/

    //printf("\n%i",7%20); f modulent %  ila number1 < number2 >> number1 % number2 >> so result is >> 'number1'



                        //// >>>>  Operators [ Relational ]

                        // == if result is '0' so false
                        // == if result is '1' so true
    /*printf("%i\n",10 > 12);
    printf("%i\n",10 < 12);
    printf("%i",10 == 12);*/

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





    /*printf("Enter number of days : ");
    scanf("%i",&days);
    printf("Enter price of one hour : ");
    scanf("%i",&hour);
    int price = 9 * hour;
    printf("YOUR PRICE WITHOUT TVA IS : %i\n",price);
    /*float salary = price - ((price*18)/100);
    printf("YOUR PRICE WITH TVA IS : %f",salary);*/


}
