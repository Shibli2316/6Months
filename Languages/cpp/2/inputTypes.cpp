#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;  //cin does not consider tabs or spaces or new line char


    // This prints the ascii equivalent if we put some non integer value else the number is directly printed
    cout << "value of a is: "<< a  << endl;


    int b;
    b= cin.get();  //it considers spaces tabs and new line charachter 

    // This will get the value of tab spaces and everything and get the ascii equivalent and print it. 
    cout << "The value of b is: " << b << endl;
}