#include <iostream>
using namespace std;

int main(){
    string angka;
    int n;

    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> angka;

        if(angka.length() == 3){
            if(angka[0] == 'o' && angka[1] == 'n') cout << 1 << endl;
            else if(angka[0] == 'o' && angka[2] == 'e') cout << 1 << endl;
            else if(angka[1] == 'n' && angka[2] == 'e') cout << 1 << endl;
            else if(angka[0] == 't' && angka[1] == 'w') cout << 2 << endl;
            else if(angka[0] == 't' && angka[2] == 'o') cout << 2 << endl;
            else if(angka[1] == 'w' && angka[2] == 'o') cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }

    return 0;
}
