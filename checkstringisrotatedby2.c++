class Solution {
  public:
  void Clockwise(string &s){
      char c=s[s.size()-1];
      int index=s.size()-2;
      while(index>=0){
          s[index+1]=s[index];
          index--;
      }
      s[0]=c;
  }
  void antiClockwise(string &s){
      char c=s[0];
      int index=1;
      while(index<=s.size()){
          s[index-1]=s[index];
          index++;
      }
      s[s.size()-1]=c;
  }
    bool isRotated(string& s1, string& s2) {
        
        if(s1.size()!=s2.size())return false;
        string clockwise= s1, anticlockwise=s1;
        
        Clockwise(clockwise);
        Clockwise(clockwise);
        
        if(clockwise==s2){
            return true;
        }
        
        antiClockwise(anticlockwise);
        antiClockwise(anticlockwise);
        
        if(anticlockwise==s2){
            return true;
        }
        
        return false;
    }
};
