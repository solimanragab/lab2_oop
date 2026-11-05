#include<iostream>
using namespace std;
#include"../include/string.h"
int main(){

    char name[10]= "Soliman";
    char name2[10]= "Ragab";


    cout<<"\n===================UPPER=========================\n";
    upper(name);
    cout<<"\n===================LOWR=========================\n";
    lowr(name);
    cout<<"\n===================COPY=========================\n";
    char* ptr = stringCopy(name2);
    cout<< ptr;
    cout<<"\n===================LENGTH=========================\n";
    int len = lenght(name);
    cout<< len;
    cout<<"\n===================COMPARE=========================\n";

    stringCompare(name, name2);

    cout<<"\n===================CONVERT_2_BINARY=========================\n";
    convertToBinary(name2);
    
    cout<<"\n==================CONCAT==========================\n";

    char* ptrconcat = concat(name, name2);

    cout<< ptrconcat;

    cout<<"\n============================================\n";



    // char name3[10] =  {'a'};
    // name3 = stringCopy(name);

    // int num = 10;
    // int nums[3] = {1, 2, 3};
    
    // int* ptr = NULL;
    // cout<<"\n=================Before===========================\n";

    // cout<< ptr;


    // ptr = nums;
    // cout<<"\n===============After=============================\n";

    // cout<< ptr;
    // cout<<"\n";
    // cout<< *ptr;

    // cout<<"\n============================================\n";

    // upper(name);
    // cout<<"\n============================================\n";
    // lowr(name);
    // cout<<"\n============================================\n";
    // int len = lenght(name);
    // cout<< len;
    // cout<<"\n============================================\n";
    // stringCompare(name, name2);
    // cout<<"\n============================================\n";



    return 0;
/*
toUpper
toLower
string_compare (length, value)
string_copy

*/ 
}