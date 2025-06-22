class Solution {
  public:
   bool isValidIPv4(string ip) {
   if (ip.empty() || ip.back() == '.') return false;
   
   int count = 0;
   stringstream ss(ip);
   string part;
   
   while (getline(ss, part, '.')) {
       count++;
       if (count > 4) return false;
       
       if (!isValidIPv4Part(part)) {
           return false;
       }
   }
   
   return count == 4;
}

bool isValidIPv4Part(string part) {
   if (part.empty() || part.length() > 3) return false;
   
   if (part.length() > 1 && part[0] == '0') return false;
   
   for (char c : part) {
       if (!isdigit(c)) return false;
   }
   
   int num = stoi(part);
   return num >= 0 && num <= 255;
}
    int isValid(string& s) {
      if(isValidIPv4(s))  return true;
      return false;
    }
    
};