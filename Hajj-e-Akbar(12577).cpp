#include <iostream>
using namespace std;

int main(){
    int i = 0;

    for(string h ; h != "*" ; cin >> h){
        if(h == "Hajj") cout << "Case " << i << ":" << " Hajj-e-Akbar" << endl;
        else if(h == "Umrah") cout << "Case " << i << ":" << " Hajj-e-Asghar" << endl;
        i++;
    }

    return 0;
}
