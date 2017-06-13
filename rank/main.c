//
//  main.c
//  rank
//
//  Created by 20161104567 on 17/6/13.
//  Copyright © 2017年 20161104567. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i,j,a;
    int f[10];
    printf("输入要排序的十个数字:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&f[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(f[i]>f[j])
            {
                a=f[i];
                f[i]=f[j];
                f[j]=a;
            }
        }
    }
    printf("排序为：");
    for(i=0;i<10;i++)
    {
        printf("%d ",f[i]);
    }
    return 0;
}
