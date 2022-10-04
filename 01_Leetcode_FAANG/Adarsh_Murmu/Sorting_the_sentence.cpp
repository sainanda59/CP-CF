class Solution {
public:
    string sortSentence(string s) {
        vector<string>words;
        string temp="";
        string ans="";
        for(auto i:s){
            if(i==' '){
                words.push_back(temp);
                temp="";
            }else{
                temp+=i;
            }
        }
        words.push_back(temp);
        vector<string>wordsCorrect(words.size());
        for(int i=0;i<words.size();i++){
            int idx=(words[i][words[i].length()-1])-'0';
            wordsCorrect[idx-1]=words[i].substr(0,words[i].length()-1);
        }
        for(auto i:wordsCorrect){
            ans+=i;
            ans+=' ';
        }
        return ans.substr(0,ans.length()-1);
        
    }
};