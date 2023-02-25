#include "IndexMap.h"
#include "Functions.h"
#include "AsciiArts.h"
#include <sstream>
#include <vector>


using namespace std;
static const int wrongPoint = 5;
static const int hintPoint = 5;
int main() {
    bool refresh = false;
    bool pointModified = false;
    int current = 0;
    int prev = -1;
    int completedItems = 0;
    int point = 0;
    string currentType = "0";
    string input = "";

    int numberOfItems = items.size();
    while (true) {
        system("cls");
        //showArts(completedItems, numberOfItems);
        showPath(current, currentType);
        checkUpdate(refresh, pointModified, point, completedItems, numberOfItems);
        insertItemsToPrint(current, prev, currentType);
        if (checkIfItemCompleted(refresh, pointModified, completedItems, current, point, items, currentType)) 
            continue;
        printItems(currentItems);
        cout << "Enter an item number or \"..\" to go back or \"q\" to quit the program : ";
        getline(cin, input);
        if (checkIfMenuSelected(current, currentType, input) || checkPassword(pointModified, current, point, currentType, currentItems, input))
            continue;
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
    cout << endl;
    for (auto iter = currentItems.begin(); iter != currentItems.end(); ++iter) {
        cout << iter->first;
        if (next(iter) != currentItems.end()) {
            cout << "     ";
        }
    }
    cout << endl << endl;
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

bool checkIfMenuSelected(int& current, string& currentType,string input) {
    if (input == "q") {
        do {
            cout << "Really want to quit? (y: yes, n: no)" << endl;
            getline(cin, input);
            if (input == "y") {
                exit(0);
            }
            else if (input == "n") {
                break;
            }
        } while (input != "n");
        return true;
    }
    else if (input == "..") {
        current--;
        if (current < 0) {
            current = 0;
            cout << "Already in the parent path." << endl;
        }
        else if (current == 0) {
            currentType = "0";
        }
        else {
            currentType = currentType.substr(0, 2 * current - 1);
        }
        return true;
    }
    return false;
}

bool checkPassword(bool& pointModified, int& current, int& point, string& currentType, map<string, string>currentItems, string input) {
    auto iter = currentItems.find(input);
    if (iter == currentItems.end()) {
        system("cls");
        cerr << "\033[1;31mItem not found.\033[0m" << endl;
        return true;
    }
    string password;
    cout << "Password required to access \033[1;31m" << iter->first  << "\033[0m or \"h\" to pay " << hintPoint << " points and get a hint" << ": ";
    getline(cin, password);
    if (password == "h") {
        stringstream ss(iter->second);
        vector <string> substrings;
        string substring;
        while (ss >> substring) {
            substrings.push_back(substring);
        }
        string hint;
        bool first = true;
        for (const auto& s : substrings) {
            if (first) {
                first = false;
                hint = s;
            }
            else
                hint = hint + " " + s;
            point = point - hintPoint;
            system("cls");
            showPath(current, currentType);
            cout << endl;
            cout << "Point: \033[1;31m" << point << "\033[0m" << endl;
            cout << "Hint: " << hint << "\nType the answer or \"h\" for the next hint: ";
            getline(cin, password);
            if (password != "h")
                break;
        }
    }
    if (password == iter->second) {
        currentType = input;
        current++;
    }
    else {
        cout << "Incorrect password." << endl;
        point = point - wrongPoint;
        pointModified = true;
    }
    return false;
}