#include <iostream>
#include "..\include\test02.h"
#include "..\include\MyClass.h"
#include <Windows.h>
using namespace std;


int main(int argc, char const *argv[])
{
    SetConsoleOutputCP(CP_UTF8);
    int s=sum(10,20);
    cout<<s<<endl;
    std::vector<int> vet;
    for(int i=0;i<100;i++){
        vet.push_back(i*i);
    }
    float a=avg(vet);
    
    return 0;
}
