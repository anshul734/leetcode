//
//  main.c
//  longest palindrome srting
//
//  Created by ANSHUL SHUKLA on 01/11/19.
//  Copyright © 2019 ANSHUL SHUKLA. All rights reserved.
//

#include <stdio.h>
void palindrome(int,int,int*,int*,char*,int*);
int main()
{
    printf("enter a string\n");
    int max =0,i,k=0;
    char a[1000];
    scanf("%s",a);
    int n=strlen(a);
    int b1=0,f1=0,j=0;
    for( i=0;i<n;i++)
    {
        j=i+1;
        if(a[i]!=a[j])
            j=i;
        palindrome(i,j,&b1,&f1,a,&max);
        }
    for(i=0;i<n;i++)
    {
        j=i+1;
        if(a[i]==a[j]){
            k=1;break;}
    }
    if(max==0&&k==1)
    {
        b1=1;
        if(a[2]==a[3])
            f1=3;
        else
            f1=2;
    }
    
    for( i=b1;i<=f1;i++)
    {
        printf("%c",a[i]);
    }
    
}
void palindrome(int i,int j,int* b1,int* f1,char a[],int *max)
{
    int b=i-1,f=j+1;
    int count=0;
    while((a[f]!='\0'||b>0)&&(a[f]==a[b]))
    {
        count++;
        b--;
        f++;
    }
    int l=0;
    if(count>0)
    {
        if(i!=j)
            l=count*2+2;
        else
            l=count*2+1;
        if(l>*max)
        {
            *max=l;
            *f1=f-1;
            *b1=b+1;
    }
     
        
        count=0;
}
}
