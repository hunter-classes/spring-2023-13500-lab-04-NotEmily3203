#include <iostream>
#include "checkerboard3x3.h"
std::string checkerboard3x3(int width, int height){
    std::string temp;
    std::string keys[2];
    std::string result;
    int row_count = width;
    while(row_count>0){
        for(int i=0;i<3;i++){
            temp+="*";
            row_count-=1;
        }
        if(row_count<=0){
            break;
        }
        for(int j=0;j<3;j++){
            temp+=" ";
            row_count-=1;
        }
    }
    keys[0]=temp;
    temp="";
    row_count = width;
    while(row_count>0){
        for(int i=0;i<3;i++){
            temp+=" ";
            row_count-=1;
        }
        if(row_count<=0){
            break;
        }
        for(int j=0;j<3;j++){
            temp+="*";
            row_count-=1;
        }
    }
    keys[1]=temp;
    while(height>0){
        for(int k=0;k<3;k++){
            result+=keys[0];
            result+="\n";
            height-=1;
        }
        for(int k=0;k<3;k++){
            result+=keys[1];
            result+="\n";
            height-=1;
        }
    }
    return result;
}