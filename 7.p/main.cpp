#include"linkedList.h"
#include<iostream>
#include<string.h>
void doit(const char* t){
    std::cout<<strlen(t)<<std::endl;
}
int main(){
    linkedList a{};
    
   
    std::cout<<a.append("erste")<<std::endl;
    std::cout<<a.append("dritte")<<std::endl;
    std::cout<<a.insert("zweite",1)<<std::endl;
   // std::cout<<a.remove(1)<<std::endl;
   //std::cout<<a.get(0)<<" get"<<std::endl;
   //std::cout<<a.get(5)<<" ge"<<std::endl;
   //std::cout<<a.index_of("zweite")<<" index_of"<<std::endl;
   std::cout<<a.first()<<" first"<<std::endl;
   std::cout<<a.last()<<" last"<<std::endl;
   a.visit_all(&doit);
     a.printlist();
}