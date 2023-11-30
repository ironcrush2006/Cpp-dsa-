#include<iostream> 

void Insertion_of_values() {
    int a[50],size=5,pos,number; 
    std::cout<<"Enter the values :\n"; 
    for(int i=0;i<size;i++){ 
        std::cout<<"The value is ::"; 
        std::cin>>a[i];
    } 
    for(int i=0;i<size;i++){ 
        std::cout<<"The values in the array::"<<a[i]<<std::endl;
    }  
    std::cout<<"Enter the number to add::"; 
    std::cin>>number; 
    std::cout<<"Enter the position::"; 
    std::cin>>pos;
    for(int i=size-1;i>=pos-1;i--){ 
        a[i+1]=a[i];
    } 
    a[pos-1]=number; 
    size++; 
    for(int i=0;i<size;i++){ 
        std::cout<<a[i]<<std::endl;
    }
} 
int main(){  
    Insertion_of_values();

    return 0;
}
