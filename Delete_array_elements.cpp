#include<iostream>  
#include<array>
//don't use negative output if you want use if(){}

void Delete_Elements() {
   std::array<int,50>a={6,2,0,4,5}; 
   int pos=3 ,size=5;
   for(int i =pos-1;i<size-1;i++){ 
      a[i]=a[i+1];
   } 
   size--;  
//Array after deleting the values
   for(int i=0;i<size;i++){ 
    std::cout<<a[i]<<std::endl;
   }
} 

int main(){ 
    Delete_Elements();
}