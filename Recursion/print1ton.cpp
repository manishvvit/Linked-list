#include<bits/stdc++.h>
using namespace std;
void printnto1(int n){
    //base case
    if(n<1){
        return;
    }
    
    printnto1(n-1);
    cout<<n<<" ";

}
int main(){
    printnto1(5);
    return 0;
}