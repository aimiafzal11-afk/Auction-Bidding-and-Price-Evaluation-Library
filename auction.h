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
	void placeBid() {
		bidderName = "Unknown";
		bidAmount = 0.0;
		itemName = "Unknown";
		isActive = true;
	}

	void placeBid(string name, double amt) {
		bidderName = name;
		bidAmount = amt;
		itemName = "General item";
		isActive = true;
	}

	void placeBid(string name, double amt, string item) {
		bidderName = name;
		bidAmount = amt;
		itemName = item;
		isActive = true;
	}


	string get_name() {
		return bidderName;
	}
	double get_amt() {
		return bidAmount;
	}

	Bid() {
		placeBid();
	}
	Bid(string name, int amt){ 
		placeBid(name, amt);
	}
	Bid(string name, double amt, string item) {
		placeBid(name, amt, item);
	}

	void raiseBid(double raise) {
		bidAmount += raise;
	}

	void cancelBid() {
		isActive = false;
	}

	Bid operator+(const Bid &other) {
		Bid result;
		result.bidderName = bidderName + " & " + other.bidderName,
	    result.bidAmount = bidAmount + other.bidAmount;
		result.itemName = itemName;
		return result;
	}

	Bid operator-(double deduction)const {
		Bid result = *this;
		if (bidAmount - deduction > 0)
			result.bidAmount = bidAmount - deduction;
		else
			result.bidAmount = 0;
		return result;
	}

	bool operator>(const Bid& other) {
		return (bidAmount > other.bidAmount);
	}

	bool operator==(const Bid& other) const{
		return bidAmount == other.bidAmount;
	}

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
