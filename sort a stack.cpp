#include<bits/stdc++.h>
using namespace std;

void insert_into_stack(stack<int>&S,int a){
    if(S.empty() || S.top()<a){
        S.push(a);
        return;
    }
    int x=S.top();
    S.pop();
    insert_into_stack(S,a);
    S.push(x);
    return ;
}


void solve(stack<int>&S){
    if(S.size()==1){
        return;
    }

    int a=S.top();
    S.pop();
    solve(S);
    insert_into_stack(S,a);
    return;
}

int main(){
    stack<int>S;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        S.push(a);
    }
    
    solve(S);
    // int n=S.size();

    for(int i=0;i<n;i++){
        cout<<S.top()<<" ";
        S.pop();
    }

 return  0;
}
