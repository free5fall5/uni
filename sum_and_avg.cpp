#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main () {
cout << "This program will calculate the sum and avg of the negative numbers entered by you. " << endl;
cout << "The program will termiante if you end if you fail to enter a negative number." << endl<<endl; 

int input = 0;
double sum = 0;
int num_of_entries = 0; 
while ( input <= 0 )
{
cout << "Please enter a negative number: "  << endl;
cin >> input;
if ( input < 0 )
{
sum = sum + input;
num_of_entries = num_of_entries + 1;
cout << "The sum is " << sum <<"." <<endl;
cout << "The avg is " << sum / num_of_entries << endl; 
}
else break;
}

return 0;
}
