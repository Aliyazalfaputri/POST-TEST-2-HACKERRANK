#include <iostream>
using namespace std;
int main(){
 int year;
  cin >> year;
  
  if (year%400==0){
  cout<<"Tahun Kabisat";
} 
  else if ((year%400!=0) && (year%100==0)){
  cout<<"Bukan Tahun Kabisat";
} 
  else if ((year%400!=0) && (year%100!=0) && (year%4==0)){
  cout<<"Tahun Kabisat";
}

  else if ((year%400!=0) && (year%100!=0) && (year%4!=0)){
  cout<<"Bukan Tahun Kabisat";
}
return 0;
}
