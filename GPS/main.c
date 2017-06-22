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
    char a;
    fp1=fopen("//Users//a20161104597//Desktop//GPS//GPS170510.log","r");
    while(fscanf(fp1,"%c",&a)!=',')
    {
        printf("%c",a);
    }
    return 0;
}

