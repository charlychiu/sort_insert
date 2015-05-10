//
//  main.cpp
//  sort_insert
//
//  Created by charlychiu on 2015/5/10.
//  Copyright (c) 2015年 charlychiu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    int array1[999]={0};
    cout<<"type how many num of number:"<<endl;
    cin>>num;
    cout<<"key the each number in"<<endl;
    
    for(int i=0;i<num;++i)
    {
        cin>>array1[i];
    }
    cout<<"sort_selection before:";
    for(int i=0;i<num;++i)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
    //start sort.....
    for(int right=0;right<num;++right)
    {
        for(int k=0;k<right;++k)
        {
            if(array1[k]<array1[right])
            {
                
                //ed1
                int temp=array1[right];
                for(int e=right-1;e>=k;e--)
                {
                    array1[e+1]=array1[e];
                }
                array1[k]=temp;
                
                ///ed1
                for(int i=0;i<num;++i)
                {
                    cout<<array1[i]<<" ";
                }
                cout<<endl;
                
                
            }
            
        }
        
    }
    //end sort
    cout<<endl<<"sort_selection after:";
    for(int i=0;i<num;++i)
    {
        cout<<array1[i]<<" ";
    }
    
    return 0;
}
