double min(double a[], int n){
    if(n==0){
        return 0.0;
    }else{
    double min=a[0];
     for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
     }
     return min;
    }
 }

 int main(){
   
    double feld[]={6.9,4.6,8.8,7.9,5.7,8.5,2.3};
    printf("minErg %.3f",min(feld,7));
    return 0;
}