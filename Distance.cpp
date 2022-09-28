#include<iostream>
using namespace std;
int main(){
    int y,z;
    cin>>y;
    cin>>z;
    
  if((y==1 && z==2) || (z==1 && y==2)){
    cout<<5;
  }
  else if ((y==1 && z==3) || (z==1 && y==3)){
      cout<<13;
  }
  else if ((y==1 && z==4) || (z==1 && y==4)){
      cout<<20;
  }
  else if ((y==1 && z==5) || (z==1 && y==5)){
      cout<<23;
  }
  else if ((y==2 && z==3) || (z==2 && y==3)){
      cout<<8;
  }
  else if ((y==2 && z==4) || (z==2 && y==4)){
      cout<<15;
  }
  else if ((y==2 && z==5) || (z==2 && y==5)){
      cout<<18;
  }
  else if ((y==3 && z==4) || (z==3 && y==4)){
      cout<<7;
  }
  else if ((y==3 && z==5) || (z==3 && y==5)){
      cout<<10;
  }
  else if ((y==4 && z==5) || (z==4 && y==5)){
      cout<<3;
  }
  else{
      cout<<"Error";
  }
    return 0;
    
    
}
