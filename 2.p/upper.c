#include<stdio.h>

void to_uppper_case(char feld[]){
    for(int i=0; feld[i]!='\0';i++){
        if(feld[i]>'a'&&feld[i]<'z'){
            feld[i]=feld[i]-32;
        }
    }

    printf("%s",feld);
}

int main(){
    char f[]="HALLO world";
    to_uppper_case(f);
}