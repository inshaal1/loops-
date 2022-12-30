#include <iostream>
using namespace std;
int main()
{
  cout << " Task 1: \n";
  int a , b ;
  cout << "Enter 2 numbers:\n";
  cout << "Enter first number:\n";
  cin >> a ;
  cout << " Enter second number:\n";
  cin >> b ;
  cout<< "________________________________________________________________\n";
  if(a==b){cout << " Both numbers are equal\n";}
  else if(a>b){cout << " Second number is less than first number\n";}
  else{cout << " Numbers divisible by 2 between " << a << "and" << b << "are:" << endl;
  for(int d= a+1 ; d<b ; ++d){if(d%2==0){cout << d << " ; ";}}
  cout << endl;
  cout << " Numbers divisible by 3 between " << a << "and" <<b << "are:" << endl;
  for(int d= a+1 ; d<b ; ++d){if(d%3==0){cout << d <<" ; ";}}}
  cout << endl;
  cout << " Task 2: \n";
  int e , t=0 ;
  cout << "Enter a number between 13 and 47:\n";
  cin >> e ;
  cout << "_________________________________________________________________\n";
  cout << endl;
  if(e>=13&&e<=47){for(int x=1; x<=47;x++){if(e%x==0){cout << x <<" ; "<< endl;++t;}}cout << " the number of divisors are: " << t << endl;}
  else if(e<13&&e>47){cout << " Positive integer is not in the given range \n";}
  else if(e<0){cout << " You are not allowed to show divisors and count of divisors \n";}
  return 0;
}
