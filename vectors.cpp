#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class comparator{
    public:
    bool operator()(const int& lh, const int& rh){
        return lh>rh;
    }
};

int main() {
    //creation
    vector<int> v;
    cout << "size of initial vector: " << v.size()  << endl;
    
    //insertion
    v.push_back(1);
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    cout << "size of vector after 6 insertions: "<< v.size() << endl;
    
    //deletion
    v.erase(v.begin());
    cout << "size of vector after 1 deletion: "<< v.size() << endl;
    v.erase(v.begin(),v.begin()+2);
    cout << "size of vector after 2 more deletion: "<< v.size() << endl;
    
    //elements before sort
    cout << "elements before sort" << endl;
    for(int i : v)
        cout << i << "     ";
    cout << endl;
    
    //sort
    sort(v.begin(),v.end()); 
    
    if(v.end()==v.begin()+v.size())
        cout << "v.end()==v.begin()+v.size(): " << "True" << endl;
    
    //elements after sort
    cout << "elements after sort" << endl;
    for(int i : v)
        cout << i << "     ";
    cout << endl;
    
    cout << "9 is present: "<< binary_search(v.begin(),v.end(),9) << endl;
    cout << "1 is not present: "<< binary_search(v.begin(),v.end(),1) << endl;

    //sort in descending order
    sort(v.begin(),v.end(),comparator());
    
    //elements after sort
    cout << "elements after sort(descending)" << endl;
    for(int i : v)
        cout << i << "     ";
    cout << endl;
    
}