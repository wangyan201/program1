#include <stdio.h>

int main()
{
    int m,n,r;
    printf("m: ");
    scanf("%d",&m);
    printf("n: ");
    scanf("%d",&n);
    r = m * n;
    while( m != n )
    {
        if ( m > n )
        {
            m = m - n;
        }
        else
            n = n - m;
    }
    r = r / m;
    printf("%d",r);
    getchar();
    getchar();
    return 0;
}
