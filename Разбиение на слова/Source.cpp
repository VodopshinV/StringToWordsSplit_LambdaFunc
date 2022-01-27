#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> SplitIntoWords(const string& s);

int main()
{
	/*string s = "C Cpp Java Python";

	vector<string> words = SplitIntoWords(s);
	cout << words.size() << " ";
	for (auto it = begin(words); it != end(words); ++it) {
		if (it != begin(words)) {
			cout << "/";
		}
		cout << *it;
	}
	cout << endl;

	system("pause");*/
	return 0;
}

vector<string> SplitIntoWords(const string& s)
{
	vector<string>result;
	string new_word;

	auto str_begin = begin(s);
	new_word.push_back(*str_begin);
	
	
	while(str_begin!=end(s))
	{
		str_begin++;
		auto word = find_if(str_begin, end(s),
			[](const char& found_word)
		{
			return found_word == ' ';
		});

		
		while (str_begin != word)
		{
			new_word.push_back(*(str_begin));
			str_begin++;
		}

		result.push_back(new_word);
		new_word.clear();
	}
	return result;
}