class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>b1(n);
        string s = b1.to_string();
        reverse(s.begin(),s.end());
        bitset<32>b2(s);
        return b2.to_ullong();
    }
};
