/*
 *
 * Author: Emily Cruz Gutiérrez
 *
 * Date: 06/23/2024
 *
 */


#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

// Function to load the data into the map (itemFrequency here)
void LoadItemData(const string& filename, map<string, int>& itemFrequency) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Can't open the file." << endl;
        exit(1);
    }

    string item;
    while (inputFile >> item) {
        itemFrequency[item]++;
    }

    inputFile.close();
}

// Function to back up frequency data to a file
void BackupFrequencyData(const map<string, int>& itemFrequency) {
    ofstream outputFile("frequency.dat");
    for (const auto& entry : itemFrequency) {
        outputFile << entry.first << " " << entry.second << endl;
    }
    outputFile.close();
}

// Function to search for the frequency of an item
void SearchItemFrequency(const map<string, int>& itemFrequency) {
    string item;
    cout << "Enter the item to search for: ";
    cin >> item;
    auto it = itemFrequency.find(item);
    if (it != itemFrequency.end()) {
        cout << item << " was purchased " << it->second << " times." << endl;
    } else {
        cout << item << " was not found in the purchase records." << endl;
    }
}

// Function to print the list of all items and their frequencies
void PrintItemList(const map<string, int>& itemFrequency) {
    cout << left << setw(15) << "Item" << "Frequency" << endl;
    cout << "------------------------" << endl;
    for (const auto& entry : itemFrequency) {
        cout << left << setw(15) << entry.first << entry.second << endl;
    }
}

// Function to print a histogram of item frequencies
void PrintHistogram(const map<string, int>& itemFrequency) {
    for (const auto& entry : itemFrequency) {
        cout << left << setw(15) << entry.first << string(entry.second, '*') << endl;
    }
}

int main() {
    // Define a map to store item frequencies
    map<string, int> itemFrequency;

    // Load data from the input file
    LoadItemData("CS210_Project_Three_Input_File.txt", itemFrequency);

    // Back up frequency data to a file
    BackupFrequencyData(itemFrequency);

    int choice = 0;
    while (choice != 4) {
        cout << "\nMenu Options:" << endl;
        cout << "1. Search for the frequency of an item" << endl;
        cout << "2. Print the list of all items and their frequencies" << endl;
        cout << "3. Print a histogram of item frequencies" << endl;
        cout << "4. Exit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                SearchItemFrequency(itemFrequency);
                break;
            case 2:
                PrintItemList(itemFrequency);
                break;
            case 3:
                PrintHistogram(itemFrequency);
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
