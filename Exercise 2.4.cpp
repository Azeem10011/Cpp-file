#include <iostream>
using namespace std;
int main() {
	float mealCost = 88.67;
	cout << "The meal cost is: $" << mealCost << endl;
	float taxPercent = 6.75;
	float tipPercent = 20;
	float taxAmount = (mealCost * taxPercent) / 100;
	cout << "The tax amount is: $" << taxAmount << endl;
	float mealCostWithTax = mealCost + taxAmount;
	float tipAmount = (mealCostWithTax * tipPercent) / 100;
	cout << "The tip amount is: $" << tipAmount << endl;
	float totalBill = mealCostWithTax + tipAmount;
	cout << "The total Bill is: $" << totalBill << endl;
}