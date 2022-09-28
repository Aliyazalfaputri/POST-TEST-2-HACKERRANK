#include<iostream>
using namespace std;
int main(){
    float total_belanja=150000,harga_akhir;
  cin >> total_belanja;
 
  if ((total_belanja >= 149000)&&(total_belanja <249000)){
    harga_akhir = total_belanja - (0.1*total_belanja);
    }
    
  else if ((total_belanja >= 249000)&&(total_belanja <349000)) {
    harga_akhir = total_belanja - (0.2*total_belanja);
    
  }
  else if ((total_belanja >= 349000)&&(total_belanja <449000)) {
    harga_akhir = total_belanja - (0.3*total_belanja);
   
  } 
  else if ((total_belanja >= 449000)&&(total_belanja <549000)) {
    harga_akhir = total_belanja - (0.4*total_belanja);
   
  }
   else if (total_belanja >= 549000) {
    harga_akhir = total_belanja - (0.5*total_belanja);
    
  }
  else {
    harga_akhir = total_belanja;
}
 cout<< harga_akhir << endl;
  return 0;
}
