//
//  main.cpp
//  Smallest Number Calculator
//
//  Created by Niki Namian on 11/20/24.
//

#include <iostream>

using namespace std;

int main()
{
    //declare three integer variables
    int first, second, third, smallest;
    
    //prompt and get user inputs
    cout << "Enter an integer: ";
    cin >> first;
    cout << "Enter an integer: ";
    cin >> second;
    cout << "Enter an integer: ";
    cin >> third;
    
    //find the smallest number
    if ((first<=second)&&(first<=third))
    {
        smallest = first;
    }
    else if ((second<=first)&&(second<=third))
    {
        smallest = second;
    }
    else
    {
        smallest = third;
    }
    //output the smallest value
    cout <<"The smallest number is "<<smallest<<endl;
    return 0;
}


