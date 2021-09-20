#include <stdio.h>

//如果需要在一个源文件中引用另外一个源文件中定义的变量，我们只需在引用的文件中将变量加上 extern 关键字的声明即可

/*外部变量声明*/
extern int x;
extern int y;

int add()
{
    return x+y;
}