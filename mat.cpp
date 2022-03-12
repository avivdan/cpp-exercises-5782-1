
#include <iostream>
#include <math.h> 
#include "mat.hpp" 
#include <string>
#include <stdexcept>
#include <bits/stdc++.h>


//row and col always odd
using namespace std;

namespace ariel{
    std::string mat(int cols, int rows, char a, char b) {
        if (rows % 2 == 0 ||cols % 2 == 0 ){
            throw std::out_of_range("both must be odd");
        }
        if(cols <= 0 || rows <= 0){
            throw std::out_of_range("cant accept negetive numbers or 0");
        }
        std::unordered_set<char> s = {'\n', '\r', '\t', ' '};
        if(s.find(a) != s.end() || s.find(b) != s.end()){
            throw std::out_of_range("cannot be spacing charecters");
        }
        const int minChar = 33;
        const int maxChar = 126;
        if(a < char(minChar) || b < char(minChar)|| a > char(maxChar) || b > char(maxChar)){
            throw std::out_of_range("must be ascii");
        }
        vector<vector<int>> mat( rows , vector<int> (cols, 0));
        for(int st = 0;st < (int)(std::min(rows, cols)/2 + 1); st++){
            for(int i = st; i < rows-st; i++){
                for(int j = st; j < cols-st; j++){
                    if(st%2 == 0){
                        mat[i][j] = (unsigned char)a;
                    }else{
                        mat[i][j] = (unsigned char)b;
                    }
                }
            }
        }
        string str;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                str.push_back(mat[i][j]);
            }
            if(i<rows-1){
                str.push_back('\n');
            }
        }
        return str;
    }
}




