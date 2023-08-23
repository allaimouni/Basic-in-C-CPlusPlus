#include <stdio.h>
#define MAX 2
int queue[MAX];
int size=0;
int ent=-1;
    int c=0;
void enqueue(int i){
    if(size<MAX ){
        queue[size++]=i;
        c++;
    }
    else if(size==MAX && ent>-1){
        size%=MAX;
        queue[size ++]=i;
        c++;
    }else if(size==MAX && ent==-1){
        
        queue[MAX-1]=i;
        
    }
}
int dequeue(){
    
    if(c==0){
        return -1;
    }
    else if(ent<size){
        c--;
        return queue[++ent];
        
    }else if(ent>=size){
        ent=-1;
        c--;
        return queue[++ent];
    }
    
}
int main()
{
 enqueue(1);
enqueue(2);
enqueue(2);
printf("%i ", dequeue());
enqueue(3);
printf("%i ", dequeue());
printf("%i ", dequeue());
printf("%i ", dequeue());
enqueue(4);
enqueue(5);
printf("%i ", dequeue());
printf("%i \n", dequeue());

    return 0;
}