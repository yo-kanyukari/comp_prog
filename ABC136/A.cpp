#include<iostream>

using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;

    cout<<(A-B>C?0:C+B-A)<<endl;
}