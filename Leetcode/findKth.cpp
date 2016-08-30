//
//  findKth.cpp
//  Leetcode
//
//  Created by 唐向龙 on 16/4/1.
//  Copyright © 2016年 唐向龙. All rights reserved.
//

//[编程题]寻找第K大
//有一个整数数组，请你根据快速排序的思路，找出数组中第K大的数。
//给定一个整数数组a,同时给定它的大小n和要找的K(K在1到n之间)，请返回第K大的数，保证答案存在。
//测试样例：
//[1,3,5,2,2],5,3
//返回：2

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int sort(vector<int>& a, int low, int high);
//int find_K_th(vector<int>& a, int low, int high, int K);
//int findKth(vector<int> a, int size, int K);
//
//int my_sort(vector<int>& a, int low, int high)
//{
//    int pivot = a[low];
//    while (low < high)
//    {
//        while (a[high] <= pivot && low < high)
//        {
//            high--;
//        }
//        if (low < high) {
//            a[low] = a[high];
//            low++;
//        }
//        
//        while (a[low] >= pivot && low < high)
//        {
//            low ++;
//        }
//        if (low < high) {
//            a[high] = a[low];
//            high--;
//        }
//    }
//    a[low] = pivot;
//    return low;
//}
//
//int find_K_th(vector<int>& a, int low, int high, int K)
//{
//    if (low > high)
//    {
//        return a[low];
//    }
//    else
//    {
//        int mid = my_sort(a, low, high);
//        if (mid - low + 1 > K)
//        {
//            return find_K_th(a, low, mid-1, K);
//        }
//        else if(mid - low + 1 < K)
//        {
//            return find_K_th(a, mid+1, high, K-(mid-low+1));
//        }
//        else
//            return a[mid];
//    }
//}
//
//int findKth(vector<int> a, int size, int K)
//{
//    if (K > size)
//    {
//        cout<< "K is out of range!" <<endl;
//        return -1;
//    }
//    else
//    {
//        int low = 0; int high = size-1; int k = K;
//        return find_K_th(a, low, high, k);
//    }
//}
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    
//    vector<int> a;
//    for (int i = 0; i < 10; ++i) {
//        int j = rand()%10;
//        a.push_back((j*2)+1);
//    }
//    for (int i = 0; i < 10; ++i) {
//        cout<< a[i] << " ";
//    }
//    cout << endl;
//    
//    int value = findKth(a, 10, 9);
//    
//    cout << "value: " << value <<endl;
//    
//    
//    return 0;
//}
