/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Spenser Tacinelli
 */

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int quadratic_roots(int a, int b, int c){
    int square_root = sqrt((b*b) - (4*a*c));
    if(square_root < 0){
        cout << "No real roots" << endl;
        return 0;
    }

    int root1 = ((-b + square_root) / (2*a));
    int root2 = ((-b - square_root) / (2*a));

    cout << "Root 1: ";
    cout << root1 << endl;

    cout << "Root 2: ";
    cout << root2 << endl;

    return 0;   
}