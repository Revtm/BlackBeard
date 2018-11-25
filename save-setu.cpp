#include <iostream>
using namespace std;

int main(){
    string op;
    int total = 0, donate, n;

    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> op;
        if(op == "donate"){
            cin >> donate;
            total += donate;
        }else if(op == "report"){
            cout << total << endl;
        }
    }
}
