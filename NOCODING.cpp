#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) 
	{
        string word;
        cin >> word;
        int len = 2;
        
        for(int i = 1; i < word.size(); i++) 
			len += (word[i] - word[i-1] + 26) % 26 + 1;
			
        cout << ((len<=(11*word.size()))?"YES":"NO") << endl;
    }
    return 0;
}
