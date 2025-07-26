class Solution {
    public int characterReplacement(String s, int k) {
        char a[] = s.toCharArray();
        int len = a.length;
        int maxlen = 0, maxc = 0, l = 0, r = 0;
        int hash[] = new int[26];

        while (r < len) {
            hash[(int) a[r] - 65]++;
            maxc = Math.max(maxc, hash[(int) a[r] - 65]);
            int size = r - l + 1;
            if (size - maxc <= k) {
                maxlen = Math.max(size, maxlen);
            } else {
                while (l < len && (size - maxc) > k) {
                    hash[(int) a[l] - 65]--;
                    maxc = Math.max(maxc, hash[(int) a[l] - 65]);
                    l++;
                    size = r - l + 1;
                }
            }
            r++;
        }

        return maxlen;

    }
}
