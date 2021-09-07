//subsequence of a string
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

unordered_set<string> st;
void subsequence(string str)
{
     
    // Iterate over the entire string
    for (int i = 0; i < str.length(); i++)
    {
         
        // Iterate from the end of the string
        // to generate substrings
        for (int j=str.length();j>i;j--)
        {
            string sub_str = str.substr(i, j);
            st.insert(sub_str);
 
            // Drop kth character in the substring
            // and if its not in the set then recur
            for (int k = 1; k < sub_str.length() - 1; k++)
            {
                string sb = sub_str;
 
                // Drop character from the string
                sb.erase(sb.begin() + k);
                subsequence(sb);
            }
        }
    }
}
int main()
{
	cout<<"Enter a strinrg";
	string s;
	cin>>s;
	subsequence(s);
	 for (auto i : st)
        cout << i << " ->";
    cout << endl;
	return 0;
}
