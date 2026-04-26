## Problem Statement
Design and implement a custom C++ library (header file) based on a problem of your
choice. Your class must demonstrate the use of function overloading and operator
overloading, and the library must be used in a separate .cpp file to show all
functionalities.

## Functional Requirements
### 1. Custom Class Design

● Create a class relevant to your chosen problem

● Include appropriate data members and member functions

### 2. Function Overloading (Mandatory)
Implement at least 3 overloaded functions (same name, different parameters), for
example:

● Default initialization

● Parameterized initialization

● Copy or alternate input method

### 3. Operator Overloading (Mandatory)
Overload at least 4 operators, including:

● At least 2 arithmetic operators (e.g., +, -, *)

● At least 1 comparison operator (e.g., ==, <)

● << for output display (friend function)

## Chosen topic
Auction Bidding & Price Evaluation Library
 
## Brief description
This project implements a custom C++ library (auction.h) that simulates a basic auction bidding system. The Bid class stores
bidder name, item name, bid amount, and active status. It demonstrates function overloading through three versions of the
placeBid() function, and operator overloading through five operators: (+) to combine two bids, (-) to withdraw an amount,
(==) to compare bids, (>) to find the winner, and (<<) to display bid details. The library is used in main.cpp to show
all functionalities with real auction scenarios.

## SAMPLE OUTPUT
===== AUCTION BIDDING SYSTEM =====
```
FUNCTION OVERLOADING DEMO
*** Default Bid ***
------------------------------
Bidder : Unknown
Item   : Unknown
Amount : 0$
Status : Active
------------------------------

Parameterized Bid with name and amount
Enter your name  : Ali
Enter bid amount : $200

*** Bid with Name & Amount ***
------------------------------
Bidder : Ali
Item   : General item
Amount : 200$
Status : Active
------------------------------

Parameterized Bid with all details
Enter your name  : Saad
Enter item name  : Watch
Enter bid amount : $500

*** Bid with all details ***
------------------------------
Bidder : Saad
Item   : Watch
Amount : 500$
Status : Active
------------------------------

OPERATOR OVERLOADING DEMO
Enter Details for Bidder 1
Enter name   : Danial
Enter item   : Laptop
Enter amount : $1000

*** Bidder 1 Details ***
------------------------------
Bidder : Danial
Item   : Laptop
Amount : 1000$
Status : Active
------------------------------

Enter Details for Bidder 2
Enter name   : Ahmed
Enter amount : $1200

*** Bidder 2 Details ***
------------------------------
Bidder : Ahmed
Item   : Laptop
Amount : 1200$
Status : Active
------------------------------

*** Combined Bid ***
------------------------------
Bidder : Danial & Ahmed
Item   : Laptop
Amount : 2200$
Status : Active
------------------------------

*** Partial Withdrawal from Bidder 1 ***
Enter amount to withdraw : $100

*** After Withdrawal ***
------------------------------
Bidder : Danial
Item   : Laptop
Amount : 900$
Status : Active
------------------------------

*** Comparing Both Bids ***
Bids are different.

*** Auction Winner ***
Winner: Ahmed with $1200!

*** Cancel Bidder 2's Bid ***
------------------------------
Bidder : Ahmed
Item   : Laptop
Amount : 1200$
Status : Cancelled
------------------------------
