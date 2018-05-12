#include <iostream>
#include <vector>

#define ll long long int
using namespace std;

int main() {
    ll n;
    cout << "How many nos u want to enter: ";
    cin >> n; 
    vector<int> v(n);
    
    //accept nos
    cout << "Enter the nos: " << endl;
    for(ll i=0; i<n; i++)
        cin >> v[i];
    
    //enter the target no
    ll num;
    cout << "Enter the target no: ";
    cin >> num;
    
    //logic
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){ 
            if(v[i]+v[j]==num){
                cout << "(i,j): " << i << "," << j << endl;
            }
        }
    }
}
