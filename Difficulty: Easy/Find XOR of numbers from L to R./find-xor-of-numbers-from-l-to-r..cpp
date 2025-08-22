// User function Template for C++

class Solution {
  public:
    int xor0toN(int n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n+1;
    return 0;
    }
    int findXOR(int l, int r) {
    auto xor0toN = [](int n) {
        if(n % 4 == 0) return n;
        if(n % 4 == 1) return 1;
        if(n % 4 == 2) return n+1;
        return 0;
    };
    return xor0toN(r) ^ xor0toN(l-1);
}
};