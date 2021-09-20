/*
强制类型转换是把变量从一种类型转换为另一种数据类型。例如，如果您想存储一个long类型的值到一个简单的整型中，您需要把 long 类型强制转换为 int 类型。您可以使用强制类型转换运算符来把值显式地从一种类型转换为另一种类型，如下所示：
*/

#include <stdio.h>
 
int main()
{
   int sum = 17, count = 5;
   double mean;
 
   mean = (double)sum/count;
   printf("Value of mean : %f\n", mean);
}