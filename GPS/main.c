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
    char lat1[9];
    char lat2[10];
    int i,m;
    fp1=fopen("//Users//a20161104597//Desktop//GPS//GPS170510.log","r");
    fscanf(fp1,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
    {
    lat1[i]=str1[i+16];
        lat1[8]='\0';
    }
    for(m=0;m<9;m++)
    {
        lat2[m]=str2[m+25];
        lat2[9]='\n';
    }
    printf("纬度:%s\n",lat1);
    printf("经度:%s\n",lat2);
    fclose(fp1);
    return 0;
}
