//
//  heap_sort.cpp
//  Leetcode
//
//  Created by 唐向龙 on 16/4/9.
//  Copyright © 2016年 唐向龙. All rights reserved.
//

//#include <iostream>
//using namespace std;
//
//void heap_adjust_1(int a[], int i, int size)
//{
//    int lchild = 2*i+1;
//    int rchild = 2*i+2;
//    int max = i;
//    
//    if (i < size/2) {
//        if (lchild < size && a[lchild] > a[max]) {
//            max = lchild;
//        }
//        if (rchild < size && a[rchild] > a[max]) {
//            max = rchild;
//        }
//        if (max != i) {
//            int tmp = a[i];
//            a[i] = a[max];
//            a[max] = tmp;
//            
//            heap_adjust_1(a, max, size);
//        }
//    }
//}
//
//void build_heap_1(int a[], int size)
//{
//    int i;
//    for (i = size/2; i >= 0; i--) {
//        heap_adjust_1(a, i, size);
//    }
//}
//
//void heap_sort_1(int a[], int size)
//{
//    int i;
//    build_heap_1(a, size);
//    for (i = size-1; i >= 0; i--) {
//        int tmp = a[0];
//        a[0] = a[i];
//        a[i] = tmp;
//        
//        heap_adjust_1(a, 0, i-1);
//    }
//}
//
//void heap_adjust(int a[], int i, int size)
//{
//    int lchild = 2*i;
//    int rchild = 2*i+1;
//    int max = i;
//    
//    if (i <= size/2)
//    {
//        if (lchild <= size && a[lchild] > a[max])
//        {
//            max = lchild;
//        }
//        if (rchild <= size && a[rchild] > a[max])
//        {
//            max = rchild;
//        }
//        if (max != i) {
//            int tmp = a[i];
//            a[i] = a[max];
//            a[max] = tmp;
//            
//            heap_adjust(a, max, size);
//        }
//    }
//}
//
//void build_heap(int a[], int size)
//{
//    int i;
//    for (i = size/2; i>=1; i--)
//    {
//        heap_adjust(a, i, size);
//    }
//}
//
//void heap_sort(int a[], int size)
//{
//    int i;
//    build_heap(a, size);
//    for (i = size; i >= 1; i--)
//    {
//        int tmp = a[1];
//        a[1] = a[i];
//        a[i] = tmp;
//        
//        heap_adjust(a, 1, i-1);
//    }
//}
//
//
//int main(int argc, char *argv[])
//{
//    int a[6] = {0,1,4,2,7,6};
//    
//    heap_sort_1(a, 6);
//    
//    for (int i = 0; i < 6; ++i) {
//        cout<<a[i]<<endl;
//    }
//    
//    return 0;
//}