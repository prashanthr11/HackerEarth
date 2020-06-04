# include <bits/stdc++.h>
# define loop(i,j,n) for(i = j; i < n; i++)
using namespace std;
int main(){
    int n;
    int i;
    cin >> n;
    int a[n];
    loop(i , 0, n)
        cin >> a[i];
    int key;
    cin >> key;
    loop(i ,0 ,n) {
        if(a[i] == key) {
            cout << i << endl;
        }
    }
}
