#include<stdio.h>

#include"math.h"

void dual(int x){
    int erg[8];
    int i=8;
    if(x>0){
        while(x>0){
        erg[--i]=x%2;
        x/=2;
        
        }
        for(int i=0; i<8; i++){
            printf("%d ",erg[i]);
        }
    }
}
int main(){
    dual(128);
}