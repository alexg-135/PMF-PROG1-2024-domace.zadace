#include <stdio.h>

// Napi�ite program koji u�itava cijeli broj n,
// te ispisuje sumu svih prostih djelitelja
// (uva�avaju�i kratnost) svih cijelih brojeva
// razli�itih od nule koji se nalaze izme�u n i -3
// (uklju�ivo).

int abs(int n)
{
    if(n < 0){
        return -n;
    }
    return n;
}

int min(int n1,int n2)
{
    if(n1 <= n2)
    {
        return n1;
    }
    return n2;
}

int max(int n1,int n2)
{
    if(n1 >= n2)
    {
        return n1;
    }
    return n2;
}

int sump(int n)
{
    int sum = 0;
    int f = 2;
    n = abs(n);

    while (n > 1)
    {
        while (n % f == 0)
        {
            sum += f;
            n /= f;
        }
        if(n*n<=f) break;
        f++;
    }
    return sum;
}

int main()
{
    int n, start, end, sum, i;

    scanf("%d", &n);
    start = min(n, -3);
    end = max(n,-3);
    sum = 0;

    for(i = start;i <= end;i++)
    {
        if(i == 0) continue;
        sum += sump(i);

    }
    printf("%d", sum);
    return 0;
}
