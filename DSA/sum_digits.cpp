#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{   int x=n%10;
    int y=n/10;
    if(y==0)
    return x;
    
    return (x) + sum(y) ;
}

int main(){
cout<<sum(123);
return 0;
}