#include <stdio.h>

//函数外定义变量 x和y
int x;
int y;

int add()
{
    //函数内声明变量x和y为外部变量
    extern int x;
    extern int y;

    //给外部变量（全局变量）x和y赋值
    x =1;
    y =2;
    return x+y;
}

int main()
{
    int result;
    result = add();
    printf("result:%d\n",result);
    return 0;
}