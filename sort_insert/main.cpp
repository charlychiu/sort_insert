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
    for(int i=0;i<num;++i)
    {
        int j=i+1;
        for(int k=0;k<i;++k)
        {
            if(array1[k]<=array1[i])
            {
                
                swap(array1[k],array1[i]);
                int temp=array1[i];
                for(int y=k;y<=i-2;++y)
                {
                    array1[y+2]=array1[y+1];
                }
                
                array1[k+1]=temp;
                
            }
            
        }
        
    }
    cout<<endl<<"sort_selection after:";
    for(int i=0;i<num;++i)
    {
        cout<<array1[i]<<" ";
    }
    
    return 0;
}
