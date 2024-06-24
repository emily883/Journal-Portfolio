# Item-Tracking Program for Corner Grocer

## Author
Emily Cruz Gutiérrez

## Date
06/23/2024

## Introduction
This document provides an overview of the item-tracking program developed for Corner Grocer. The program reads a text file containing a list of items purchased throughout the day and provides various functionalities to analyze and display the frequency of each item. The functionalities include searching for the frequency of a specific item, displaying all items with their frequencies, and generating a histogram of item frequencies.

## Project Summary
The item-tracking program was developed to solve the problem of manually tracking and analyzing the frequency of item purchases at Corner Grocer. By automating this process, the program allows the store to gain valuable insights into customer purchasing patterns, which can be used to optimize inventory management and store layout.

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

## Reflection
### Summary of the Project and Problem Solved
The item-tracking program was designed to automate the tracking and analysis of item purchases at Corner Grocer. By providing functionalities such as item frequency search, list printing, and histogram generation, the program addresses the inefficiencies and inaccuracies of manual tracking.

### Accomplishments
I particularly excelled at creating a user-friendly interface and ensuring efficient data handling using maps. The program's ability to quickly retrieve and display item frequencies demonstrates its effectiveness in processing and presenting data.

### Potential Enhancements
Enhancements could include optimizing file I/O operations to handle larger datasets more efficiently, implementing security measures to protect data integrity, and adding a graphical user interface (GUI) for improved user experience. These improvements would make the program more efficient, secure, and user-friendly.

### Challenges and Solutions
The most challenging part was ensuring accurate data parsing and handling edge cases such as missing or malformed data entries. I overcame this by thorough testing and using robust error-checking mechanisms. Adding comprehensive logging and debugging tools to my support network also helped in identifying and resolving issues.

### Transferable Skills
Skills gained from this project include data manipulation using C++ maps, user interface design, and implementing file I/O operations. These skills are highly transferable to other programming projects and coursework, especially those involving data processing and user interaction.

### Code Maintainability
To ensure maintainability, readability, and adaptability, I followed best coding practices such as using meaningful variable names, modularizing code into functions, and adding comments and documentation. This approach makes the program easier to understand, modify, and extend in the future.

<br />

Say hi if u read this :)