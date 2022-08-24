#include <string>
using namespace std;

string month_lookup(int month){
    string array[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if (month < 13)
    {
        if (month > 0){
            return array[month-1];
        }
        else{
            return "invalid month";
        }
    }
    return "invalid month";
    
    
}