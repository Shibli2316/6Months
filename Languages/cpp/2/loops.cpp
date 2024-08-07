#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int i = 1;

    while(i<n){
        cout << i << endl;
        i++;
    }

    int sumTill;
    cin >> sumTill;

    int answer = 0;

    while(sumTill){
        answer+=sumTill;
        sumTill--;
    }

    cout << "The sum is: " <<answer;
}