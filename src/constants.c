
/*
常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做字面量
常量可以是任何的基本数据类型，比如整数常量、浮点常量、字符常量，或字符串字面值，也有枚举常量
整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。
整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。后缀可以是大写，也可以是小写，U 和 L 的顺序任意。
*/
/*
以下是各种类型的整数常量的实例
85         十进制
0213       八进制
0x4b       十六进制
30         整数
30u        无符号整数
30l        长整数
30ul       无符号长整数
*/

/*
定义常量
在 C 中，有两种简单的定义常量的方式：

使用 #define 预处理器。
使用 const 关键字。
#define 预处理器
下面是使用 #define 预处理器定义常量的形式：
    #define identifier value
*/

#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;
    area = LENGTH * WIDTH;
    printf("value of area:%d",area);
    printf("%c",NEWLINE);
    return 0;
}