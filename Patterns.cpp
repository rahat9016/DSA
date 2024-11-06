
// 1. Square Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<< j << ' ';
        }
        cout << '\n';
    }
    return 0;
}

// 2. Star Square Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<< "* ";
        }
        cout << endl;
    }
    return 0;
}
//  print number end of 1-n
int n = 3; 
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }


// print character A-Z
int n = 6; 
    int num = 1;
    char ch = 'A';
    int cch= ch;

    for(int i = 0; i < n; i++){
        for(int j = 1; j<=n; j++){
            cout<<ch;
            ch = ch + 1;
            if (ch > 90) {
                break;
            }
        }
        cout<<endl;
        if (ch > 90) {
            break;
        }
    }

// triangle pattern
int n = 6;
for(int i = 0; i < n; i++){
    for(int j = 0; j<i; j++){
        cout<<i;
    }
    cout<<endl;
}
