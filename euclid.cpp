// tim uoc chung lon nhat cua m va n 
#include <iostream>
using namespace std;
int euclid(int m, int n ){
    int r;
    while (n !=0 )
    {
        r= m %n ;
        m =n ;
        n= r;
        /* code */
    }
    return m ;
    
}
int main (){
    cout << euclid(5,10);
    
}