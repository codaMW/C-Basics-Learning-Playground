#include<iostream>
using namespace std;

int main() {

    cout <<"================================================"<<endl;
    cout <<"\t\tBitDevs Malawi"<<endl;
    cout <<"================================================"<<endl;

    int trans_count; //declaring
    float total = 0; //defining - initializing
    float btc_amount; //declaring
    

    cout <<"\nHow many transactions did you receive: "<<endl;
    cin >> trans_count;

    for(int i = 0; i < trans_count; i++ ) {

        cout << "\nHow much did you receive in transaction "<< i + 1 <<" : "<<endl;
        cin>> btc_amount;
        total += btc_amount;
    }

    //1 btc = 64500
    int btc_value = 64500;
    float usd_amount = total * btc_value;

    if (usd_amount >= 50) {
        cout << "\nBalance: BTC " << total <<endl;
        cout << "Balance in USD: " << usd_amount <<endl;
        cout << "You are eligible for this airdrop " <<endl;
    } else {
        cout << "\nBalance: BTC " << total <<endl;
        cout << "Balance in USD: " << usd_amount <<endl;
        cout <<"\nSorry Buddy you are not eligible"<<endl;
    }

    

    return 0;
}

