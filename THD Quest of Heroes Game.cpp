// THD Quest of Heroes Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <mmsystem.h>

#pragma comment (lib, "winmm.lib")

// Function to simulate medieval music (placeholder)
void playMedievalMusic() {
    std::cout << "Playing medieval music...\n";
}

// Function to present the next part of the story based on the mission and path chosen
void nextMission(const std::string& character, const std::string& name, int path) {
    if (path == 1) {
        std::cout << name << ", the brave " << character << ", continues through the dense forest. You find a hidden village of elves who ask for your help in defending against a band of orcs. Do you help them? (yes/no): ";
        std::string choice;
        std::cin >> choice;
        if (choice == "yes") {
            std::cout << "You successfully defend the village, earning their eternal gratitude and a magical artifact.\n";
        }
        else {
            std::cout << "You choose not to help. The elves fend off the orcs but will not forget your refusal.\n";
        }
    }
    else if (path == 2) {
        std::cout << name << ", the wise " << character << ", treks through the snowy mountains. You find an ancient temple guarded by a fierce dragon. Do you confront the dragon? (yes/no): ";
        std::string choice;
        std::cin >> choice;
        if (choice == "yes") {
            std::cout << "After a tough battle, you defeat the dragon and uncover ancient knowledge within the temple.\n";
        }
        else {
            std::cout << "You avoid the dragon and find a hidden path leading to a valley of rare herbs.\n";
        }
    }
    else if (path == 3) {
        std::cout << name << ", the noble " << character << ", explores the dark caves. You find a lost kingdom of dwarves in need of a leader. Do you offer your leadership? (yes/no): ";
        std::string choice;
        std::cin >> choice;
        if (choice == "yes") {
            std::cout << "You lead the dwarves to prosperity, forging powerful alliances and crafting legendary weapons.\n";
        }
        else {
            std::cout << "You decline and the dwarves remain in their isolated kingdom, grateful for your presence.\n";
        }
    }
    else {
        std::cout << "Invalid path. Your journey ends abruptly.\n";
    }
}

// Function to present the story based on the path chosen
void presentStory(const std::string& character, const std::string& name, int path) {
    if (path == 1) {
        std::cout << "You, " << name << ", the brave " << character << ", have chosen the path of the forest. You encounter mystical creatures and find hidden treasures.\n";
    }
    else if (path == 2) {
        std::cout << "You, " << name << ", the wise " << character << ", have chosen the path of the mountains. You face harsh weather and treacherous terrain.\n";
    }
    else if (path == 3) {
        std::cout << "You, " << name << ", the noble " << character << ", have chosen the path of the caves. You navigate through darkness and find ancient relics.\n";
    }
    else {
        std::cout << "Invalid path. Your journey ends abruptly.\n";
    }

    // Proceed to next mission based on path
    nextMission(character, name, path);
}

// Function to handle the first mission: opening the chest
void openChest(const std::string& character, const std::string& name) {
    std::cout << "You find a mysterious chest. Do you want to open it? (yes/no): ";
    std::string choice;
    std::cin >> choice;

    if (choice == "yes") {
        std::cout << "The chest opens and reveals a map with three paths.\n";
        std::cout << "Which path do you choose?\n";
        std::cout << "1. Path of the Forest\n";
        std::cout << "2. Path of the Mountains\n";
        std::cout << "3. Path of the Caves\n";
        std::cout << "Enter the number of your choice: ";
        int path;
        std::cin >> path;
        presentStory(character, name, path);
    }
    else {
        std::cout << "You decide not to open the chest. Your adventure ends here.\n";
    }
}

// Function to choose the character
std::string chooseCharacter() {
    std::cout << "Choose your character:\n";
    std::cout << "1. Knight\n";
    std::cout << "2. Sorcerer\n";
    std::cout << "3. Elf\n";
    std::cout << "Enter the number of your choice: ";
    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        return "Knight";
    case 2:
        return "Sorcerer";
    case 3:
        return "Elf";
    default:
        std::cout << "Invalid choice, you will play as a Knight by default.\n";
        return "Knight";
    }
}

// Main function
int main() {
    std::cout << "Welcome to the Medieval Quest Game!\n";
    playMedievalMusic();

    std::string character = chooseCharacter();
    std::cout << "You have chosen to play as a " << character << ".\n";

    std::cout << "Enter the name of your hero: ";
    std::string name;
    std::cin >> name;

    openChest(character, name);

    std::cout << "Thank you for playing the Medieval Quest Game!\n";
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
