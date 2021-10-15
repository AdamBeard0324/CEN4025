#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>

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


//Beginning of void functions


void customerBilling(){

int billingSelection = 0, priceCheckSelection = 0;
float moneyCollected = 0, moneyRefunded = 0, creditIssued = 0;

cout << "Please select method: \n 1. Collect Payment \n 2. Issue Refund \n 3. Issue Credit \n 4. Price Check \n 5. Cancel Transaction \n 6. Request Transaction ID \n" << endl;
cin >> billingSelection;
cout << endl;

switch (billingSelection){
case 1:
    cout << "How much are you collecting?\n";
    cin >> moneyCollected;
    cout << "You have collected $" << setprecision(4) << moneyCollected << endl;
    break;

case 2:
    cout << "How much are you refunding?\n";
    cin >> moneyRefunded;
    cout << "You are refunding $" << setprecision(4) << moneyRefunded << endl;
    break;

case 3:
    cout << "How much credit are you issuing?\n";
    cin >> creditIssued;
    cout << "You are issuing $" << setprecision(4) << creditIssued << " in credit." << endl;
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

int customerMenuSelection = 0;
string custName = " ";

cout << "Please select method: \n 1. Add customer \n 2. Remove customer \n 3. Total number of customers \n 4. Daily customer population report \n" << endl;
cin >> customerMenuSelection;
cout << endl;

switch (customerMenuSelection){
case 1:
    cout << "Enter the name of the customer you are adding...\n";
    cin >> custName;
    cout << "You have entered " << custName << " as a new customer" << endl;
    break;

case 2:
    cout << "Enter the name of the customer you are removing...\n";
    cin >> custName;
    cout << "You have removed " << custName << endl;
    break;

case 3:
    cout << "The total number of customers is: 10,623\n";
    break;

case 4:
    cout << "The amount of todays customers is: 368\n" << endl;
    break;
default:
    cout << "Not a valid selection.";
    break;
    }
};



void animalPopulation(){
int customerMenuSelection = 0;
string animalType = " ";
string animalName = " ";

cout << "Please select method: \n 1. Add animal \n 2. Remove animal \n 3. Total number of animals \n 4. Daily animal population report \n" << endl;
cin >> customerMenuSelection;
cout << endl;

switch (customerMenuSelection){
case 1:
    cout << "Enter the type of the animal you are adding...\n";
    cin >> animalType;
    cout << endl;
    cout << "Enter the name of the animal you are adding...\n";
    cin >> animalName;
    cout << endl;
    cout << "You have added a " << animalType << " that is named " << animalName <<endl;
    break;

case 2:
    cout << "Enter the type of the animal you are removing...\n";
    cin >> animalType;
    cout << endl;
    cout << "Enter the name of the animal you are removing...\n";
    cin >> animalName;
    cout << endl;
    cout << "You have removed a " << animalType << " that is named " << animalName <<endl;
    break;

case 3:
    cout << "The total number of animals is: 652\n";
    break;

case 4:
    cout << "2 animals added today.\n" << endl;
    break;
default:
    cout << "Not a valid selection.";
    break;
    }
};



void animalHealth(){

string animalID = " ", medicationName = " ";
int animalHealthMenuSelection = 0;

cout << "Please select method: \n 1. Issue Medication \n 2. Discontinue medication \n 3. Update health notes of animal \n" << endl;
cin >> animalHealthMenuSelection;
cout << endl;

switch (animalHealthMenuSelection){
case 1:
    cout << "Enter the ID of the animal...\n";
    cin >> animalID;
    cout << endl;
    cout << "Enter the name of the medication that is being added...\n";
    cin >> medicationName;
    cout << endl;
    cout << "You have added " << medicationName << " to animal: " << medicationName <<endl;
    break;

case 2:
    cout << "Enter the ID of the animal...\n";
    cin >> animalID;
    cout << endl;
    cout << "Enter the name of the medication that is being discontinued...\n";
    cin >> medicationName;
    cout << endl;
    cout << "You have discontinued " << medicationName << " from animal: " << animalID <<endl;
    break;

case 3:

    cout << "Which animal are you updating?\n";
    cin >> animalID;
    cout << endl;
    cout << "Adding additional comments to animal: " << animalID << endl;
    break;

default:
    cout << "Not a valid selection.";
    break;
    }
};



void cageProcedures(){

int cageProSelection = 0, animalID = 0, cageNumber = 0;
char safteyPrompt;
char safetyVerification;

cout << "Please select method: \n 1. Check out animal \n 2. Check in animal \n 3. Unlock cage \n 4. Lock cage. \n 5. Emergency lock \n" << endl;
cin >> cageProSelection;
cout << endl;

switch (cageProSelection){
case 1:
    cout << "Enter the ID of the animal...\n";
    cin >> animalID;
    cout << endl;
    cout << "Enter the cage number\n";
    cin >> cageNumber;
    cout << endl;
    cout << "You have checked out animal " << animalID << " from cage: " << cageNumber <<endl;
    break;

case 2:
    cout << "Enter the ID of the animal...\n";
    cin >> animalID;
    cout << endl;
    cout << "Enter the cage number\n";
    cin >> cageNumber;
    cout << endl;
    cout << "You have checked in animal " << animalID << " to cage: " << cageNumber <<endl;
    break;

case 3:

    cout << "Which cage do you want to unlock?\n";
    cin >> cageNumber;
    cout << endl;
    cout << "Please verify all safety procedures have been followed...Y/N" << endl;
    cin >> safetyVerification;
    cout << endl;
    if (safteyPrompt == 'y' || safteyPrompt == 'Y'){
        cout << "Thank you.\n";
        cout << "Unlocking cage " << cageNumber << endl;
    }else if(safteyPrompt == 'n' || safteyPrompt == 'N'){
        cout << "Cage not unlocking.  Please try again after all safety procedures have been followed." << endl;
    }else{
        cout << "Input not recognized. Goodbye." << endl;
        }
    break;

case 4:
    cout << "Enter which cage to lock...\n";
    cin >> cageNumber;
    cout << "\nLocking cage " << cageNumber << endl;
    break;

case 5:
    cout << "Do you wish to initiate emergency procedures? Y/N" << endl;
    cin >> safteyPrompt;
    if (safteyPrompt == 'y' || safteyPrompt == 'Y'){
        cout << "Initiating emergency procedure\n";
        Sleep( 1000 );
        cout << "Locking all cages\n";
        Sleep( 1000 );
        cout << "Activating emergency lights\n";
        Sleep( 1000 );
        cout << "Notifying EMS\n";
        Sleep( 1000 );
        cout << "Emergency procedures completed...";

    }else if(safteyPrompt == 'n' || safteyPrompt == 'N'){
        cout << "Emergency procedures not activated.\n" << endl;
    }else{
        cout << "Input not recognized. Goodbye.\n" << endl;
        }
        break;

default:
    cout << "Not a valid selection.";
    break;
    }
};



void zooFinances(){
int financeMenuSelection = 0;
double incomeAmount = 0, spendingAmount = 0;

cout << "Please select method: \n 1. Report of total daily income \n 2. Report of total daily spending \n 3. Add income amount \n 4. Add spending amount.\n" << endl;
cin >> financeMenuSelection;
cout << endl;

switch (financeMenuSelection){
case 1:
    cout << "Total income for today is: $1,398.00\n";
    break;

case 2:
    cout << "Total spending for today is: $ 581.91\n";
    break;

case 3:

    cout << "How much income is being added?\n";
    cin >> incomeAmount;
    cout << endl;
    cout << "Adding " << setprecision(10) << incomeAmount << " to daily income.\n" << endl;
    break;

case 4:

    cout << "Amount spent?\n";
    cin >> spendingAmount;
    cout << endl;
    cout << "Adding " << setprecision(10) << spendingAmount << " to spending report.\n" << endl;
    break;

default:
    cout << "Not a valid selection.";
    break;
    }
};
