class Solution {

   // starting Index of encoding string
   int start = 0;

   string Solve(string &s )
   {
       // Variable To store our answer
       string ans = "";

      //We will Traverse forward till wo dont get a numeric alphabet 
      // or closing bracket or we reach till end

       while( start < s.length() && s[start] >= 'a' && s[start]<= 'z' && s[start] != ']' )
       ans.push_back(s[start++]);
       
     // if We reach end or we are at closing bracket we return 
     // our ans as it is 
     // eg1 : string = abcdef
     // we will have reache the end after starting from 0
     
     // eg2 : string = ab2[def]ghi
     // we will have reach at ']' after starting from 'd'
     
    
       if(start >= s.length() || s[start] == ']')
       return ans;
    
     // We have reach the numerical character
       string num = "";
     
     // store the number to be repeated
       while(s[start] != '[' )
       num.push_back(s[start++]);
       int n = stoi(num) ;
     
     // Jump one index from '[' and get the repeating substring 
       start++;
    
       string repeat = Solve(s );
    // Attach the repeating substring to our ans
      for(int k = 0 ; k< n ; k++)
           ans+= repeat;

     // Jump one index from ']' and get the substring ahead of
     //  repeating substring if any 

       start++;
     
     //Return ans
        return ans + Solve(s);
        
}

public:
    string decodeString(string s) {
        
        return Solve(s);
    }
};