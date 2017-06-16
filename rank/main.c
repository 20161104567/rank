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
    FILE *fr;
    FILE *fw;
    int i,j,a;
    int f[10];
    fr=fopen("//Users//a20161104567//Desktop//rank//input.txt","r+");
    fw=fopen("//Users//a20161104567//Desktop//rank//output.txt","w+");
    if(fr==NULL)
    {
        printf("打开文件错误，您打开的文件可能不存在\n");
    }
    else
    {
        for(i=0;i<10;i++)
        {
            fscanf(fr,"%d",&f[i]);
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
        fprintf(fw,"排序为：");
        for(i=0;i<10;i++)
        {
            printf("%d ",f[i]);
            fprintf(fw,"%d ",f[i]);
        }
        printf("\n");
        fclose(fr);
        fclose(fw);
    }
    return 0;
}
