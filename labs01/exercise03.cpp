#include <iostream>
using namespace std;

int main() {
    double revenue, cost, taxRate;
    cout << "Enter revenue: ";
    cin >> revenue;
    cout << "Enter cost: ";
    cin >> cost;
    cout << "Enter tax rate (as decimal, e.g. 0.2 for 20%): ";
    cin >> taxRate;

    double grossProfit = revenue - cost;
    double tax = 0;
    if (grossProfit > 0) {
        tax = taxRate * grossProfit;
    }

    double netProfit = grossProfit - tax;

    cout << "Gross Profit: " << grossProfit << endl;
    cout << "Net Profit: " << netProfit << endl;
    return 0;
}
