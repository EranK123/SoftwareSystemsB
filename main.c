#include <stdio.h>
#include <my_mat.c>
#define n 10

int main()
{
    char x;
    int i = 1;
    int[n][n] m;
    while (i != 0)
    {
    scanf("%c", &x);
    if (x == 'A')
    {
        getMat(m);
    }
    if (x == 'B')
    {
        route(m);
    }
    if (x == 'C')
    {
        fastestRoute(m);
    }
    if(x == 'D')
    {
        i = 0;
    }
}
    
    return 0;
}