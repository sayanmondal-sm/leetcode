class Solution {
public:
     bool isVowel(char s){
        //for(int i=0; i<s.size(); i++){
            if(s =='a' || s =='A' || s =='e' || s =='E' || s =='i' || s =='I' || s =='o' || s =='O' || s =='u' || s =='U'){
                return true;
            }
            
        //}
        return false;
     }
   
    string reverseVowels(string s) {
         int st = 0, end = s.size()-1;
        while(st <= end){
            if(!isVowel(s[st])){
                st++;
            }else if(!isVowel(s[end])){
                end--;
            }
            else{
                swap(s[st],s[end]);
                st++,end--;
            }
        }
       return s; 
    }
};