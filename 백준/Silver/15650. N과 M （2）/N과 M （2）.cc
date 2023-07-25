#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
bool isused[10];

void Func(int k){
    if(k==m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    
    for(int i = 1; i <= n; i++){
        if(!isused[i]){
            arr[k] = i;
            for(int j = 1; j <= i; j++)
                isused[j] = 1;
            Func(k+1);
             for(int j = 1; j <= i; j++)
                isused[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    Func(0);
}