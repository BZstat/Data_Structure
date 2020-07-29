#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int left = *(int *)a;
    int right = *(int *)b;
    
    if(left < right)
        return -1;
    
    if(left > right)
        return 1;
    
    return 0;
}


int BinarySearch(int x[], int len, int target)
{
    int start = 0;
    int last = len-1;
    int mid;
    
    while(start <= last)
    {
        mid = (start+last)/2;
        if(target == x[mid])
        {
            return 1;
        }
        else
        {
            if(target <= x[mid])
                last = mid-1;
            else
                start = mid+1;
        }
    }
    return 0;
}

int main(void)
{
    int N, M, num[100000], array[1000000];
    printf("the number of values\n");
    scanf("%d",&N);
    int i, j;
    printf("insert the values\n");
    for(i=0; i<N ; i++){
        scanf("%d",&array[i]);
    }
    qsort(array,N,sizeof(int),compare);
    printf("the number of targets\n");
    scanf("%d", &M);
    for(j=0; j<M; j++){
        scanf("%d",&num[j]);
        num[j] = BinarySearch(array,N,num[j]);
    }
    for(j=0; j<M; j++)
        printf("%d\n",num[j]);
    return 0;
}

