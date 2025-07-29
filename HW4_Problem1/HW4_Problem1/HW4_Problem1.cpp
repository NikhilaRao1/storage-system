// HW4_Problem1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct storage {
    
    int numberofboxes;
    float totalvolumeofboxes;
    float* individualvolume;

};


void defineStorage(storage& x) {
   
    
    std::cout << "How many boxes do you have? \n";
    std::cin >> x.numberofboxes;

    x.individualvolume = (float*)calloc(x.numberofboxes, sizeof(float));

    for (int i = 0; i < x.numberofboxes; i++) {
        std::cout << "What is the volume of box: " << i << "\n";
        std::cin >> x.individualvolume[i];
    }
}

void calcStorage(storage& x) {
    x.totalvolumeofboxes = 0;
    for (int j = 0; j < x.numberofboxes; j++) {
        x.totalvolumeofboxes = x.individualvolume[j] + x.totalvolumeofboxes;
    }
}

int main()
{
    storage storage1;


    defineStorage(storage1);

   /* for (int i = 0; i < storage1.numberofboxes; i++) {
        std::cout << "box" << i << "volume is: "<<storage1.individualvolume[i]<<"\n";

    }*/

    calcStorage(storage1);

    std::cout << "total volume is: " << storage1.totalvolumeofboxes << "\n";
    free(storage1.individualvolume);


}

