////
////  queue by two stack.cpp
////  Leetcode
////
////  Created by 唐向龙 on 16/4/13.
////  Copyright © 2016年 唐向龙. All rights reserved.
////
//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//template <class T>
//class my_queue
//{
//public:
//    stack<T> s1;
//    stack<T> s2;
//    
//    void push(T &t)
//    {
//        s1.push(t);
//    }
//    
//    T front()
//    {
//        if (s2.empty())
//        {
//            if (s1.size() == 0)
//            {
//                throw;
//            }
//            while (!s1.empty())
//            {
//                s2.push(s1.top());
//                s1.pop();
//            }
//        }
//        return s2.top();
//    }
//    
//    void pop()
//    {
//        while (!s1.empty())
//        {
//            s2.push(s1.top());
//            s1.pop();
//        }
//        if (!s2.empty())
//        {
//            s2.pop();
//        }
//    }
//};
//
//int main(int argc, char *argv[])
//{
//    my_queue<int> mq;
//    int i;
//    for (i = 0; i < 10; ++i) {
//        mq.push(i);
//    }
//    for (i = 0; i < 10; ++i) {
//        cout<< mq.front() <<endl;
//        mq.pop();
//    }
//    return 0;
//}