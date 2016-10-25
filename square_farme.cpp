#include <iostream>

using namespace std;


int main()
{

    int symbols;
    int rows;

    cout << "Number of *: ";
    cin >>symbols;
    cout << "Number of rows: ";
    cin >>rows;

    /* for ( init   ;    end cond     ;   step) {} */

    for (int j = 0; j<rows; j++)
    {
        for (int i = 0; i < symbols; i++)
        {
            if ((0 == j)or (rows - 1 == j) or
                    (0 == i) or (symbols - 1 ==i))
            {
                cout << "-";
            }
            else
            {
                cout <<"*" ;
            }

        }
        cout << endl;

    }

    return 0;

}
