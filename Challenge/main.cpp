
// Section 6
// Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days
    
    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
    
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main( ) {
    cout << "Enter the number of small and large rooms you would like cleaned:";
    int small_rooms {0};
    int large_rooms {0};
    cin >> small_rooms >> large_rooms;
    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    
    const int price_per_small_room {25};
    cout << "Price per small room: $" << price_per_small_room << endl;
    
    const int price_per_large_room {35};
    cout << "Price per large room: $" << price_per_large_room << endl;
    
    const int cost {price_per_small_room * small_rooms + price_per_large_room * large_rooms};
    cout << "Cost : $" << cost << endl;
    
    const double tax_rate {0.06};
    const double tax {cost * tax_rate};
    cout << "Tax: $" << tax << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << (cost + tax) << endl;
    
    const int valid_days {30};
    cout << "This estimate is valid for " << valid_days << " days" << endl;
    
    return 0;
}
