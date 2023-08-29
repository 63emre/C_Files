#include<iostream>
#include<string>
using namespace std;

int returnWordCount(string); //returns the word count in integer form
void splitToWords(string, string*); //splits the given sentence into words by putting them into a previously allocated string array
int isPalindrome(string); //checks if a given string is a palindrome
int palindromeCounter(string); //function made to call all the functions above

int main() {
	string sentence;

	cout << "Enter a sentence: ";
	getline(cin, sentence);

	cout << "Total palindrome count in the given sentence is: " << palindromeCounter(sentence) << endl;

	return 0;
}
int returnWordCount(string sentence) {
	int count = 0;
	for (size_t i = 0; i < sentence.size(); i++) //Iterate the string once and count all the ' ' (space) characters, return count + 1 for word count.
	{
		count += (sentence[i] == ' ' && i != sentence.size() - 1); //does not count if the space is at the end of the sentence
	}
	return count + 1;
}

void splitToWords(string sentence, string* words) {
	string word = "";
	int arrayIndex = 0;
	// for the entire length of the "sentence", each character is concatanted into a string until a string is found
	// when a string is found the "saved" word is written into the words[arrayIndex] slot of the string array 
	// to not override the same index of the string array, arrayIndex is incremented by one
	// we do not need to check for going beyond the string array size, as it is allocated dynamically according to the sentence
	for (size_t i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] != ' ') {
			word += sentence[i];
		}
		else {
			words[arrayIndex] = word;
			arrayIndex++;
			word = "";
		}
	}
	words[arrayIndex] = word;
}

int isPalindrome(string word) {
	if (word.size() == 0 || (word.size() == 1 && word[0] == ' ')) { //Initial check for unwanted edge cases.
		return 0;
	}
	//While iterating through the string if the current character (word[i]) is not found at the end index of the buffer (buffer[buffer.size()-1]),
	//the current character is concatenated to the end of the buffer. If the current character is found at the end index of the buffer,
	//the end index of the buffer is deleted.
	//if by the end of the loop the buffer size is 0, then the word is a palindrome.
	for (size_t i = 0; i < word.size(); i++) 
	{
		if(word[i] != word[word.size()-1-i]){
			return 0;
		}
	}
	return 1;
}

int palindromeCounter(string sentence) {
	int palindromeCount = 0; 
	int wordCount = returnWordCount(sentence);
	string* words = new string[wordCount]; //string array allocated with regards to the word count in the sentence
	splitToWords(sentence, words); //Splitting the words into separate strings
	for (size_t i = 0; i < wordCount; i++) //For each word, checking if it is a palindrome
	{
		palindromeCount += isPalindrome(words[i]);
	}
	return palindromeCount;
}