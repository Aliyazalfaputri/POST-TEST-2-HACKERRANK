#include <iostream>
using namespace std;
int main(){
    int bilangan;
    cin >> bilangan;
 
    if (bilangan==2 ||bilangan==3 ||bilangan==5 ||bilangan==7 ||bilangan==11 ||bilangan ==13 ||bilangan==17 ||bilangan==19 ||bilangan==23 ||bilangan ==29){
    cout <<"Bilangan Prima";
    }
    else {
        cout <<"Bukan Bilangan Prima";
    }
 
    return 0;
}
