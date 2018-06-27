//
//  main.c
//  6.27
//
//  Created by 周世婧 on 18/6/27.
//  Copyright © 2018年 周世婧. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i;
    int a[5];
    int sum=0;
    int max,min;
    double average,l;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            max=a[0];
            min=a[0];
        }
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
        sum=sum+a[i];
    }
    l=sum-max-min;
    average=l/3;
    printf("%.2lf\n",average);
    return 0;
}
