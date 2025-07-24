class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxrep = 0;
        int n = s.length();
        HashMap<Character, Integer> map = new HashMap<>();
        int i = 0, j = 0;

        while (i < n) {
            char ch = s.charAt(i);
            if (map.containsKey(ch)) {
                j= Math.max(j,map.get(ch)+1);
            }
            maxrep = Math.max(maxrep, i - j + 1);
            map.put(ch, i);
            i++;
        }
        return maxrep;
    }
}
