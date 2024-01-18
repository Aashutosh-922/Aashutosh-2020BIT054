#include<bits/stdc++.h>
using namespace std;

void recurse(int n){
int op;
op = n*(n-1);
cout<< op;
}

int main(){

int n;
cin>>n;

if(n==0){
return 0;
}
else {
recurse(n);
}

return 0;
}
