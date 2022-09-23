class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    char check(char s){
        if(s == '(') return ')';
        if(s == '{') return '}';
        if(s == '[') return ']';
    }
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        
        for(int i=0; i<x.size(); i++){
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                s.push(x[i]);
                continue;
            } 
            if(s.empty() == true && (x[i] == ')'||x[i] == '}'||x[i] == ']')) return false;
            if(s.empty() == false && x[i] == check(s.top())){
                s.pop();
                continue;
            } 
            if(s.empty() == false && x[i] != check(s.top())) return false;
        }
        
        if(s.empty() == true) return true;
        return false;
    }

};
