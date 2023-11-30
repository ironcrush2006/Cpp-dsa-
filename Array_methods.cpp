#include<iostream> 
#include<array>//header file for array accessed only >C++11
 
//traversal of array 
void Traversal_array(){ 
       std::array<int,5>array;   
  //range-based for loop  
   for(int ar:array){  
    std::cout<<"\nThe input :\n";
    std::cin>>ar; 
    std::cout<<"the values are:"<<ar<<' '<<std::endl;
   }

}

int main(){  
    Traversal_array();
 return 0;
}