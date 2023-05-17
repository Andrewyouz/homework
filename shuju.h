//飞机大战数据设计
#include <iostream>

#define GAME_WIDTH 480
#define GAME_HEIGHT 852

int flag=0;//默认调用菜单界面
#define MENU_VIEW 0
#define GAME_VIEW 1
#define GAME_OVER 2
#define GAME_WIN 3
#define SET_VIEW 4
#define INT

#define EASY 0
#define NORMAL 1
#define HARD 2
enum difficulty{easy,normal,hard};
int difficulty=EASY;//默认难度为简单

int score=0;//默认分数为0

//飞机类声明，分为玩家飞机和敌机两个子类
class Plane{
    public:
        int x,y;//飞机坐标
        
        int speed;//飞机速度
        int HP;//飞机生命值
    private:
        int width,height;//飞机宽高

}
    
