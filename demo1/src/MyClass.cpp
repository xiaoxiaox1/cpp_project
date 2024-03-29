#include "../include/MyClass.h"
#include <iostream>

MyClass::MyClass(std::string name,int id,int agent){
   this->name=name;
   this->agent=agent;
   this->id=id;
}
void MyClass::print_class(){
   std::cout<<this->name<<std::endl;
   std::cout<<this->agent<<std::endl;
   std::cout<<this->id<<std::endl;
}
