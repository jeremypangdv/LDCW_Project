#include <iostream>
using namespace std;

int main() {
    int choice;
    int category;
    int budget;
    int userType;

    cout << "============================================" << endl;
    cout << " Shopee Product Recommendation Assistant" << endl;
    cout << "============================================" << endl;

    cout << "Welcome to the Shopee interactive program!" << endl;
    cout << "This program will help users get product suggestions and checkout information." << endl;
    cout << endl;

    cout << "Main Menu" << endl;
    cout << "1. Get product recommendation" << endl;
    cout << "2. Calculate checkout summary" << endl;
    cout << "3. View Shopee innovation summary" << endl;
    cout << "4. Exit" << endl;
    cout << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << endl;
        cout << "Choose product category:" << endl;
        cout << "1. Electronics" << endl;
        cout << "2. Fashion" << endl;
        cout << "3. Beauty" << endl;
        cout << "4. Groceries" << endl;
        cout << "Enter category choice: ";
        cin >> category;

        cout << endl;
        cout << "Choose your budget range:" << endl;
        cout << "1. Below RM50" << endl;
        cout << "2. RM50 - RM150" << endl;
        cout << "3. Above RM150" << endl;
        cout << "Enter budget choice: ";
        cin >> budget;

        cout << endl;
        cout << "Choose user type:" << endl;
        cout << "1. Student" << endl;
        cout << "2. Family buyer" << endl;
        cout << "3. Small seller" << endl;
        cout << "4. General buyer" << endl;
        cout << "Enter user type choice: ";
        cin >> userType;

        cout << endl;
        cout << "Product Recommendation Result" << endl;
        cout << "-----------------------------" << endl;

        if (category == 1 && budget == 1) {
            cout << "Recommendation: Phone accessories or earphones" << endl;
            cout << "Reason: These products are affordable and popular among price-sensitive Shopee users." << endl;
        } else if (category == 1 && budget == 3) {
            cout << "Recommendation: Smartphone or tablet" << endl;
            cout << "Reason: Shopee allows users to compare prices and look for vouchers before buying electronics." << endl;
        } else if (category == 2 && userType == 1) {
            cout << "Recommendation: Casual clothing or school bag" << endl;
            cout << "Reason: This choice suits students who want affordable fashion products." << endl;
        } else if (category == 3 && budget == 2) {
            cout << "Recommendation: Skincare set" << endl;
            cout << "Reason: Beauty products are commonly bought online because users can compare ratings and reviews." << endl;
        } else if (category == 4 && userType == 2) {
            cout << "Recommendation: Household groceries bundle" << endl;
            cout << "Reason: This is suitable for family buyers who want convenience and home delivery." << endl;
        } else if (userType == 3) {
            cout << "Recommendation: Packaging materials or seller tools" << endl;
            cout << "Reason: Shopee helps small sellers reach more customers through its online marketplace." << endl;
        } else {
            cout << "Recommendation: Daily essentials with discount vouchers" << endl;
            cout << "Reason: This is a general Shopee recommendation for users who want convenience and lower prices." << endl;
        }

    } else if (choice == 2) {
        cout << endl;
        cout << "Checkout summary feature selected." << endl;
        cout << "This feature will be added in the next stage." << endl;

    } else if (choice == 3) {
        cout << endl;
        cout << "Shopee Innovation Summary" << endl;
        cout << "-------------------------" << endl;
        cout << "Shopee disrupted traditional retail by offering mobile-first online shopping." << endl;
        cout << "It improved convenience through vouchers, digital payments, seller tools, and home delivery." << endl;

    } else if (choice == 4) {
        cout << endl;
        cout << "Thank you for using the program. Goodbye!" << endl;

    } else {
        cout << endl;
        cout << "Invalid choice." << endl;
    }

    return 0;
}