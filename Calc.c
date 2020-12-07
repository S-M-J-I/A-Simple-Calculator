#include<stdio.h>
int main()

{
    int inp[999], reply, i, sum=0, mul=1, div, sub1=0;
    char choice, name[30];
    printf("JISHAN'S CALCULATOR:\n\n\n");
    printf("Name: ");
    gets(name);
    printf("\a");


    printf("%s, please select your choice:\n\na-ADDITION\tb-SUBTRACTION\tc-MULTIPLICATION\td-DIVISION\n", name);
    scanf("%c", &choice);

    printf("How many numbers do you want to use: (for division you can only use two numbers)\a");
    scanf("%d", &reply);

    printf("Enter them: \a");
    for(i=0; i<reply; i++)
    {
        scanf("%d", &inp[i]);

    }

    switch(choice)
    {
    case 'a':
    {
        printf("Their sum is: ");
        for (i=0; i<reply; i++)
        {
            sum = sum + inp[i];
        }

        printf("%d\a", sum);
        break;
    }
    case 'b':
    {
        printf("Their subtraction is: ");
        for (i=0; i<reply; i++)
        {


            sub1 = sub1 - inp[i];
            if(i==0)
            {
                sub1 = -1*sub1;
            }

        }


        printf("%d\a", sub1);
        break;
    }
    case 'c':
    {
        printf("Their product is: ");
        for (i=0; i<reply; i++)
        {
            mul = mul * inp[i];
        }

        printf("%d\a", mul);
        break;
    }

    case 'd':
    {
        printf("Their division  is: ");
        for (i=0; i<2; i++)
        {
            div = inp[i]/inp[i+=1];
        }

        printf("%d\a", div);
        break;
    }

    default:
    {
        printf("error\a\a\a");
        break;
    }
    }












}



