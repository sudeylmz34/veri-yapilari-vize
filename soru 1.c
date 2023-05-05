#include <stdio.h>
int main()
{
    int list[] = {3,4,6,8,3,6,9};
    int n = sizeof(list) / sizeof(list[0]);
    int frek[n];
    for(int i=0; i<n; i++)
    {
        frek[i]=0;
    }
    for(it i=0; i<n; i++)
    {
        frek[list[i]-1]++;
    }
    for(int i=0; i<n; i++)
    {
        if(frek[i]>0)
        {
            printf("%d adet %d \n",frek[i],i+1);
        }
    }
    return 0;
}