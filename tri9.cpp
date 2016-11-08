#include <iostream>
using namespace std;
int main () {

        int r = 0;

	cout << "Enter number of rows: ";
	if (cin >> r ){


        for (int i = r; i >0; i--) {
                for (int j = 0; j < r; j++) {
                       if (j < i - 1) { 
				cout << " ";
                	}else
			{
			if(j==r-1 ||j==i-1 ||i==1){
				cout << "@";
			}else
			if ((i+j)%2 ==0){
				cout << "*";
			}else {
				cout << "-";
			}
		}
		}        
                cout << endl;
        	
	}
	
	}
        return 0;
}

