#include<stdio.h>
#include<conio.h>

void add()
{
    int a,b;
    printf("Enter two Numbers : ");
    scanf("%d%d",&a,&b);
    printf("Sum of %d and %d is %d ",a,b,a+b);
}

void sub()
{
    int a,b;
    printf("Enter two Numbers : ");
    scanf("%d%d",&a,&b);
    printf("Subtraction of %d and %d is %d ",a,b,a-b);
}

void multi()
{
    int a,b;
    printf("Enter two Numbers : ");
    scanf("%d%d",&a,&b);
    printf("Multiply of %d and %d is %d ",a,b,a*b);
}

void div()
{
    int a,b;
    printf("Enter two Numbers : ");
    scanf("%d%d",&a,&b);
    printf("Division of %d and %d is %d ",a,b,a/b);
}

void area_of_circle()
{
    float Area,r;
    printf("Enter Radius of Circle : ");
    scanf("%f",&r);
    Area=3.14*(r*r);
    printf("\nArea of Circle at %.2f radius is : %.2f",r,Area);
}

void circum_of_circle()
{
    float circum,r;
    printf("Enter Radius of Circle : ");
    scanf("%f",&r);
    circum=2*3.14*r;
    printf("\nCircumference of Circle at %.2f radius is : %.2f ",r,circum);
}

void area_of_ract()
{
    float l,w;
    float AoR;
    printf("Enter Length and Width of Rectangle : ");
    scanf("%f%f",&l,&w);
    AoR=l*w;
    printf("Area of Rectangle at %.2f and %.2f is : %.2f",l,w,AoR);
}

void area_of_Perimeter()
{
    float AoP,l,w;
    printf("Enter Length and Width for Perimeter : ");
    scanf("%f%f",&l,&w);
    AoP=2*(l+w);
    printf("Area of Perimeter at %.2f and %.2f is : %.2f",l,w,AoP);
}

void bank_rupees()
{
    int amt,total;
    printf("Enter a 3 digit Number : ");
    scanf("%d",&amt);
    total=amt/100;
    printf("\nPakistani Currency Notes \n\n");
    printf("%d Notes of 100.00 \n",total);
    amt=amt-(total*100);
    total=amt/50;
    printf("%d Notes of 50.00 \n",total);
    amt=amt-(total*50);
    total=amt/20;
    printf("%d Notes of 20.00 \n",total);
    amt=amt-(total*20);
    total=amt/10;
    printf("%d Notes of 10.00 \n",total);
    amt=amt-(total*10);
    total=amt/5;
    printf("%d Coin of 5.00 \n",total);
    amt=amt-(total*5);
    total=amt/2;
    printf("%d Coin of 2.00 \n",total);
    amt=amt-(total*2);
    total=amt/1;
    printf("%d Coin of 1.00 \n",total);
}

void month_show()
{
    int i;
    printf("Enter a Number [1 to 12] : ");
    scanf("%d",&i);
    printf("\n");
    if(i==1)
        printf("January");
    else if(i==2)
        printf("February");
    else if(i==3)
        printf("March");
    else if(i==4)
        printf("April");
    else if(i==5)
        printf("May");
    else if(i==6)
        printf("June");
    else if(i==7)
        printf("July");
    else if(i==8)
        printf("August");
    else if(i==9)
        printf("September");
    else if(i==10)
        printf("October");
    else if(i==11)
        printf("November");
    else if(i==12)
        printf("December");
    else
	printf("Number is not Valid");
}

void positve_or_Negative()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("\n");
    if(n>=0)
    {
        if(n%2==0)
            printf("%d is a Positive and Even Number ",n);
        else
            printf("%d is a Positive and Odd Number ",n);
    }
    if(n<0)
    {
        if(n%2==0)
            printf("%d is a Negative and Even Number ",n);
        else
            printf("%d is a Negative and Odd Number ",n);
    }
}

void leap_year()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d",&year);
    if(year%4==0)
        printf("\n%d is a Leap year ",year);
    else
        printf("\n%d is not a Leap year ",year);
}

