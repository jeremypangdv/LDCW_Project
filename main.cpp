#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int getValidChoice(int min, int max) {
    int choice;

    while (true) {
        cin >> choice;

        if (cin.fail() || choice < min || choice > max) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number from " << min << " to " << max << ": ";
        } else {
            return choice;
        }
    }
}

double getValidPrice() {
    double price;

    while (true) {
        cin >> price;

        if (cin.fail() || price < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid price. Please enter a valid amount: RM";
        } else {
            return price;
        }
    }
}

void showTitle() {
    cout << "============================================" << endl;
    cout << " Shopee Product Recommendation Assistant" << endl;
    cout << "============================================" << endl;
}

void showInnovationSummary() {
    cout << endl;
    cout << "Shopee Innovation Summary" << endl;
    cout << "-------------------------" << endl;
    cout << "Shopee disrupted traditional retail by offering mobile-first online shopping." << endl;
    cout << "It improved convenience through vouchers, digital payments, seller tools, and home delivery." << endl;
    cout << "This connects to Shopee's disruptive innovation because it reduced shopping friction for buyers and sellers." << endl;
    cout << endl;
}

void showProductRecommendation() {
    int category;
    int budget;
    int userType;

    cout << endl;
    cout << "Choose product category:" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Fashion" << endl;
    cout << "3. Beauty" << endl;
    cout << "4. Groceries" << endl;
    cout << "Enter category choice: ";
    category = getValidChoice(1, 4);

    cout << endl;
    cout << "Choose your budget range:" << endl;
    cout << "1. Below RM50" << endl;
    cout << "2. RM50 - RM150" << endl;
    cout << "3. Above RM150" << endl;
    cout << "Enter budget choice: ";
    budget = getValidChoice(1, 3);

    cout << endl;
    cout << "Choose user type:" << endl;
    cout << "1. Student" << endl;
    cout << "2. Family buyer" << endl;
    cout << "3. Small seller" << endl;
    cout << "4. General buyer" << endl;
    cout << "Enter user type choice: ";
    userType = getValidChoice(1, 4);

    cout << endl;
    cout << "Product Recommendation Result" << endl;
    cout << "-----------------------------" << endl;

    if (category == 1 && budget == 1) {
        cout << "Recommendation: Phone accessories or earphones" << endl;
        cout << "Reason: These products are affordable and suitable for price-sensitive Shopee users." << endl;
    } else if (category == 1 && budget == 3) {
        cout << "Recommendation: Smartphone or tablet" << endl;
        cout << "Reason: Shopee allows users to compare prices, reviews, and vouchers before buying electronics." << endl;
    } else if (category == 2 && userType == 1) {
        cout << "Recommendation: Casual clothing or school bag" << endl;
        cout << "Reason: This suits students who want affordable fashion products." << endl;
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
        cout << "Reason: This is suitable for general users who want convenience and lower prices." << endl;
    }

    cout << endl;
}

void showCheckoutSummary() {
    int voucherType;
    int deliveryOption;
    double productPrice;
    double discount = 0.0;
    double deliveryFee = 0.0;
    double finalTotal;

    cout << endl;
    cout << "Shopee Checkout Summary" << endl;
    cout << "-----------------------" << endl;

    cout << "Enter product price (RM): ";
    productPrice = getValidPrice();

    cout << endl;
    cout << "Choose voucher type:" << endl;
    cout << "1. No voucher" << endl;
    cout << "2. RM5 discount voucher" << endl;
    cout << "3. 10% discount voucher" << endl;
    cout << "Enter voucher choice: ";
    voucherType = getValidChoice(1, 3);

    if (voucherType == 2) {
        discount = 5.0;
    } else if (voucherType == 3) {
        discount = productPrice * 0.10;
    }

    cout << endl;
    cout << "Choose delivery option:" << endl;
    cout << "1. Standard delivery (RM4.90)" << endl;
    cout << "2. Express delivery (RM9.90)" << endl;
    cout << "3. Free shipping campaign" << endl;
    cout << "Enter delivery choice: ";
    deliveryOption = getValidChoice(1, 3);

    if (deliveryOption == 1) {
        deliveryFee = 4.90;
    } else if (deliveryOption == 2) {
        deliveryFee = 9.90;
    } else {
        deliveryFee = 0.0;
    }

    finalTotal = productPrice - discount + deliveryFee;

    if (finalTotal < 0) {
        finalTotal = 0;
    }

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Checkout Result" << endl;
    cout << "---------------" << endl;
    cout << "Product price: RM" << productPrice << endl;
    cout << "Discount: RM" << discount << endl;
    cout << "Delivery fee: RM" << deliveryFee << endl;
    cout << "Final total: RM" << finalTotal << endl;
    cout << "Reason: Shopee uses vouchers and delivery options to make online shopping cheaper and more convenient." << endl;
    cout << endl;
}

int main() {
    int choice;
    bool running = true;

    while (running) {
        showTitle();

        cout << "Welcome to the Shopee interactive program!" << endl;
        cout << "This program helps users get product suggestions and checkout information." << endl;
        cout << endl;

        cout << "Main Menu" << endl;
        cout << "1. Get product recommendation" << endl;
        cout << "2. Calculate checkout summary" << endl;
        cout << "3. View Shopee innovation summary" << endl;
        cout << "4. Exit" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        choice = getValidChoice(1, 4);

        if (choice == 1) {
            showProductRecommendation();
        } else if (choice == 2) {
            showCheckoutSummary();
        } else if (choice == 3) {
            showInnovationSummary();
        } else if (choice == 4) {
            cout << endl;
            cout << "Thank you for using the Shopee program. Goodbye!" << endl;
            running = false;
        }
    }

    return 0;
}