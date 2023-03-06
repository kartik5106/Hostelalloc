
#include<iostream>
#include<string>
using namespace std;
//checks the data base for THE STUDENTS DETAIL
int checker(string name , int roll){
    string p[10] = {"Vinay","Mallikarjun","Rohit","Manjunath","Kartik","Mukesh","Dhiram","Kashish","Smita"};
    int arr[100]={1,2,3,4,5,6,7,8,9};
    int c=0;
    for(int i =0;i<9;i++){
        if(name.compare(p[i])==0 && roll==arr[i]){
            c=1;
        }
    }
    if(c==1){
        return 1;
    }
    else{
        return 0;
    }
}
