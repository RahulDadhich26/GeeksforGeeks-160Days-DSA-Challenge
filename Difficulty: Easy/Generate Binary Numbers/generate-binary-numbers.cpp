
// Function to generate binary numbers from 1 to N using a queue.


    string decimalToBinary(int n) {
        if (n == 0) return "0";
        
        string binary = "";
        while (n > 0) {
            binary = (n % 2 == 0 ? "0" : "1") + binary;
            n = n / 2;
        }
        return binary;
    }
vector<string> generate(int n) {
    vector<string> result;
        for (int i = 1; i <= n; i++) {
            result.push_back(decimalToBinary(i));
        }
    return result;
}
