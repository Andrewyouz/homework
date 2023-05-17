#include<iostream>
#include<cstdio>
#include<graphics.h>
#include<stdlib.h>

//写一个菜单界面，鼠标点击选择对应的功能按钮，功能按钮是一个范围型按钮，点击范围内的任意一点都可以触发功能
int mian(){
    
    //接受鼠标消息
    //判断鼠标点击的位置是否在按钮范围内
    void mousepos(int &x,int &y);
    void mousepos(int &x,int &y){
        MOUSEMSG m;
        while(1){
            m=GetMouseMsg();//获取鼠标消息
            if(m.uMsg==WM_LBUTTONDOWN){//判断是否为鼠标左键按下
                x=m.x;//获取鼠标点击的x坐标
                y=m.y;
                break;
            }
        }
    }
   
}