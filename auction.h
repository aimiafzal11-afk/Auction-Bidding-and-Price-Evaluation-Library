#pragma once
#include<iostream>
using namespace std;

class Bid{
private:
	string bidderName;
	double bidAmount;
	string itemName;
	bool isActive;
public:
	//Function overloading
	//1. Default initialization
	void placeBid() {
		bidderName = "Unknown";
		bidAmount = 0.0;
		itemName = "Unknown";
		isActive = true;
	}
	//2. Parameterized initialization with only name and price
	void placeBid(string name, double amt) {
		bidderName = name;
		bidAmount = amt;
		itemName = "General item";
		isActive = true;
	}
	//3. Parameterized initialization with all details
	void placeBid(string name, double amt, string item) {
		bidderName = name;
		bidAmount = amt;
		itemName = item;
		isActive = true;
	}

	//getter functions 
	string get_name() {
		return bidderName;
	}
	double get_amt() {
		return bidAmount;
	}

	//Constructors
	Bid() {
		placeBid();
	}
	Bid(string name, int amt){ 
		placeBid(name, amt);
	}
	Bid(string name, double amt, string item) {
		placeBid(name, amt, item);
	}

	//increase bid amount
	void raiseBid(double raise) {
		bidAmount += raise;
	}

	//cancel bid
	void cancelBid() {
		isActive = false;
	}

	//Operator overloading
	//1. +operator (2 joined bids e.g group bid)
	Bid operator+(const Bid &other) {
		Bid result;
		result.bidderName = bidderName + " & " + other.bidderName,
	    result.bidAmount = bidAmount + other.bidAmount;
		result.itemName = itemName;
		return result;
	}

	//2. -operator (decreasing the bid price)
	Bid operator-(double deduction)const {
		Bid result = *this;
		if (bidAmount - deduction > 0)
			result.bidAmount = bidAmount - deduction;
		else
			result.bidAmount = 0;
		return result;
	}

	//3. >operator (to evaluate higher bid)
	bool operator>(const Bid& other) {
		return (bidAmount > other.bidAmount);
	}

	//4. ==operator (to check if two bids are of equal amount)
	bool operator==(const Bid& other) const{
		return bidAmount == other.bidAmount;
	}

	//5. <<operator (for displaying all details)
	friend ostream& operator<<(ostream& out, const Bid& b) {
		out << "------------------------------\n";
		out << "Bidder : " << b.bidderName << endl;
		out << "Item   : " << b.itemName << endl;
		out << "Amount : " << b.bidAmount << "$\n";
		out << "Status : ";
		if (b.isActive)
			out << "Active\n";
		else
			out << "Cancelled\n";
		out << "------------------------------\n";
		return out;
	}
};