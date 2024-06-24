# Item-Tracking Program for Corner Grocer

## Author
Emily Cruz Gutiérrez

## Date
06/23/2024

## Introduction
This document provides an overview of the item-tracking program developed for Corner Grocer. The program reads a text file containing a list of items purchased throughout the day and provides various functionalities to analyze and display the frequency of each item. The functionalities include searching for the frequency of a specific item, displaying all items with their frequencies, and generating a histogram of item frequencies.

## Design and Functionality
The program is designed using C++ and includes the following main components:

### 1. Loading Item Data
- The function `LoadItemData` reads data from a text file (`CS210_Project_Three_Input_File.txt`) and populates a map (`itemFrequency`) where keys are item names and values are their purchase frequencies.

### 2. Backing Up Data
- The function `BackupFrequencyData` writes the item frequencies stored in the map to a backup file (`frequency.dat`).

### 3. Searching for Item Frequency
- The function `SearchItemFrequency` prompts the user to enter an item name and displays the number of times that item was purchased. If the item is not found, an appropriate message is displayed.

### 4. Printing Item List
- The function `PrintItemList` prints all items along with their purchase frequencies in a tabular format.

### 5. Printing Histogram
- The function `PrintHistogram` generates a histogram where each item's frequency is represented by a corresponding number of asterisks (*).

## Program Flow
### 1. Initialization
- The program initializes a map to store item frequencies.
- Data is loaded from the input file and backed up.

### 2. User Interaction
- The user is presented with a menu of options:
    1. Search for the frequency of an item.
    2. Print the list of all items and their frequencies.
    3. Print a histogram of item frequencies.
    4. Exit the program.

- Based on the user's choice, the appropriate function is called to perform the requested operation.

## Conclusion
This program efficiently tracks and analyzes item purchases, providing valuable insights for the Corner Grocer to optimize their store layout based on item popularity. The use of maps ensures fast and efficient data retrieval and manipulation.
