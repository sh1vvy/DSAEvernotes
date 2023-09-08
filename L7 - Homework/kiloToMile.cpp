#include <iostream>
using namespace std;

double kToMiles(int km)
{
  double miles = (km / 1.609);
  return miles;
}

int main()
{
  int km;
  cin >> km;

  cout << km << " KMs is: " << kToMiles(km) << " in miles.";
}