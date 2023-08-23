#include <stdio.h>

void ascii(int s)
{
     int a=32;
        int feld[94/s][s];;
        
        for(int i=0; i<=94/s;i++){
            for(int j=0; j<s; j++){
                feld[i][j]=a;
                printf("%d",feld[i][j]);
                if(j+1<=s){
                    feld[i][j+1]=(char)a;
                      printf("%c",feld[i][j]);
                }
                if(a<127){
                a++;
                }else{
                    break;
                }
            }
            printf("\n");
        }
}
int main()
{
    ascii(10);
}