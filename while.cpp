#include <iostream>
using namespace std;

int main (){
int max_val = -1;
int new_val = -1;

cout << "New value: "; 
cin >> new_val;

while (new_val > -1){
	if (new_val>max_val) {
		max_val=new_val;
	}
	cout << "New value: ";
	cin >>new_val;

}

if (max_val == -1) {
	cout<< "Next time!";
}else {
	cout <<"Max Value: " <<max_val;
} 

return 0;
}

