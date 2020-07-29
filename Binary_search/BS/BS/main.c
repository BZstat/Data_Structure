//
//  main.c
//  Binary search
//
//  Created by 윤석영 on 2020/07/28.
//  Copyright © 2020 윤석영. All rights reserved.
//

#include <stdio.h>

int BS(int x[], int len, int a)
{
    int first = 0;
    int last = len-1;
    int mid;
    
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a==x[mid])
        {
            return mid;
        }
        else if (a <x[mid])
        {
            last = mid-1;
        }
        else
        {
            first = mid+1;
        }
    }
    return -1;
}



int main(void) {
    int x[]={1,2,3,7,9,12,21,23,27};
    int index;
    index = BS(x,sizeof(x)/sizeof(int),9);
    printf("타겟 저장 인덱스: %d\n", index);
    return 0;
}
