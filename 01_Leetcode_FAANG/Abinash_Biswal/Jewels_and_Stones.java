class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        HashSet<Character> hs = new HashSet<>();
        for(int i = 0 ; i < jewels.length() ; i++){
            hs.add(jewels.charAt(i));
        }
        int counter = 0;
        for(int j = 0 ; j < stones.length() ; j++){
            if(hs.contains(stones.charAt(j))){
                counter++;
            }
        }
        return counter;
    }
}