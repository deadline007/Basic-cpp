#include<iostream>
using namespace std;

int main(){
    
    int n, reverse = 0, lstdig;
    cin>>n;

    while(n>0){
        lstdig = n%10;
        reverse = reverse*10 + lstdig;
        n = n/10;
    }
    cout<<reverse<<endl;

    return 0;
}
