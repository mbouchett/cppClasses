/* 
 * File:   IntToStr.h
 * Author: mark
 *
 * Created on August 17, 2017, 12:22 PM
 * converts an integer to a string
 */

#ifndef INTTOSTR_H
#define INTTOSTR_H
#include <string>   // string handler
#include <sstream>  // for string streams
class IntToStr{
private:
    std::stringstream str;
    std::string myNumber;
    void clear(){
        str.str("");
        str.clear();
    }
    
public:
    IntToStr(){ clear(); }
    std::string to_string(int i){
        clear();
        str << i;
        return str.str();
    }
};

#endif /* INTTOSTR_H */

