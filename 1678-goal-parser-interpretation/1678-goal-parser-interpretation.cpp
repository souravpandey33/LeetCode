class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        string s;
        int i=0;
        while(i<n)
        {
            if(command[i]=='G')
                s=s+"G";
            else if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    s=s+"o";
                    i++;
                }
                else
                {
                    s=s+"al";
                    i=i+3;
                }    
            }
            i++;
        }
        return s;
    }
};