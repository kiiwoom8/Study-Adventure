#pragma once
#include <iostream>
void showPath(int current, std::string currentPath);
void insertItemsToPrint(int current, int prev, std::string currentPath);
void printItems(std::map<std::string, std::string>);
void checkUpdate(bool& refresh, bool& pointModified, int point, int completedItems, int numberOfItems);
void showArts(int completedItems, int numberOfItems);
bool checkIfItemCompleted(bool& refresh, bool& pointModified, int& completedItems, int& current, int& point, std::map<std::string, std::string>& items, std::string& currentType);
bool checkIfMenuSelected(int& current, std::string& currentType, std::string input);
bool checkPassword(bool& pointModified, int& current, int& point, std::string& currentType, std::map<std::string, std::string>currentItems, std::string input);