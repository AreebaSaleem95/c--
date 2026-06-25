#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Notepad {
private:
    std::vector<std::string> lines; // Store each line as a string in a vector

public:
    // Function to add a line to the notepad
    void addLine(const std::string& line) {
        lines.push_back(line);
    }

    // Function to edit a specific line
    void editLine(int lineNumber, const std::string& newContent) {
        if (lineNumber >= 0 && lineNumber < lines.size()) {
            lines[lineNumber] = newContent;
        } else {
            std::cout << "Invalid line number.\n";
        }
    }

    // Function to delete a specific line
    void deleteLine(int lineNumber) {
        if (lineNumber >= 0 && lineNumber < lines.size()) {
            lines.erase(lines.begin() + lineNumber);
        } else {
            std::cout << "Invalid line number.\n";
        }
    }

    // Display the content of the notepad
    void displayContent() const {
        for (int i = 0; i < lines.size(); ++i) {
            std::cout << i + 1 << ": " << lines[i] << "\n";
        }
    }

    // Save content to a file
    void saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            for (const auto& line : lines) {
                outFile << line << "\n";
            }
            outFile.close();
            std::cout << "Content saved to " << filename << "\n";
        } else {
            std::cout << "Error opening file for writing.\n";
        }
    }

    // Load content from a file
    void loadFromFile(const std::string& filename) {
        std::ifstream inFile(filename);
        if (inFile.is_open()) {
            lines.clear(); // Clear current content
            std::string line;
            while (std::getline(inFile, line)) {
                lines.push_back(line);
            }
            inFile.close();
            std::cout << "Content loaded from " << filename << "\n";
        } else {
            std::cout << "Error opening file for reading.\n";
        }
    }
};

int main() {
    Notepad notepad;
    int choice;
    std::string line, filename;
    int lineNumber;

    do {
        std::cout << "\n1. Add Line\n2. Edit Line\n3. Delete Line\n4. Display Content\n5. Save to File\n6. Load from File\n0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline after choice input

        switch (choice) {
            case 1:
                std::cout << "Enter the line: ";
                std::getline(std::cin, line);
                notepad.addLine(line);
                break;

            case 2:
                std::cout << "Enter line number to edit: ";
                std::cin >> lineNumber;
                std::cin.ignore();
                std::cout << "Enter new content: ";
                std::getline(std::cin, line);
                notepad.editLine(lineNumber - 1, line);
                break;

            case 3:
                std::cout << "Enter line number to delete: ";
                std::cin >> lineNumber;
                notepad.deleteLine(lineNumber - 1);
                break;

            case 4:
                notepad.displayContent();
                break;

            case 5:
                std::cout << "Enter filename to save: ";
                std::getline(std::cin, filename);
                notepad.saveToFile(filename);
                break;

            case 6:
                std::cout << "Enter filename to load: ";
                std::getline(std::cin, filename);
                notepad.loadFromFile(filename);
                break;

            case 0:
                std::cout << "Exiting the notepad.\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}