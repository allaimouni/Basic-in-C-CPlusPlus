#include<stdio.h>
char to_upper_case(char c){
     if(c>='a'&& c=<'z'){
    return c-32;
     }
     return c<
}
void upper(char text[]){
    int i=0;
    while(text[i]!='\0'){
       
            text[i]=to_upper_case(text[i]);
       
        i++;
    }
}


int main(){
    char t[]="HaLLo w-orld";
    upper(t);
    printf("%s",t);
}
