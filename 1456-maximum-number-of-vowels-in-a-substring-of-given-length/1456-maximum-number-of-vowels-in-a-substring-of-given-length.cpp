class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int vowel = 0, maximum = 0;
        for(int i=0; i<k; i++){
            if(isVowel(s[i])){
                vowel++;
            }
            maximum = vowel;
        }
        for(int i=k; i<s.size(); i++){
            if(isVowel(s[i-k])){
                vowel--;
            }
            if(isVowel(s[i])){
                vowel++;
            }
            maximum = max(maximum,vowel);
        }
        return maximum;
    }
};