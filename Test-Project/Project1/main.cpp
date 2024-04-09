// Project1.cpp : 定义 DLL 的导出函数。
//
#include <iostream>
#include "framework.h"
#include "main.h"

using namespace std;


// 这是导出变量的一个示例
PROJECT1_API int nProject1 = 0;

// 这是导出函数的一个示例。
PROJECT1_API int fnProject1(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CProject1::CProject1()
{
    return;
}


int CProject1::Solve_Max_Arrays(int Array_num, int a[])
{
    int  Answer = 0, MaxSuffixValue = 0;
    for (int i = 0; i < Array_num; i++)
    {
        if (MaxSuffixValue < 0)
        {
            MaxSuffixValue = 0;
        }
        MaxSuffixValue += a[i];
        if (Answer < MaxSuffixValue)
        {
            Answer = MaxSuffixValue;
        }
    }
    return Answer;
}