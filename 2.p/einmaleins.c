#include <stdio.h>

void einmaleins(int von , int bis){
    int array[10][(bis-von)+1];
    int x=von;
    
   for(int i=0; i<10; i++){
    int y=0;
    for(int j=0; j<(bis-von)+1; j++){
        array[i][j]=x+y;
printf(" %d ",array[i][j]);
        y=y+i+1;
    }
     printf("\n");
    x+=von;
   }
}

int  main(){
    int von;
    printf("bitte geben sie ein Startnummer");
    scanf(" %d",&von);
    int bis;
    printf("bitte geben sie ein endnummer");
    scanf(" %d",&bis);
    einmaleins(von,bis);

}