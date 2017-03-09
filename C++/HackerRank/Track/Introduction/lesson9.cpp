#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;    
    cin >> n >> q;
    
    int k,values;
    vector<vector<int>> a;
    for(int x = 0;x < n;x++){      
        cin >> k;
        vector<int> array;
        for(int z = 0;z < k;z++){
            cin >> values;
            array.push_back(values);
        }
        a.push_back(array);
    }
    int i, j;
    while(q--){
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    
    return 0;
}
