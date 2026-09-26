class Solution {
public:

    string encode(vector<string>& strs) {

          string code = "";

          for(const string& str : strs){
              code += (to_string(str.length()) + "#" + str);
            }
          cout << code;
          return code;
    }

    vector<string> decode(string s) {

          vector<string> strings;
          int i = 0;
          while(i < s.length()){
              string num = "";
              while(s[i] != '#'){
                num += s[i];
                i++;
              }
              i++;
              int length = stoi(num);
              string str = s.substr(i , length);
              strings.push_back(str);
              i += length;
          }
        return strings;
    }
};
