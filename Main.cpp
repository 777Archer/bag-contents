/*David Archer
Bag Contents
*/

#include <iostream>
#include "LinkedBag.cpp"
#include "Node.h"
#include "BagInterface.h"
#include "LinkedBag.h"
#include "Node.cpp"
#include <cstring>

using namespace std;


void menu(int selection)
{
    if (selection == 0)
        cout << "\nYou have chosen to quit the program."
        " Thank you and please come back again.\n";

    else if (selection == 1)
    {
        cout << "The size of the linked list is: " << endl;

    }
    else if (selection == 2)
    {
        cout << "Inserting Node at a given position:" << endl;


    }
    else if (selection == 3)
    {
        cout << "Delete a particular node: " << endl;
    }
    else if (selection == 4)
    {
        cout << "Search for an element in the List: " << endl;

    }
    else if (selection == 5)
    {
        cout << "Enter the entry to obtain its count:" << endl;

    }
    else if (selection == 6)
    {
        cout << "Display elements of link list" << endl;

    }
    else if (selection == 7)
    {
        cout << "Bag contents has been cleared" << endl;

    }
    else
    {
        cout << "Invalid selection entered. Please try again." << endl;
    }
}


int main()
{
    int selection;
    do
    {
        BagInterface<string>* bagPtr = nullptr;
        char userChoice{};
        cout << "\tMENU\n------------------------------" << endl;
        cout << "1) - Show size\n" << "2) - Add new entry\n" << "3) - Remove entry" << endl;
        cout << "4) - Search for an entry\n" << "5) - Give the count of a particular entry" << endl;
        cout << "6) - Print the bag contents\n" << "7 - Clear" << "\n0) - Quit" << endl;
        cout << "Please make a selection" << endl;
        cin >> selection;

        if (!cin)
        {
            cout << "Not a valid option" << "\n" << endl;
            cin.clear();
            cin.ignore(1);

        }
        else
        {
            menu(selection);
            cout << "\n";
        }
    } while (selection != 0);

    system("PAUSE");
    return 0;
}

