#pragma once
#include <iostream>
void showPath(int current, std::string currentPath);
void insertItemsToPrint(int current, int prev, std::string currentPath);
void printItems(std::map<std::string, std::string>);