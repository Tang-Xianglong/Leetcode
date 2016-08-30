//
//  record_wrong_files.cpp
//  Leetcode
//
//  Created by 唐向龙 on 16/8/24.
//  Copyright © 2016年 唐向龙. All rights reserved.
//
//  开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号.
//  main.cpp
//
/*
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

class Record{
public:
    string full_name;
    string file_name;
    string line;
    void split_str();
private:
    vector<string> split(string str, string pattern){
        string::size_type pos;
        vector<string> result;
        str += pattern; //拓展字符串以方便操作
        for (int i = 0; i < (int)str.size(); ++i) {
            pos = str.find(pattern, i); //查找
            if (pos < (int)str.size()) {
                string s = str.substr(i, pos-i);    //切割
                result.push_back(s);
                i = (int)pos+(int)pattern.size()-1;
            }
        }
        return result;
    }
};

void Record::split_str(){
    vector<string> results = split(file_name, "\\");
    if (results.size() >= 1) {
        string str = results[(int)results.size()-1];
        int len = (int)str.size();
        if (len <= 16) {
            full_name = results[(int)results.size()-1] + " " + line;
        }
        else{
            string sub_str = str.substr(len-16, 16);
            full_name = sub_str + " " + line;
        }
    }
}

int main(int argc, char* argv[]){
    map<string, int> records;
    Record record;
    map<string, int>::iterator it;
    while (cin>> record.file_name) {
        cin>> record.line;
        record.split_str();
        it = records.find(record.full_name);
        //if not exist
        if (it == records.end()) {
            records.insert(pair<string, int>(record.full_name, 1));
        }
        else{
            it->second++;
        }
    }
    
    it = records.begin();
    while (it != records.end()) {
        cout<< it->first << " " << it->second <<endl;
        it++;
    }
    
    return 0;
}
*/