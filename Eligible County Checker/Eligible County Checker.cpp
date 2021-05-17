// Eligible County Checker.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string inputcounty;
    cout << "Please input applicant's county: " << endl;
    cin >> inputcounty;

    cout << inputcounty << " ";
    

    if (inputcounty == "Anson" || inputcounty == "Brunswick" || inputcounty == "Beaufort" || inputcounty == "Bladen" || inputcounty == "Carteret" || inputcounty == "Chatham" || inputcounty == "Columbus" || inputcounty == "Craven" || inputcounty == "Cumberland" || inputcounty == "Duplin" || inputcounty == "Durham" || inputcounty == "Greene" || inputcounty == "Guilford" || inputcounty == "Harnett" || inputcounty == "Hoke" || inputcounty == "Hyde" || inputcounty == "Johnston" || inputcounty == "Jones" || inputcounty == "Lee" || inputcounty == "Lenoir" || inputcounty == "Moore" || inputcounty == "New Hanover" || inputcounty == "Onslow" || inputcounty == "Orange" || inputcounty == "Pamlico" || inputcounty == "Pender" || inputcounty == "Pitt" || inputcounty == "Richmond" || inputcounty == "Robeson" || inputcounty == "Carteret" || inputcounty == "Sampson" || inputcounty == "Scotland" || inputcounty == "Union" || inputcounty == "Wayne" || inputcounty == "Wilson") {
        cout << "County is eligible" << endl;
    }
    else {
        cout << "County is ineligible" << endl;
    }












    return 0;
}
