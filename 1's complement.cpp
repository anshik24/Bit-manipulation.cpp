class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
       vector<string>s;
       for(int i=0;i<N;i++){
           if(S[i]=='0') {
           s.push_back("1");
       }
           if(S[i]=='1'){ 
          s.push_back("0");
       }
      cout<<s[i];
       }
    }
};
