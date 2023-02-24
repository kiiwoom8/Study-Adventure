#include "IndexMap.h"
#include "Functions.h"
#include "AsciiArts.h"
using namespace std;
int main() {
    bool refresh = false;
    bool pointModified = false;
    int current = 0;
    int prev = -1;
    int numberOfItems = 0;
    int completedItems = 0;
    int point = 0;
    string currentType = "0";
    string input = "";
    string empty = "";

    numberOfItems = items.size();
    while (true) {
        system("cls");
        //showArts(completedItems, numberOfItems);
        showPath(current, currentType);
        checkUpdate(refresh, pointModified, point, completedItems, numberOfItems);
        insertItemsToPrint(current, prev, currentType);
        if (checkIfItemCompleted(refresh, pointModified, completedItems, current, point, items, currentType)) 
            continue;
        cout << endl;
        printItems(currentItems);
        cout << endl;
        cout << "Enter an item number or \"..\" to go back or \"q\" to quit the program : ";
        getline(cin, input);
        if (input == "q") {
            do {
                cout << "Really want to quit? (y: yes, n: no)" << endl;
                getline(cin, input);
                if (input == "y") {
                    exit(0);
                }
                else if (input == "n") {
                    continue;
                }
                else {
                    cout << "You typed the wrong answer." << endl;
                }
            } while (input != "n");
            continue;
        }
        else if (input == "..") {
            if (current == 0) {
                cout << "Already in the parent path." << endl;
                continue;
            }
            current--;
            if (current == 0) {
                currentType = "0";
            }
            else {
                currentType = currentType.substr(0, 2 * current - 1);
            }
            continue;
        }
        // Check if the item exists
        auto iter = currentItems.find(input);
        if (iter == currentItems.end()) {
            system("cls");
            cerr << "\033[1;31mItem not found.\033[0m" << endl;
            continue;
        }
        // require password
        string password;
        cout << "Password required to access " << iter->first << ": ";
        getline(cin, password);
        if (password == iter->second) {
            currentType = input;
            current++;
        }
        else {
            cout << "Incorrect password." << endl;
                point = point - 10;
                pointModified = true;
            }
    }
    return 0;
}

void showPath(int current, string currentType) {
    for (int i = 0; i <= current; i++) {
        cout << "> ";
        if (i == 0) {
            cout << "Index ";
        }
        else if (i == current) {
            cout << "\033[1;31m" << items.find(currentType.substr(0, 2 * i - 1))->second << "\033[0m ";
        }
        else
            cout << items.find(currentType.substr(0, 2 * i - 1))->second << " ";
    }
    cout << endl;
}

void printItems(map<string, string> currentItems) {
    for (auto iter = currentItems.begin(); iter != currentItems.end(); ++iter) {
        cout << iter->first;
        if (next(iter) != currentItems.end()) {
            cout << "     ";
        }
    }
    cout << endl;
}

void insertItemsToPrint(int current, int prev, string currentType) {
    if (prev != current) {
        prev = current;
        currentItems.clear();
        for (auto const& [key, value] : items) {
            if (key.length() == 2 * current + 1 && (currentType == "0" || key.substr(0, 2 * current - 1).find(currentType) != string::npos))
                currentItems.insert({ key,value });
        }
    }
}

void checkUpdate(bool& refresh, bool& pointModified, int point, int completedItems, int numberOfItems) {
    if (refresh)
        cout << "Achievement: [ \033[1;31m" << completedItems << "\033[0m : " << numberOfItems << " ]" << endl;
    else
        cout << "Achievement: [ " << completedItems << " : " << numberOfItems << " ]" << endl;
    if (pointModified || point < 0)
        cout << "Point: \033[1;31m" << point << "\033[0m" << endl;
    else
        cout << "Point: " << point << endl;
    refresh = false;
    pointModified = false;
}

void showArts(int completedItems, int numberOfItems) {
    string art = "";
    if (completedItems < numberOfItems / 4)
        art = arts[0];
    else if (completedItems < numberOfItems / 2)
        art = arts[1];
    else
        art = arts[2];
    cout << art << endl;
}

bool checkIfItemCompleted(bool& refresh, bool& pointModified, int& completedItems, int& current, int& point, map<string, string>& items, string& currentType) {
    if (currentItems.empty()) {
        current--;
        point = point + 3;
        cout << "Completed 1 Item!" << endl;
        if (current < 0) {
            system("cls");
            //cout << arts[4] << endl;
            cout << "Completed All the Index!" << endl;
            exit(0);
        }
        else if (current == 0)
            currentType = "0";
        else {
            refresh = true;
            pointModified = true;
            completedItems++;
            items.erase(currentType);
            currentType = currentType.substr(0, 2 * current - 1);
        }
        return true;
    }
    else
        return false;
}