void ASCII()
{
    char ch;
    printf("Enter Any Single Character : ");
    fflush(stdin);
    scanf("%c",&ch);
    printf("You Entered %c\n",ch);
    printf("ASCII code of %c is %d",ch,ch);

}

void vowel_or_not()
{
    char ch;
    printf("Enter a single Character : ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("%c is a Vowel ",ch);
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a Vowel ",ch);
    else if(ch>=48 && ch<=57)
        printf("%c is a Number ",ch);
    else if(!((ch>=97 && ch<=122) || (ch>=65 && ch<=90)))
        printf("Special Charter");
    else
        printf("%c is a Consonant ",ch);
}

void light_bill()
{
    int id,u;
    char name[20];
    float rs;
    printf("Enter Your Bill ID Number ");
    scanf("%d",&id);
    printf("Enter Your Name ");
    scanf("%s",&name);
    printf("Enter Units who's you consumed ");
    fflush(stdin);
    scanf("%d",&u);
    printf("\n\nCustomer ID NO   : %d\n",id);
    printf("Customer Name    : %s\n",name);
    printf("Unit Consumed    : %d\n",u);
    if(u<=199){
    rs=u*4.20;
        printf("Amount Charge on less then 200 units @ Rs 4.20 per Unit \n");
        printf("Total Unit Rupees is : %.2f ",rs);
    }
    else if(u>=200 && u<400){
    rs=u*6.50;
        printf("Amount Charge b/w 200 to 399 @ Rs 6.50 per Unit \n");
        printf("Total Unit Rupees is : %.2f ",rs);
    }
    else if(u>=400 && u<600){
    rs=u*8.80;
        printf("Amount Charge b/w 400 to 599 @ Rs 8.80 per Unit \n");
        printf("Total Unit Rupees is : %.2f ",rs);
    }
    else if(u>=600){
    rs=u*10.00;
        printf("Amount Charge on Greater then 600 @ Rs 10.00 per Unit\n");
        printf("Total Unit Rupees is : %.2f ",rs);
        }
    printf("\n");
    if(rs>=400)
        printf("Surcharge Amount %.2f",rs*15/100);
    else
        printf("Surcharge Amount is Nothing ");
    printf("\nTotal Bill Amount is : %.2f ",(rs*15/100)+rs);
}

void name_of_days()
{
    int day;
    printf("Enter Number of day ");
    scanf("%d",&day);
    printf("\n");
    if(day==1)
        printf("Monday ");
    else if(day==2)
            printf("Tuesday ");
    else if(day==3)
        printf("Wednesday ");
    else if(day==4)
        printf("Thursday");
    else if(day==5)
        printf("Friday");
    else if(day==6)
        printf("Saturday ");
    else if(day==7)
        printf("Sunday");
    else
    printf("It is No Day for this Number");
}

void main()
{
    int choice,ch;
    while(1)
    {
        top:
        system("cls");
        printf("                                    \n");
        printf("  *********** Main Menu ************\n");
        printf("  **         ~~~~~~~~~~~          **\n");
        printf("  **                              **\n");
        printf("  **   1- Calculator              **\n");
        printf("  **   2- Calculate Areas         **\n");
        printf("  **   3- Conversion Functions    **\n");
        printf("  **   4- Special Functions       **\n");
        printf("  **   5- Exit From Program       **\n");
        printf("  **                              **\n");
        printf("  **********************************\n");

        printf("\n  Enter your Choice ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                calc:
                system("cls");
                printf("                             \n");
                printf("  ******** Calculator *******\n");
                printf("  **       ~~~~~~~~~~      **\n");
                printf("  **   1- Addition         **\n");
                printf("  **   2- Subtraction      **\n");
                printf("  **   3- Multiplication   **\n");
                printf("  **   4- Division         **\n");
                printf("  **   5- Back to Menu     **\n");
                printf("  **                       **\n");
                printf("  ***************************\n");
                printf("\n  Enter your Choice : ");
                scanf("%d",&ch);

                switch(ch)
                {
                case 1:
                    printf("\n");
                    add();
                    getch();
                    goto calc;
                    break;

                case 2:
                    printf("\n");
                    sub();
                    getch();
                    goto calc;
                    break;

                case 3:
                    printf("\n");
                    multi();
                    getch();
                    goto calc;
                    break;

                case 4:
                    printf("\n");
                    div();
                    getch();
                    goto calc;
                    break;

                case 5:
                    goto top;
                    break;

                default:
                    printf("\nInvalid choice ");
                }
                break;

            case 2:
                cir:
                system("cls");
                printf("                                        \n");
                printf("  ***** Areas Of Different Objects *****\n");
                printf("  **   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~   **\n");
                printf("  **                                  **\n");
                printf("  **   1- Area of Circle              **\n");
                printf("  **   2- Area of Perimeter           **\n");
                printf("  **   3- Area of Rectangle           **\n");
                printf("  **   4- Circumference of Circle     **\n");
                printf("  **   5- Back to Main Menu           **\n");
                printf("  **                                  **\n");
                printf("  **************************************\n");
                printf("\n  Enter your Choice : ");
                scanf("%d",&ch);

                switch(ch)
                {
                case 1:
                    printf("\n");
                    area_of_circle();
                    getch();
                    goto cir;
                    break;

                case 2:
                    printf("\n");
                    area_of_Perimeter();
                    getch();
                    goto cir;
                    break;

                case 3:
                    printf("\n");
                    area_of_ract();
                    getch();
                    goto cir;
                    break;

                case 4:
                    printf("\n");
                    circum_of_circle();
                    getch();
                    goto cir;
                    break;

                case 5:
                    goto top;
                    break;

                default:
                    printf("Invalid Choice");
                }
            break;

            case 3:
                convr:
                system("cls");
                printf("                                                \n");
                printf("  ************ Conversion Functions ************\n");
                printf("  **          ~~~~~~~~~~~~~~~~~~~~~~          **\n");
                printf("  **                                          **\n");
                printf("  **   1- Bank Currency Converter             **\n");
                printf("  **   2- Convert number as Name of Day       **\n");
                printf("  **   3- Convert Character into ASCII Code   **\n");
                printf("  **   4- Show Month Conversion               **\n");
                printf("  **   5- Leap Year                           **\n");
                printf("  **   6- Back to Main Menu                   **\n");
                printf("  **                                          **\n");
                printf("  **********************************************\n");
                printf("\n  Enter your Choice : ");
                scanf("%d",&ch);

                switch(ch)
                {
                case 1:
                    printf("\n");
                    bank_rupees();
                    getch();
                    goto convr;
                    break;

                case 2:
                    printf("\n");
                    name_of_days();
                    getch();
                    goto convr;
                    break;

                case 3:
                    printf("\n");
                    ASCII();getch();
                    goto convr;
                    break;

                case 4:
                    printf("\n");
                    month_show();
                    getch();
                    goto convr;
                    break;

                case 5:
                    printf("\n");
                    leap_year();
                    getch();
                    goto convr;
                    break;

                case 6:
                    goto top;
                    break;

                default:
                    printf("Invalid Choice");
                }
            break;

            case 4:
                fun:
                system("cls");
                printf("                                           \n");
                printf("  ******* Special Combine Functions *******\n");
                printf("  **     ~~~~~~~~~~~~~~~~~~~~~~~~~~~     **\n");
                printf("  **                                     **\n");
                printf("  **   1- Electricity Bill               **\n");
                printf("  **   2- Either Positive or Negative    **\n");
                printf("  **   3- Is this character is Vowel     **\n");
                printf("  **   4- Back to Main Menu              **\n");
                printf("  **                                     **\n");
                printf("  *****************************************\n");
                printf("\n  Enter your Choice : ");
                scanf("%d",&ch);

                switch(ch)
                {
                case 1:
                    printf("\n");
                    light_bill();
                    getch();
                    goto fun;
                    break;

                case 2:
                    printf("\n");
                    positve_or_Negative();
                    getch();
                    goto fun;
                    break;

                case 3:
                    printf("\n");
                    vowel_or_not();
                    getch();
                    goto fun;
                    break;

                case 4:
                    goto top;
                    break;

                default:
                    printf("\nInvalid Choice ");
                }
                break;

            case 5:
                exit(1);

            default:
                printf("Invalid Choice");
        }
    getch();
    }
}
