#include<bits/stdc++.h>
using namespace std;
int Fact(int n){
    //base case
    if(n==1 || n==0){
        return  1;
    }
   return(n*Fact(n-1));

}
int main(){
    cout<<"Total is "<<Fact(5);
    return 0;
}