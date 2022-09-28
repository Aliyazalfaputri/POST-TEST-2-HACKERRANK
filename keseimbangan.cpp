#include<iostream>
using namespace std;
int main(){
    int w,x,y,z;
    cin>>w>>x;
	cin>>y>>z;
    
if (w*x==y-z){
    cout<<"True\n";
}
else if (w*x>=y-z || w*x<=y-z ) {
    cout<<"False\n";
}
    return 0;
}
	

