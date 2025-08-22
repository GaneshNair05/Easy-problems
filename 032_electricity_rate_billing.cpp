#include <iostream>
using namespace std;

int main(){
  float units, bill;

  cout << "Enter unit : ";
  cin >> units;

  if(units <= 50){                                                       
  bill = units * 10; //0-50 slab rate is 10
  }
  else if(units <= 100){                                                  //50-100 units - Rs.15
    bill = (50 * 10) + (units - 50) * 15;
  }
  else if(units <= 250){
    bill = (50 * 10) + (50 * 15) + (units - 150) * 20;                  //100 to 250 units - Rs.20  
  }
  else if(units > 250){
    bill = (50 * 10) + (50 * 15) + (150 * 20) + (units - 250) * 25;     //above 250 units - Rs.25
  }
  else{
    cout << "Invalid entry!";
  }
  
  cout << "Electricity bill : Rs." << bill << endl;
 return 0;
}
