#include <iostream>
#include <string>

using namespace std;
void customerBilling();
void customerPopulation();
void animalPopulation();
void animalHealth();
void cageProcedures();
void zooFinances();

int main()
{
int functionChoice = 0;
char caseControl = 'y';

cout << "Welcome to the Zoo Information System" << endl;
cout << "Please choose a function to access" << endl;
cout << "1. Customer Billing \n" << "2. Customer Population \n" << "3. Animal Population \n";
cout << "4. Animal Health \n" << "5. Cage Procedures \n" << "6. Zoo Finances \n" << endl;

cin >> functionChoice;
cout << endl;

while (caseControl == 'y' or caseControl == 'Y' or caseControl == 'yes' or caseControl == 'Yes'){
    switch (functionChoice){
        case 1:
            customerBilling();
            break;
        case 2:
            customerPopulation();
            break;
        case 3:
            animalPopulation();
            break;
        case 4:
            animalHealth();
            break;
        case 5:
            cageProcedures();
            break;
        case 6:
            zooFinances();
            break;
        default:
            cout << "Not a valid selection." << endl;
            break;
    }

    cout << "\nWould you like to use another function? Y/N" << endl;
    cin >> caseControl;
    cout << endl;

    if (caseControl == 'y' || caseControl == 'Y' || caseControl == 'yes' || caseControl == 'Yes'){
        cout << "Please choose a function to access" << endl;
        cout << "1. Customer Billing \n" << "2. Customer Population \n" << "3. Animal Population \n";
        cout << "4. Animal Health \n" << "5. Cage Procedures \n" << "6. Zoo Finances \n" << endl;
        cin >> functionChoice;
        cout << endl;
    }else if(caseControl == 'n' or caseControl == 'N' or caseControl == 'no' or caseControl == 'No'){
        cout << "Goodbye" << endl;
    }else{
        cout << "Input not recognized. Goodbye." << endl;
        }
    }
}



void customerBilling(){

int billingSelection = 0, priceCheckSelection = 0;
float moneyCollected = 0, moneyRefunded = 0, creditIssued = 0;

cout << "Please select method: \n 1. Collect Payment \n 2. Issue Refund \n 3. Issue Credit \n 4. Price Check \n 5. Cancel Transaction \n 6. Request Transaction ID \n";
cin >> billingSelection;

switch (billingSelection){
case 1:
    cout << "How much are you collecting?\n";
    cin >> moneyCollected;
    cout << "You have collected $" << moneyCollected << endl;
    break;

case 2:
    cout << "How much are you refunding?\n";
    cin >> moneyRefunded;
    cout << "You are refunding $" << moneyRefunded << endl;
    break;

case 3:
    cout << "How much credit are you issuing?\n";
    cin >> creditIssued;
    cout << "You are issuing $" << creditIssued << " in credit." << endl;
    break;

case 4:
    cout << "What would you like to price check?\n 1. Adult ticket\n 2. Child ticket\n ";
    cin >> priceCheckSelection;
    cout << "priceCheckSelection= " << priceCheckSelection << endl;
    if (priceCheckSelection == 1){
        cout << "An adult ticket costs $5.00";
    }
    if (priceCheckSelection == 2){
        cout << "A child ticket costs $3.00";
    }
    if (priceCheckSelection > 2 || priceCheckSelection < 1){
        cout << "Input not recognized.";
    }
    break;

case 5:
    cout << "Canceling transaction\n";
    break;

case 6:
    cout << "Transaction ID is: 1\n";
    break;

default:
    cout << "Not a valid selection.";
    break;
    }
};



void customerPopulation(){
cout << "customerPopulation executed!" << endl;
};



void animalPopulation(){
cout << "animalPopulation executed!" << endl;
};



void animalHealth(){
cout << "animalHealth executed!" << endl;
};



void cageProcedures(){
cout << "cageProcedures executed!" << endl;
};



void zooFinances(){
cout << "zooFinances executed!" << endl;
};




