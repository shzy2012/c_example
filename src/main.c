#include <stdio.h>
#include <float.h>
 
int main()
{
    /* 我的第一个 C 程序 */
    printf("int 存储大小:%lu \n",sizeof(int));
    printf("float 存储最大字节数:%lu \n",sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );
 
    return 0;
}