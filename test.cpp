#include<bits/stdc++.h>

#include "codes/factorial.cpp"
#include "codes/logger.cpp"
#include "codes/greater.cpp"

using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    int k,l;
    cin>>k;
    cin>>l;
    int g = greaterthan(k,l);
    cout<<g;
}