#include<iostream>
using namespace std;

int main() {

    int trans_counter;
    int trans_amount;
    int total = 0;

    cout << "How many transactions did you receive: " <<endl;
    cin >> trans_counter;

    for (int i = 0; i < trans_counter; i++) {


        cout << "What was the transaction " << i+1 << " amount: " <<endl;
        cin >>trans_amount;

        total += trans_amount;
    }

    cout << "You received a total of: " << total << " sats" <<endl;
    return 0;
}