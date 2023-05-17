//计算输入文中各个单词的长度
// Created by apple on 2021/5/11.
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i=0;
    int count=0;
    gets(str);
    while(str[i]!='\0'){
        if(str[i]!=' '){
            count++;
        }else{
            printf("%d ",count);
            count=0;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}