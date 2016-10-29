#include <iostream>

using namespace std;

int main() {

     // Complete the code.

    int input ;
    cout << "Please eneter a numbera and we'll tell you what it is ..." <<endl;
    cin >> input;
    if (input < 0) {
        cout << "You have entered a negative number.";
    }else if (input == 0){
        cout<<"Your bumber is ZERO";
    }else if (input == 1){
        cout << "Your number is ONE";
    }else if (input == 2){
        cout<<"Your number is TWO";
    }else if (input == 3){
        cout<<"Your number is THREE";
    }else if (input == 4){
        cout<<"Your number is FOUR";
    }else if (input == 5){
        cout<<"Your number is FIVE";
    }else if (input == 6){
        cout<<"Your number is SIX";
    }else if (input == 7){
        cout<<"Your number is SEVEN";
    }else if (input == 8){
        cout<<"Your number is EIGHT";
    }else if (input == 9){
        cout<<"Your number is NINE";
    }else if (input > 9){
        cout<<"Your number is greather than NINE";
    }

    return 0;
}
