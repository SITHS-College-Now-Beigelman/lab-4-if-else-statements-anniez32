// Annie Zhao
// October 1, 2024
// Lab 4

#include <iostream>
#include <string>
using namespace std;

main() 
{
    // variables
    string fruit;
    double sugar;
    char repeat = 'y';   // will be used for the loop

    // loop

    while (repeat == 'y')  // if the user inputs yes, the loop will keep going.
    {
        // ask for fruit name
        cout << "What is the name of this fruit? : ";
        cin >> fruit;

        // ask for grams of sugar in one cup of the fruit
        cout << "How many grams of sugar are in one cup of this fruit? : ";
        cin >> sugar;

        // if statements for sugar content
            if (sugar < 10)
                cout << fruit << " is a LOW SUGAR FRUIT";
            else if (sugar >= 10 && sugar <= 14)
                cout << fruit << " is a MEDIUM SUGAR FRUIT";
            else
                cout << fruit << " is a HIGH SUGAR FRUIT";
        
            cout << endl;

            cout << "Would you like to input another fruit? y/n : ";  // decides whether to loop or not
            cin >> repeat;
    }
   
    return 0;
}

// Output Message 
/*
What is the name of this fruit? : grapes 
How many grams of sugar are in one cup of this fruit? : 23.37
grapes is a HIGH SUGAR FRUIT
Would you like to input another fruit? y/n : y
What is the name of this fruit? : avocado
How many grams of sugar are in one cup of this fruit? : .99
avocado is a LOW SUGAR FRUIT
Would you like to input another fruit? y/n : y
What is the name of this fruit? : strawberries
How many grams of sugar are in one cup of this fruit? : 7
strawberries is a LOW SUGAR FRUIT
Would you like to input another fruit? y/n : y
What is the name of this fruit? : grapefruit
How many grams of sugar are in one cup of this fruit? : 10.6
grapefruit is a MEDIUM SUGAR FRUIT
Would you like to input another fruit? y/n : y
What is the name of this fruit? : orange
How many grams of sugar are in one cup of this fruit? : 14
orange is a MEDIUM SUGAR FRUIT
Would you like to input another fruit? y/n : n
*/