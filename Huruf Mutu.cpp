#include <iostream>
using namespace std;
int main(){
    float nilai;
    cin>>nilai;
    
if(nilai>=76 && nilai<=100){
    cout<<"A";
}
else if(nilai>= 71 && nilai<76){
    cout<<"B+";
}
else if(nilai>= 66 && nilai<71){
    cout<<"B";
}
else if (nilai >=61 && nilai<66){
    cout<<"C+";
}
else if (nilai >= 56 && nilai<61){
    cout<<"C";
}
else if (nilai >=50 && nilai<=56){
    cout<<"D";
}
else if (nilai >=0 && nilai<50){
    cout<<"E";
}
else if (nilai >100 || nilai<0){
    cout << "Nilai Melebihi Range";
}
    return 0;
}
