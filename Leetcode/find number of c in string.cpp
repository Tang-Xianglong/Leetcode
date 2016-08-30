//
//  main.cpp
//  Leetcode
//
//  Created by 唐向龙 on 16/3/30.
//  Copyright © 2016年 唐向龙. All rights reserved.
//

//计算字符个数
//参与人数：1226时间限制：1秒空间限制：32768K
//本题知识点： 字符串
//算法知识视频讲解
//题目描述
//
//写出一个程序，接受一个有字母和数字以及空格组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
//
//输入描述:
//输入一个有字母和数字以及空格组成的字符串，和一个字符。
//
//
//输出描述:
//输出输入字符串中含有该字符的个数。
//
//输入例子:
//ABCDEF
//A
//
//输出例子:
//1

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    
//    char str[1000];
//    char key;
//    cin.getline(str, 1000);
//    cin>> key;
//    int len = (int)strlen(str);
//    int count = 0;
//    while (len >= 0) {
//        if (key >= 'a') {
//            if (str[len] == key || str[len] == key-32) {    //小写转大写，直接减数字
//                count++;
//            }
//        }
//        else if (key <= 'a') {
//            if (str[len] == key || str[len] == key+32) {
//                count++;
//            }
//        }
//        len--;
//    }
//    cout<< count <<endl;
//    return 0;
//}