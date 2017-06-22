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

    FILE *fp1;
    char str1[65];
    char str2[65];
    char lat[9];
    char lon[10];
    int i,m;
    fp1=fopen("//Users//a20161104597//Desktop//GPS//GPS170510.log","r");
    fscanf(fp1,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
    {
    lat[i]=str1[i+16];
        lat[8]='\0';
    }
    for(m=0;m<9;m++)
    {
        lon[m]=str2[m+25];
        lon[9]='\0';
    }
    printf("纬度:%s\n",lat);
    printf("经度:%s\n",lon);
    fclose(fp1);
    return 0;
}

