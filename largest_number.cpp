// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: December 2019
// This program calculates the average of numbers in a list.

#include <iostream>
#include <ctime>
#include <array>

template<size_t N>
int Largest_number(std::array<int, N> random_list) {
    // this function returns the largest number
    // variables
    int largest_random = 0;

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        if (random_list[loop_counter] > largest_random) {
            largest_random = random_list[loop_counter];
        }
    }
    return largest_random;
}

int main() {
    // this function creates the array
    // variables
    std::array<int, 10> list_random;
    int random_number;
    int large;

    // seed
    unsigned int seed = time(NULL);

    // input
    std::cout << "The randomized numbers are:" << std::endl;
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        random_number = rand_r(&seed) % 100;
        list_random[loop_counter] = random_number;
        std::cout << random_number << ", ";
    }
    std::cout << "" << std::endl;

    // calling function
    large = Largest_number(list_random);

    // output
    std::cout << "The largest number of all numbers is " << large << std::endl;
}
