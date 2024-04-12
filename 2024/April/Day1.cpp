#include <string>
#include <regex>
#include <iostream>

class Solution {
public:
	int lengthOfLastWord(std::string s) {
		std::regex lastWordreg("\\b\\w+\\b");
		std::sregex_iterator iter(s.begin(), s.end(), lastWordreg);
    std::sregex_iterator end;
		std::string lastWord;
			for (auto match = iter; match != end; match++) {
					lastWord = match->str();
			}
		return lastWord.length();
	}
};