#include<stdio.h>

int main()
{
    int num[10]={5,3,6,3,2,6,4,2,7,5}, uni[10];

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(uni[i]==num[j])
                num[i]=num[i];
        }
    }


    for(int i=0; i!=!NULL; i++)
    {
        printf("unique elements = %d\n", num[i]);
    }

    return 0;
}