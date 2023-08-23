#include<stdio.h>
int countspace(char s[]){
    int erg=0;
    int i;
    for(i=0; s[i]!='\0';i++){
        if(s[i]==' '){      
            erg++;
        }
    }
    return erg;
}
int countspaceZeiger(char s[]){
    int erg=0;
    while(*s++!='\0'){
        if(*s==' '){      
            erg++;
        }
    }
    return erg;
}
 

int main(){
    char probe[]="massa said c is an easy language";
    printf("countspace= %d \n",countspace(probe));
    printf("countspaceZeiger= %d \n",countspaceZeiger(probe));
    double feld[]={6.9,4.6,8.8,7.9,5.7,8.5,2.3};
    printf("minErg %.3f",min(feld,7));
    return 0;
}