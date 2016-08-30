////
////  swap.cpp
////  Leetcode
////
////  Created by 唐向龙 on 16/3/30.
////  Copyright © 2016年 唐向龙. All rights reserved.
////
//void swap2(int &p, int &q)
//{
//    int tmp;
//    tmp = p;
//    p = q;
//    q = tmp;
//}
//
//void swap3(int *p, int *q)
//{
//    int tmp;
//    tmp = *p;
//    *p = *q;
//    *q = tmp;
//}
//
//
//测试继承中，虚函数占的内存大小
//
//class A
//{
//    virtual void f1(){}
//    virtual void f2(){}
//    void f(){}
//};
//class B
//{
//    virtual void f1(){}
//    //   virtual void f2(){}
//};
//class C : public A, public B{};
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    
//    int a[]={1,2,3,4};
//    cout << sizeof(a) <<endl;
//    cout<< sizeof(a[0]) <<endl;
//    
//    cout<<sizeof(C) <<endl;
//    char *q = "c";
//    cout<< sizeof(q) <<endl;
//    int *p = a;
//    cout<< sizeof(p) <<endl;
//    cout<< sizeof(*p) <<endl;
