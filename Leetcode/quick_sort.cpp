////
////  main.cpp
////  Leetcode
////
////  Created by 唐向龙 on 16/3/30.
////  Copyright © 2016年 唐向龙. All rights reserved.
////
//
//int sort(int a[], int low, int high)
//{
//    int tmp = a[low];
//    while (low < high)
//    {
//        while (a[high] >= tmp && low < high) {
//            high--;
//        }
//        
//        if (low < high) {
//            a[low] = a[high];
//            low++;
//        }
//        
//        while (a[low] <= tmp && low < high) {
//            low++;
//        }
//        
//        if (low < high) {
//            a[high] = tmp;
//            high--;
//        }
//    }
//    a[low] = tmp;
//    return low;
//}
//
//void quick_sort(int a[], int low, int high)
//{
//    int i = 0;
//    if (low < high) {
//        i = sort(a, low, high);
//        quick_sort(a, low, i-1);
//        quick_sort(a, i+1, high);
//    }
//}
//
//#include <iostream>
//using namespace std;
//int main(int argc, char *argv[])
//{
//    int a[5] = {1,4,2,5,6};
//    quick_sort(a, 0, 4);
//    
//    for (int i = 0; i < 5; ++i) {
//        cout<<a[i]<<endl;
//    }
//    
//    return 0;
//}