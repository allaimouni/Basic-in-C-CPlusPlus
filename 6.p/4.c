#include<stdio.h>

double fakul(int f){
    double erg=1;
    for(int i=f;i>0;i--){
        erg*=i;
    }
    return erg;
}

double binomialkoffezient(int n,int k){
    if(n>k || n==k){
    return ( fakul(n)/(fakul(k)*fakul(n-k)));
    }
    return 0;
}

int main(){
    printf("erg = %0.f\n",fakul(4));
    printf("binom...=%0.f\n",binomialkoffezient(10,0));
    printf("binom...=%0.f\n",binomialkoffezient(10,1));
    printf("binom...=%0.f\n",binomialkoffezient(10,10));
    printf("binom...=%0.f\n",binomialkoffezient(49,6));
}
void inorder(struct vertex *v, void(*process)(int key)){
    
    if(v==NULL){return ;}
    vertex * temp=v;
    vertex* temp2=v;
    while(temp->left!=NULL && temp2->right!=NULL ){
        process(temp->key);
        temp=temp->left;
        process(temp2->key);
                temp=temp->right;
                

    }

    
}
void inorder(struct vertex *v, void(*process)(int key)){
    static int x=0;
    if(v==NULL){return ;}
    x++;
    vertex * temp=v->left;
    vertex* temp2=v->right;
  
if(x%2==0){
        return inorder(temp,temp->key);

    }else{
         return inorder(temp2,temp2->key);
    }
}
