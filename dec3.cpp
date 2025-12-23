#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
     int sum = 0;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        
        int salaries[m];
       
        
        for(int j = 0; j < m; j++) {
        cin >> salaries[j];
        sum += salaries[j];
        }cout<<endl;
        cout << sum << endl;
         }
        
   
    
    return 0;
}