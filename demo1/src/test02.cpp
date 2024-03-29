#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <iterator> // 为了 std::begin 和 std::end  


int  sum(int x,int y){
    return (x+y);
}
enum Color {  
    RED,  
    GREEN,  
    BLUE  
};

float avg(std::vector<int>& vet){
    int sum=0;
    for (int i = 0; i < vet.size(); i++)
    {
        sum+=vet[i];
        /* code */
    }
    
    return sum / vet.size();
    
}

int sum_all(std::vector<int>& vet){
    int sum0=0;
    for(int i=0;i<vet.size();i++){
        sum0+=vet[i];
    }
    return sum0
}


void func(int num, std::vector<std::vector<int>>& vec){
    std::vector<int> v1;
    for(int i=0;i<m;i++){
        v1.push_back(pow(i,2));
    }
    vec.push_back(v1);
}


void modifyVector(std::vector<int>& vec, int n) {  
    // 假设我们想在 vector 的末尾添加 n 个元素，每个元素的值都是 n  
    for (int i = 0; i < n; ++i) {  
        vec.push_back(n);  
    }  
    // 因为 vec 是通过引用传递的，所以修改会反映到调用者的 vector 上  
}  



template <typename T>
void printVector1(const std::vector<T>& vec){

    for (const auto& element : vec)
    {
        std::cout<< element<<" "<<std::endl;
        /* code */
    }
    std::cout << std::endl;  
}

template <typename T>  
void printVector(const std::vector<T>& vec) {  
    for (const auto& element : vec) {  
        std::cout << element << " ";  
    }  
    std::cout << std::endl;
}  



void  getFiles(std::vector<std::string>& vecFiles,std::string path){
    

}