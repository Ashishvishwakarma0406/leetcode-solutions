class Solution {
    public int lengthOfLongestSubstring(String s) {
        List<Character> window = new ArrayList<>();
        int maxLen = 0;

        for (char c : s.toCharArray()) {
            if (window.contains(c)) {
                // Remove characters up to and including the first occurrence of c
                int index = window.indexOf(c);
                for (int i = 0; i <= index; i++) {
                    window.remove(0); // always remove from front
                }
            }
            window.add(c);
            maxLen = Math.max(maxLen, window.size());
        }

        return maxLen;
    }
}

