#include <iostream>
#include "auction.h"
using namespace std;

int main() {
    cout << "===== AUCTION BIDDING SYSTEM =====\n";

    //--- FUNCTION OVERLOADING IMPLEMENTATION ---
    cout << "\nFUNCTION OVERLOADING DEMO\n";
    //1. Default — no input needed
    Bid b1;
    b1.placeBid();
    cout << "*** Default Bid ***\n" << b1;

    //2. User gives name and amount only
    cout << "\nParameterized Bid with name and amount\n";
    string name1; 
    double amount1;
    cout << "Enter your name  : "; 
    cin >> name1;
    cout << "Enter bid amount : $"; 
    cin >> amount1;
    Bid b2;
    b2.placeBid(name1, amount1);
    cout << "\n*** Bid with Name & Amount ***\n" << b2;

    //3. User gives full details
    cout << "\nParameterized Bid with all details\n";
    string name2, item2; 
    double amount2;
    cout << "Enter your name  : "; 
    cin >> name2;
    cout << "Enter item name  : "; 
    cin >> item2;
    cout << "Enter bid amount : $"; 
    cin >> amount2;
    Bid b3;
    b3.placeBid(name2, amount2, item2);
    cout << "\n*** Bid with all details ***\n" << b3;

    //--- OPERATOR OVERLOADING IMPLEMENTATION ---    
    string n1, n2, item;
    double amt1, amt2, deduction;

    //Take input for Bid 1
    cout << "\nOPERATOR OVERLOADING DEMO\n";
    cout << "Enter Details for Bidder 1\n";
    cout << "Enter name   : ";    
    cin >> n1;
    cout << "Enter item   : "; 
    cin >> item;
    cout << "Enter amount : $"; 
    cin >> amt1;

    Bid bid1(n1, amt1, item);
    cout << "\n*** Bidder 1 Details ***\n" << bid1;

    //Take input for Bid 2 (same item)
    cout << "\nEnter Details for Bidder 2\n";
    cout << "Enter name   : "; 
    cin >> n2;
    cout << "Enter amount : $"; 
    cin >> amt2;

    Bid bid2(n2, amt2, item);
    cout << "\n*** Bidder 2 Details ***\n" << bid2;

    //+operator — Combined bids
    cout << "\n*** Combined Bid ***\n";
    Bid combined = bid1 + bid2;
    cout << combined;

    //-operator — Withdraw some amount from Bid 1
    cout << "\n*** Partial Withdrawal from Bidder 1 ***\n";
    cout << "Enter amount to withdraw : $"; 
    cin >> deduction;
    bid1 = bid1 - deduction;
    cout << "\n*** After Withdrawal ***\n" << bid1;

    //==operator — to check if bids are equal
    cout << "\n*** Comparing Both Bids ***\n";
    if (bid1 == bid2)
        cout << "Both bids are equal with " << bid1.get_amt() << "$\n\n";
    else
        cout << "Bids are different.\n";

    //>operator — to find winner
    cout << "\n*** Auction Winner ***\n";
    if (bid1 > bid2)
        cout << "Winner: " << bid1.get_name() << " with $" << bid1.get_amt() << "!\n";
    else if (bid2 > bid1)
        cout << "Winner: " << bid2.get_name() << " with $" << bid2.get_amt() << "!\n";
    else
        cout << "It's a tie! Both bid are of " << bid1.get_amt() << "$\n";

    //Cancel a bid
    cout << "\n*** Cancel Bidder 2's Bid ***\n";
    bid2.cancelBid();
    cout << bid2;

    cout << "\n===== PROGRAM END =====\n";
    
    return 0;
}
