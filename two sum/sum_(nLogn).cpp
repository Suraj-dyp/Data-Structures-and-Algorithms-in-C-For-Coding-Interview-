#include <iostream>
#include <vector>
#include<utility>
#include <algorithm>
#define ll long long int
using namespace std;

vector<ll> v;
vector< pair<ll,ll> > v1;
ll num;

void two_sum(ll i, ll j){
	if(i>=j) return;
	else if(v1[i].first+v1[j].first==num){
		cout << v1[i].second << " " << v1[j].second << endl;
		return;
	}else if(v1[i].first+v1[j].first>num){
		j--;
		two_sum(i,j);
	}else if(v1[i].first+v1[j].first<num){
		i++;
		two_sum(i,j);
	}
		
}

int main() {
    ll n;
    cout << "How many nos u want to enter: ";
    cin >> n; 
    
    v.resize(n);
    //accept nos
    cout << "Enter the nos: " << endl;
    for(ll i=0; i<n; i++)
        cin >> v[i];
      
	//save index 
	for(ll i=0; i<n; i++){
		pair<ll,ll> temp(v[i],i);
		v1.push_back(temp);
	}   
	
    sort(v1.begin(), v1.end());
    for(ll i=0; i<n; i++){
    	cout << v1[i].first << " " << v1[i].second << endl;
	}
    
    //enter the target no
    cout << "Enter the target no: ";
    cin >> num;
    
    //logic
    two_sum(0,n-1);
    
}


