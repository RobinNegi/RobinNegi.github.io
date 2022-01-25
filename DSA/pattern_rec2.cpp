/*

1
12
123
1234
1234 ... n
*/
#include<bits/stdc++.h>
using namespace std;

void patt(int n)
{   
    if(n==0)
    return;
    patt(n-1);
    for(int i=1;i<=n;i++)
    cout<<i;
    cout<<endl;
}

int main(){
patt(3);
return 0;
}