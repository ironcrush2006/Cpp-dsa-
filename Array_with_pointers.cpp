#include<iostream>  

void Array(){   
    //size of array
    int size=5;
    // array initailization
    int a[size];  
    //pointer 
    static int *p=&a[0]; 
    for(int i=0;i<size;i++){ 
       std::cin>>*p; 
    } 
    for(int i=0;i<size;i++){ 
      p++; 
      std::cout<<p<<"\n";
    }
} 

int main(){  
    Array();
    return 0 ; 

}