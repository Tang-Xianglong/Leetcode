////
////  inherit.cpp
////  Leetcode
////
////  Created by 唐向龙 on 16/4/13.
////  Copyright © 2016年 唐向龙. All rights reserved.
////
//
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//template<typename T>
//struct tcontainer
//{
//    virtual void push(const T&) = 0;
//    virtual void pop() = 0;
//    virtual const T& begin() = 0;
//    virtual const T& end() = 0;
//    virtual size_t size() = 0;
//};
//
//template<typename T>
//struct tvector : public tcontainer<T>
//{
//    static const size_t _step = 100;
//    tvector()
//    {
//        _size = 0;
//        _cap = _step;
//        buf = 0;
//        re_capacity(_cap);
//    }
//    ~tvector()
//    {
//        free(buf);
//    }
//    void re_capacity(size_t s)
//    {
//        if (!buf) {
//            buf = (T*)malloc(sizeof(T) * s);
//        }
//        else
//            buf = (T*)realloc(buf, sizeof(T) * s);
//    }
//    virtual void push(const T& v)
//    {
//        if (_size >= _cap) {
//            re_capacity(_cap += _step);
//        }
//        buf[_size++] = v;
//    }
//    virtual void pop()
//    {
//        if (_size) {
//            _size--;
//        }
//    }
//    virtual const T& begin()
//    {
//        return buf[0];
//    }
//    virtual const T& end()
//    {
//        //        if (_size) {
//        return buf[_size-1];
//        //       }
//    }
//    virtual size_t size()
//    {
//        return _size;
//    }
//    const T& operator[](size_t i)
//    {
//        //        if (i >= 0 && i < _size) {
//        return buf[i];
//        //        }
//    }
//private:
//    size_t _size;
//    size_t _cap;
//    T* buf;
//};
//
//class A
//{
//public:
//    int data;
//    A():data(1)
//    {
//        cout<< "construct A..." <<endl;
//        cout<< data <<endl;
//    }
//    virtual void fun(){};
//};
//
//class C
//{
//public:
//    C(){cout<< "construct C..." <<endl;}
//    virtual void fun2(){};
//};
//
//class B:public C,public A
//{
//public:
//    int data;
//    B():data(3)
//    {
//        cout<< "construct B..." <<endl;
//        cout<< data <<endl;
//    }
//    virtual void fun()
//    {
//        cout<< "hello A" <<endl;
//    }
//    virtual void fun2()
//    {
//        cout<< "hello C" <<endl;
//    }
//};
//
//int main(int argc, char *argv[])
//{
//    A * p_a = new A;
//    C * p_c = new C;
//    B b;
//    p_a = &b;
//    p_c = &b;
//    p_a->fun();
//    p_c->fun2();
//    cout<< b.data <<endl;
//    cout<< b.A::data <<endl;
//    cout<< sizeof(A) <<endl;
//    cout<< sizeof(C) <<endl;
//    cout<< sizeof(B) <<endl;
//    return 0;
//}