/*************************************************************************
	> File Name: 2.c
	> Author: songrunxian 
	> Mail: 13359850710@163.com 
	> Created Time: Thu 23 May 2019 06:39:24 AM PDT
 ************************************************************************/

#include <stdio.h> 
int main () {
    int year;
    while(~scanf)
    scanf("%d", &year);
    if(!(year % 4) && (year % 100)) {
        printf("leepyear\n");
    }else if(!(year % 400)) {
        printf("leapyear\n");
    }else {
        printf("not leap year\n");
    }
    return 0;
}
