#include <iostream>
using namespace std;

int main(){

cout << "This program will the multiply your number from 1 to 10 and print the output" <<endl;

int input =0;

cout << "Please eneter your number: " ; 

cin >> input; 

for (int i=1;i<=10;i++) {  

cout << i << "X" << input << " = " <<  i*input << endl; 

}

for (int j=1;j<=10;j++) {
if((j*input)%3==0) {
cout << j << "X" << input << " = " <<  "@" << endl;
}else {
cout << j << "X" << input << " = " <<  j*input << endl;
}

}

return 0;
} 
