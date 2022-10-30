class Solution {
    public void reverseString(char[] s) {
     int st=0;
     int e=s.length-1;
     while(st<(s.length)/2 ){
         char temp=s[st];
         s[st]=s[e];
         s[e]=temp;
         st++;
         e--;
     }
    System.out.println(Arrays.toString(s));
    }
}