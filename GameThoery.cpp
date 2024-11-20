#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; ++i) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

int countVowels(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (isVowel(c)) {
            ++count;
        }
    }
    return count;
}

vector<string> gameWinner(vector<string>& strings) {
    string winner = "Alex";
    vector<string> ans;
    for (string s : strings) {
        int vowelsCount = countVowels(s);
        if (vowelsCount % 2 == 1) {
            ans.push_back("Alex") ;
        }
        else{
            winner = (winner == "Chris") ? "Alex" : "Chris";
            ans.push_back("Chris");
        }
        
    }
    return ans;
}

int main() {
    int n = 3;
    vector<string> strings = {"s", "thr", "gms"};
    vector<string> result = gameWinner(strings);
    for(auto i:result){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}