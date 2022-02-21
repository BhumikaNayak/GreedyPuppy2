#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    int Noofcoin,Kpeople,maximum,i; //declaration of variables
    
    while(Testcases--)
    {
        scanf("%d %d",&Noofcoin,&Kpeople);
        fflush(stdin);
        maximum=0;
        
        for(i=1;i<=Kpeople;i++)
        {
            if(Noofcoin%i>maximum)
            {
                maximum=Noofcoin%i;
            }
        }
        printf("%d\n",maximum);
        
    }
    return 0;
}
//code by bhumika nayak