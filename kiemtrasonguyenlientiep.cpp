// tim uoc chung lon nhat 
#include<iostream>
using namespace std;
int min (int a, int b){
    if (a <b)
        return a;
    else 
        return b;

}
int ucln(int m, int n ){
    int t = min(m,n);
    while (t>0)
    {
       if(m % t ==0 ) {
            if (n % t ==0){
                return t;
            }
            else 
                t --;
        }
        else 
            t--;
    }
    

}
int main(){
    cout << ucln(17,16);
    return 0;
}