class Solution {
    public:
string numtoBinary(int n){
    string binary = "";
    
    while(n!=1){
        binary+=to_string(n%2);
        n/=2;
    }
    binary+='1';
    reverse(binary.begin(),binary.end());
    
    return binary;
}
public:
    bool hasAlternatingBits(int n) {
        string res = numtoBinary(n);
        for(int i=0;i<res.size();i++){
            if(res[i]==res[i+1]) return false;
        }

        return true;
    }
};