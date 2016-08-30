//
//  开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号.
//  main.cpp
//  Leetcode
//
//  Created by 唐向龙 on 16/8/24.
//  Copyright © 2016年 唐向龙. All rights reserved.
//
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

class password{
public:
    string psw;
    
    password(string str){
        psw = str;
        len = (int)str.length();
        len_num = 0;
        len_lcase = 0;
        len_hcase = 0;
        len_other = 0;
    }
    
    bool t_len(){
        if (len <= 8)
            return false;
        else
            return true;
    }
    bool t_kinds(){
        t_find();
        vector<int> vflag;
        if (len_num >= 1)
            vflag.push_back(1);
        if (len_lcase >= 1)
            vflag.push_back(1);
        if (len_hcase >= 1)
            vflag.push_back(1);
        if (len_other >= 1)
            vflag.push_back(1);
        if ((int)vflag.size() >= 3)
            return true;
        else
            return false;
    }
    bool t_repeat(){
        pair<int, string> result = fd_rp_str_len(psw);
        if (result.first <= 1) {
            return true;
        }
        else if(result.first > 1 && (int)result.second.length() < 3){
            return true;
        }
        else
            return false;
    }
private:
    int len;
    int len_num;
    int len_lcase;
    int len_hcase;
    int len_other;
    void t_find(){
        int i = 0;
        len_num = 0; len_lcase = 0; len_hcase = 0; len_other = 0;
        for (; i < (int)psw.size(); ++i) {
            if (psw[i] >= 'a' && psw[i] <= 'z') {
                len_lcase++;
            }
            else if(psw[i] >= 'A' && psw[i] <= 'Z'){
                len_hcase++;
            }
            else if(psw[i] >= '0' && psw[i] <= '9'){
                len_num++;
            }
            else
                len_other++;
        }
    }
    
    //找出一个字符串中最长的连续重复子串
    pair<int, string> fd_rp_str_len(const string& str){
        vector<string> substrs;
        int maxcount = 1, count = 1;
        string substr;
        int i, len = (int)str.length();
        // add all the substr
        for (i = 0; i < len; ++i) {
            substrs.push_back(str.substr(i, len-i));
        }
        
        for (i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                count = 1;
                if (substrs[i].substr(0, j-i) ==  substrs[j].substr(0, j-i)) {
                    ++count;
                    for (int k = j+(j-i); k < len; k+=(j-i)) {
                        if (substrs[i].substr(0, j-i) == substrs[k].substr(0, j-i)) {
                            ++count;
                        }
                        else
                            break;
                    }
                    if (count > maxcount) {
                        maxcount = count;
                        substr = substrs[i].substr(0, j-i);
                    }
                }
            }
        }
        return make_pair(maxcount, substr);
    }
};

int main(int argc, char* argv[]){

    vector<password> vpsw;
    vpsw.clear();
    string str;
    while (cin>> str) {
        password pw(str);
        vpsw.push_back(pw);
    }
    vector<string> results;
    for (int i = 0; i < (int)vpsw.size(); ++i) {
        cout<<"t_len: "<<vpsw[i].t_len()<<" t_kinds: "<< vpsw[i].t_kinds()<<" t_repeat: "<<vpsw[i].t_repeat()<<endl;
        if (vpsw[i].t_len() && vpsw[i].t_kinds() && vpsw[i].t_repeat()) {
            results.push_back("OK");
        }else{
            results.push_back("NG");
        }
    }
    for (int i = 0; i < (int)results.size(); ++i) {
        cout<< results[i] <<endl;
    }
    
    return 0;
}