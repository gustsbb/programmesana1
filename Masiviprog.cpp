#include <iostream>
using namespace std;
    int main () {

    int x[]= {3, 6, 9};
    int len= sizeof(x)/ sizeof (x[0]);

    // find smallest only if there is atleast one element in array
    if (len > 0) {
        int smallest = x[0]; //assume that first element is smallest

        for (int i=1; i<len; i++) {
    if (smallest> x[i]) {
        smallest = x[i]; //update smallest
        }
    }
        cout << "Smallest : " << smallest<< endl;
    } else {
    cout<< "No elements in the array."<< endl;
    }




    }
//ATRAST MAZAKO CIPARU
