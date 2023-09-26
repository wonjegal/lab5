#include "stringop.h"

vector<string> get_str_vec(int argc, char *argv[])
{
    vector<string> result;
    for(int i=1; i<=argc/2; i++)  result.push_back((string)argv[i]);
    return result;
}

vector<int> get_int_vec(int argc, char *argv[])
{
	vector<int> result;
	for(int i = (argc/2)+1 ; i < argc; i++) result.push_back(atoi(argv[i]));
	return result;
}

string Add(string s1, string s2){		// 겹치는 부분 찾아줌 s1 = abc  s2 = bcd
	for(int i = s2.length(); i > 0; i--)
	{
		if (i > s1.length()) continue;

		string temp = s2.substr(0, i);

		if(s1.find(temp, s1.length()-i) != string::npos){			// find content
			
			if (i == s2.length()) return s1;					

			return s1 + s2.substr(i, s2.length() - i);
		}
	}
	return s1 + s2;
	
}
string string_add(vector<string> v1)
{
	string s1 = v1[0];
	for(int i = 1; i < v1.size(); i++){
		s1 = Add(s1, v1[i]);
	}
	return s1;

}

string Sub(string s1, string s2){
	for (int i = 0 ; i < s2.length(); i++){
		if(s1.find(s2[i]) != string::npos){			// if found
			s1.erase(s1.find(s2[i]), 1);
		}
	}
	return s1;
}


string string_sub(vector<string> v1){
	string s1 = v1[0];
	for (int i = 1; i <  v1.size(); i++){
		s1 = Sub(s1, v1[i]);
	}
	return s1;
}


vector<string> string_mul(vector<string> v1, vector<int> v2){
	vector<string> n_v;
	for(int i = 0 ; i < v2.size(); i++){
		for(int j = 0 ; j < v2[i]; j++){
			n_v.push_back(v1[i]);
		}
	}
	return n_v;
}
bool cmp(string s1, string s2){
	if (s1.length() > s2.length()) return true;
	if (s1.length() < s2.length()) return false;
	if (s1 < s2) return true;
	if (s1 > s2) return false;
	return false;
};

vector<string> string_sort(vector<string> v1){
	sort(v1.begin(), v1.end(), cmp);
	return v1;
}
//// fill ////
// You should implement:
// get_int_vec:
// string_add
// string_sub
// string_mul
// string_sort


