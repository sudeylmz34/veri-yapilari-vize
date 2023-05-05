#include <stdio.h>
void merge(int list[],int n, int list2[],int n2,int merged[])
{
    int i=0, j=0, k=0;
    while(i<n && j<n2)
    {
        if(list[i] <= list2[j])
        {
            merged[k++] = list[i++];
        }
        else
        {
            merged[k++] = list2[i++];
        }
    }
    while(i<n)
    {
        merged[k++] = list[i++];
    }
    while(j<n2)
    {
        merged[k++] = list2[j++];
    }
}
int main()
{
    int list[] = {2,4,6,8,10};
    int n[] = sizeof(list) / sizeof(list[0]);
    int list2[] = {1,3,5,7,9};
    int n2[] = sizeof(list2) / sizeof(list2[0]);
    int mergerd[n+n2];
    merge(list,n,list2,n2,merged);
    printf("Birleştirilmiş Dizi: ");
    for(int i=0;i<n + n2; i++)
    {
        printf("%d ",merged[i]);
    }
    return 0;
}