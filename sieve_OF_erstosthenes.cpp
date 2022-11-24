#include<iostream>
#include<math.h>
using namespace std; 
// tim thua so nguyen to 
void snt (int n , int a[]){
    
    int j ;
    for (int i=2;i<=n;i++){
        a[i]=i;
    }
    int m =sqrt(n);
    for (int i=2;i<=m;i++ ){
        if(a[i]!=0)
        {
            j=i*i;
            while (j<=n){
                a[j]=0;
                j=j+i;
            }
            
            
        }
            
    }
}
void output(int a[], int n ){
    for (int i=0;i<n;i++){
        if (a[i]!=0)
            cout << a[i]<<endl;
    }
}
int main(){
    int n =10;
    int a[10];
    snt(n,a);
    output(a,n);
    
    return 0; 
}