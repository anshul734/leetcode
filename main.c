//
//  main.c
//  two sums through hash
//
//  Created by ANSHUL SHUKLA on 18/11/19.
//  Copyright © 2019 ANSHUL SHUKLA. All rights reserved.
//

#include <stdio.h>

struct pair {
    int value;
    int key;
};
int main()
{
    int i,n,t;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("enter the target element\n");
    scanf("%d",&t);
    struct pair hash_table[t];
    for(i=0;i<n;i++)
    {
        if (arr[i]<t){
            int temp=t-arr[i];
            hash_table[temp].key=temp;
            hash_table[temp].value=i;
            if(arr[i]==hash_table[arr[i]].key)
            {
                printf("%d %d",i,hash_table[arr[i]].value);
                break;
            }
            
        }
    }
   
}
