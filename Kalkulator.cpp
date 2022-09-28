#include<iostream>
using namespace std;
int main(){
    float x,y;
    char operasi;
    cin>>x>>y>>operasi;
      
    if (operasi=='+'){
    cout<<x+y<<endl;
}
    else if (operasi=='-'){
    cout<<x-y<<endl;
}
    else if (operasi=='*'){
    cout<<x*y<<endl;
}
    else if (operasi=='/'){
    cout<<x/y<<endl;
}
else{
    cout<<"operator salah";
}
      return 0;
}
