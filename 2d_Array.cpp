#include<iostream>  
//for two array
void Two_D_array(){   
    //initalize the 2d array
    int a[2][3]={{1,2,3},{4,5,6}};  
    //for loop for rows
    for(int i=0;i<2;i++){ 
        //for loop for column
        for(int j=0;j<3;j++){ 
            std::cout<<a[i][j]<<"\n";
        }
    }
   
} 

int main(){  
    //function call
    Two_D_array(); 
    return 0; 
}