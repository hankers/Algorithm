#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
// test1 test2
using namespace std;

int main()
{
	bool flag = false;
	int len;
	string str;
	vector<int> vec1, vec2;
	while (cin >> str) {
		flag = false;
		vec1.clear();
		vec2.clear();
		len = str.length();

		for (int i = 0; i < len-1; i ++) {
			if (str[i] == 'A' && str[i+1] == 'B')
				vec1.push_back(i);
			if (str[i] == 'B' && str[i+1] == 'A')
				vec2.push_back(i);
		}

		for (int i = 0; i < vec1.size(); i ++) {
			for (int j = 0; j < vec2.size(); j ++) {
				if (vec1[i] != vec2[j]-1 && vec1[i] != vec2[j]+1) {
					cout << "YES" << endl;
					return 0;
				}
			}
		
		}
		cout << "NO" << endl;
	}

	return 0;
}
