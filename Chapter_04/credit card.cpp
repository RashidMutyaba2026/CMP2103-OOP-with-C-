#include <iostream>
#include <string>

int main() {
    std::string card;
    std::cout << "Enter a credit card number: ";
    std::cin >> card;

    int size = card.length();

    // 1. Check size constraints
    if (size < 13 || size > 16) {
        std::cout << card << " is invalid" << std::endl;
        return 0;
    }

    // 2. Check prefix rules using string matching
    bool hasValidPrefix = (card.rfind("4", 0) == 0)  || // Visa
                          (card.rfind("5", 0) == 0)  || // MasterCard
                          (card.rfind("37", 0) == 0) || // American Express
                          (card.rfind("6", 0) == 0);    // Discover

    if (!hasValidPrefix) {
        std::cout << card << " is invalid" << std::endl;
        return 0;
    }

    // 3. Perform the Luhn Check loop
    int totalSum = 0;
    bool doubleCurrentDigit = false;

    // Loop backward from right to left
    for (int i = size - 1; i >= 0; i--) {
        int digit = card[i] - '0'; // Convert char to integer

        if (doubleCurrentDigit) {
            digit *= 2;
            if (digit > 9) {
                digit = (digit % 10) + (digit / 10); // Sum the two digits
            }
        }

        totalSum += digit;
        doubleCurrentDigit = !doubleCurrentDigit; // Alternate every turn
    }

    // 4. Output the validation result
    if (totalSum % 10 == 0) {
        std::cout << card << " is valid" << std::endl;
    } else {
        std::cout << card << " is invalid" << std::endl;
    }

    return 0;
}
