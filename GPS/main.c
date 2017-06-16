//
//  main.c
//  GPS
//
//  Created by SantaClousJR on 17/6/16.
//  Copyright © 2017年 SantaClousJR. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i;
    FILE *fp1,*fp2;
char s[50];

fp1=fopen("//Users//a20161104597//Desktop//GPS//GPS170510.log","w");
fp2=fopen("//Users//a20161104597//Desktop//GPS//GPS170510.log//out.txt","r");
    for(i=0;i<50;i++)
    {
        fscanf(fp1,"%d",&s[i]);
    }
    fclose(fp1);
    return 0;
}
