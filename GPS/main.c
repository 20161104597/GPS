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
    char time1[3];
    char time2[5];
    char date[7];
    char speed[6];
    char height[5];
    int i;
    fp1=fopen("//Users//a20161104597//Desktop//GPS//GPS170510.log","r");
    while(fscanf(fp1,"%s%s",str1,str2)!=EOF)
    {
        printf("结果: %s\n%s\n",str1,str2);
        for(i=0;i<2;i++)
        {
            time1[i]=str1[i+7];
            time1[2]='\0';
        }
        for(i=0;i<4;i++)
        {
            time2[i]=str1[i+9];
            time2[4]='\0';
        }
        for(i=0;i<8;i++)
        {
            lat[i]=str1[i+16];
            lat[8]='\0';
        }
        for(i=0;i<9;i++)
        {
            lon[i]=str1[i+27];
            lon[9]='\0';
        }
        for(i=0;i<6;i++)
        {
            date[i]=str1[i+51];
            date[6]='\0';
        }
        for(i=0;i<5;i++)
        {
            speed[i]=str1[i+39];
            speed[5]='\0';
        }
        for(i=0;i<4;i++)
        {
            height[i]=str2[i+43];
            height[4]='\0';
        }
        printf("UTC日月年：%s\n",date);
        printf("UTC小时：%s\n",time1);
        printf("UTC分秒：%s\n",time2);
        printf("纬度:%s\n",lat);
        printf("经度:%s\n",lon);
        printf("速率:%s\n",speed);
        printf("海拔:%s\n",height);
    }
    fclose(fp1);
    return 0;
}
