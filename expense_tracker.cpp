
#include <iostream>
#include <string>
using namespace std;

int main() {
    string expenseName;
    double amount, total = 0;
    int n;

    cout << "Personal Expense Tracker\n";
    cout << "How many expenses do you want to enter? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter expense name: ";
        cin >> expenseName;

        cout << "Enter amount: Rs. ";
        cin >> amount;

        total = total + amount;
    }

    cout << "\n--- Expense Summary ---\n";
    cout << "Total Expenses: Rs. " << total << endl;

    return 0;
}
