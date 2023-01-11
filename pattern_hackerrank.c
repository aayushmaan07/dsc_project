#include <stdio.h>

int main()
{
        for(int i=1;i<=6;i++)
        {
                for(int j=6;j>=1;j--)
                {
                        if(j>i)
                        {
                                printf(" ");
                        }
                        else if(j<=i)
                        {
                                printf("H");
                        }
                }
                for(int k=2;k<=6;k++)
                {
                        if(i>=k)
                        {
                                printf("H");
                        }
                }
                printf("\n");
        }
        for (int i=1;i<=8;i++)
        {
                for(int j=1;j<=3;j++)
                {
                        printf(" ");
                }
                for(int j=1;j<=5;j++)
                {
                        printf("H");
                }
                for(int k=1;k<=20;k++)        //gap
                {
                        printf(" ");
                }
                for(int j=1;j<=5;j++)
                {
                        printf("H");
                }
                printf("\n");
        }
        for(int i=1;i<=3;i++)
        {
                for(int j=1;j<=3;j++)
                {
                        printf(" ");
                }
                for(int j=0;j<=29;j++)       //gap
                {
                        printf("H");
                }
                printf("\n");
        }
        for (int i=1;i<=8;i++)
        {
                for(int j=1;j<=3;j++)
                {
                        printf(" ");
                }
                for(int j=1;j<=5;j++)
                {
                        printf("H");
                }
                for(int k=1;k<=20;k++)      //gap
                {
                        printf(" ");
                }
                for(int j=1;j<=5;j++)
                {
                        printf("H");
                }
                printf("\n");
        }
        int gap=25;     //gap
        int h=11;
        for(int i=1;i<=7;i++)
        {
                for(int j=1;j<=gap;j++)
                {
                        printf(" ");
                }
                for(int j=1;j<=h;j++)
                {
                        printf("H");
                }
                printf("\n");
                gap++;
                h=h-2;
        }
        return 0;
}