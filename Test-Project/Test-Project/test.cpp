#include "pch.h"
#include "../Project1/main.h"

TEST(Solve_Max_ArraysTest, Test1) {
    CProject1 b;
    int Array_num = 5;
    int a[5] = { 1, -2, 3, -1, 2 };
    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 4);  // 期望结果为4
}

TEST(Solve_Max_ArraysTest, Test2) {
    CProject1 b;
    int Array_num = 3;
    int a[3] = { 1, 2, 3 };
    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 6);  // 期望结果为6
}

TEST(Solve_Max_ArraysTest, Test3) {
    CProject1 b;
    int Array_num = 4;
    int a[4] = { -1, -2, -3, -4 };
    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 0);  // 期望结果为0
}

TEST(Solve_Max_ArraysTest, Test4) {
    CProject1 b;
    int Array_num = 1;
    int a[1] = { 0 };

    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 0);  // 期望结果为0
}

TEST(Solve_Max_ArraysTest, Test5) {
    CProject1 b;
    int Array_num = 3;
    int a[3] = { 0, 0, 0 };

    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 0);  // 期望结果为0
}

TEST(Solve_Max_ArraysTest, Test6) {
    CProject1 b;
    int Array_num = 2;
    int a[2] = { 5, -5 };
    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 5);  // 期望结果为5
}

TEST(Solve_Max_ArraysTest, Test7) {
    CProject1 b;
    int Array_num = 6;
    int a[6] = { 1, -3, 2, 1, -1, 4 };
    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 6);  // 期望结果为6
}


TEST(Solve_Max_ArraysTest, Test8) {
    CProject1 b;
    int Array_num = 6;
    int a[6] = { -2, 11, -4, 13, -5, -2 };
    EXPECT_EQ(b.Solve_Max_Arrays(Array_num, a), 20);  // 期望结果为20
}