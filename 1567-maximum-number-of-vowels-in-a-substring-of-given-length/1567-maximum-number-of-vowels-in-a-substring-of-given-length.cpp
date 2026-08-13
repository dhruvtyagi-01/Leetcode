class Solution {
  public: bool isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      return true;
    }
    return false;
  }

  int maxVowels(string s, int k) {
    int count = 0;
    for (int i = 0; i < k; i++) {
      if (isVowel(s[i])) {
        count++;
      }
    }

    int maxCount = count;
    for (int j = k; j < s.length(); j++) {
      if (isVowel(s[j])) {
        count++;
      }
      if (isVowel(s[j - k])) {
        count--;
      }
      maxCount = max(maxCount, count);
    }
    return maxCount;
  }
};