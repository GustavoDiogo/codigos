#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    while(n--){
        cout << a[n] << ' ';
    }
    return 0;
}