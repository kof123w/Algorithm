#include "IterationLib.h"

//使用迭代法实现一个斐波那契数列
//斐波那契数列为1、1、2、3、5、8、13、21、34
//步骤1，建立数学模型
//步骤2，使用数学模型不断进行迭代得到新的变量
//步骤3，控制迭代得出结果
class IterationLib
{
public:
     //输出斐波那契数列第n个数
     int Fbnci(int n)
     {
          //建立数学模型，斐波那契数列的关系为a1=1,a2=2,an = an-1 + an - 2
          int a1 = 1,a2 = 1,an = a1 + a2;
          for(int i = 2;i < n;i++)
          {
               an = a1 + a2;
               a1 = a2;
               a2 = an;
          }

          return an;
     }
};