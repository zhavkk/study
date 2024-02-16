#include <iostream>

#include <vector>
#include <algorithm>
#include <ctime>
#include <bits/stdc++.h>

int main(){// O(n^2) 
    int n;
    std::cin>>n;
    std::vector<int> array(n);
    auto begin = std::chrono::steady_clock::now();
    for(int i{0};i<n;++i){
        array[i]=std::rand()%1000 - std::rand()%1000;
    }
    //insertion sort :)))S))S)S
    for(int j{1};j<n;++j){
        int key=array[j];
        int i=j-1;
        while(i>=0 && array[i]>key){
            array[i+1]=array[i];
            i=i-1;
        }
        array[i+1]=key;
    }
    for(int elem : array){
        std::cout<<elem<<" ";
    }
    auto end = std::chrono::steady_clock::now();

    auto elapsed_ms=std::chrono::duration_cast<std::chrono::milliseconds>(end-begin);

    std::cout<<"runtime : "<<elapsed_ms.count()<<"ms\n";

}

