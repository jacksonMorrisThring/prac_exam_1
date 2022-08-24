#include <string>
using namespace std;
#include <iostream>

extern string month_lookup(int month);

int main(){
    int month = 0;

    string result = month_lookup(month);

    cout << result << endl;


    return 0;
}