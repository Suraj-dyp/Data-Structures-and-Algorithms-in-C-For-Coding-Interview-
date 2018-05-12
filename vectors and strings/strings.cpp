#include <iostream>
#include <string>

using namespace std;

int main() {
    string first_name = "suraj";
    string last_name = "kumar";
    
    //concat
    string name = first_name + last_name;
    cout << name << endl;
    name += " Hello"; /* mutable */
    cout << name << endl;
    
    cout << "Length: "<< name.size() << endl;
    
    //sort
    sort(name.begin(), name.end());
    cout << "Sorted name: "<< name << endl;
    
    //search
    cout << "A is present: " << binary_search(name.begin(), name.end(),'A');
}