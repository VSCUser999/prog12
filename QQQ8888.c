#include <stdio.h>

int Func(int);

int main (void){
    int n1,n2, m,iTemp;
    scanf("%d %d",&n1,&n2);
    if(n1 > n2){
        iTemp = n2;
        n2 = n1;
        n1 = iTemp;
    }

    while(n1 <= n2){
        printf("%d-----\n",n1);
        m = Func(n1);
        if (m == 0) printf("No\n");
        n1++;
    }
}

int Func(int x){

    int a,b,c,d,i,j;
    a = 1; b = 0;

    for(i = 1;i < x; i++)
    {
        a = 0;
        for(j = i;j <= x;j++)
        {
            a = a + j;
            if (a == x) {
                c = i; d = j;
                while(c <= d){

                    printf("%d", c);

                    if(c != d)
                        printf("+");
                    else 
                        printf("\n");

                    c++;
                }
                b = 1;
            }
        }

    }

    if (b == 1)
        return 1;
    else
        return 0;
}