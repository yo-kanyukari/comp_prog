#include<iostream>

using namespace std;

int main(){
    int N;


    cin>>N;
    int ans=(N/10)*100+((N%10)<7?N%10*15:100);

    cout<<ans<<endl;
}
