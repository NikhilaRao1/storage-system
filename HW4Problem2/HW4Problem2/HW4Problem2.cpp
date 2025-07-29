// HW4Problem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct dataHolder {
    int numValues;
    float* numArray;

};

void finder(dataHolder& x) {

    float numSearch;

    std::cout << "What number are you searching for? \n";
    std::cin >> numSearch;

    for (int i = 0; i < x.numValues; i++) {
        if (x.numArray[i] == numSearch) {
            std::cout << "Your number is in the array\n";
            break;
        }
        if (i == x.numValues-1) {
            std::cout << "Your number is not in the array\n";
        }
    }

}


int main()
{
    dataHolder dataHolder1;

    std::cout << "How many numbers do you want in the array?\n";
    std::cin >>dataHolder1.numValues;

    dataHolder1.numArray = (float*)calloc(dataHolder1.numValues, sizeof(float));

    for (int i = 0; i < dataHolder1.numValues; i++) {
        std::cout << "Enter your number " << i << "\n";
        std::cin >> dataHolder1.numArray[i];
    }

    finder(dataHolder1);

    free(dataHolder1.numArray);


    

}

