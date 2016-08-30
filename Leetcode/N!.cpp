//
//  N!.cpp
//  Leetcode
//
//  Created by 唐向龙 on 16/3/31.
//  Copyright © 2016年 唐向龙. All rights reserved.
//

//#include <stdio.h>
////求N!,递归实现
//int fun(int n)
//{
//    if (n < 0) {
//        return 0;
//    }
//    else if (n == 0 || n == 1) {
//        return 1;
//    }
//    else
//        return n*fun(n-1);
//}
////求N!，非递归实现
//int fun_s(int n)
//{
//    int sum = 1;
//    for (int i = n; i > 1; --i) {
//        sum *= i;
//    }
//    return sum;
//}