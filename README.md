## Problem Statement
Design and implement a custom C++ library (header file) based on a problem of your
choice. Your class must demonstrate the use of function overloading and operator
overloading, and the library must be used in a separate .cpp file to show all
functionalities.

## Functional Requirements
#### 1. Custom Class Design
● Create a class relevant to your chosen problem
● Include appropriate data members and member functions
#### 2. Function Overloading (Mandatory)
Implement at least 3 overloaded functions (same name, different parameters), for
example:
● Default initialization

● Parameterized initialization

● Copy or alternate input method

#### 3. Operator Overloading (Mandatory)
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

