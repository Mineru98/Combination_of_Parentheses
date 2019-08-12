# include<stdio.h> 
# define MAX_SIZE 100 
  
void _printParenthesis(int pos, int n, int open, int close); 
  
// Wrapper over _printParenthesis() 
void Combination_of_Parentheses(int n) 
{ 
    if(n > 0) 
        _printParenthesis(0, n, 0, 0); 
    return; 
}      
  
void _Combination_of_Parentheses(int pos, int n, int open, int close) 
{ 
    static char str[MAX_SIZE];      
      
    if(close == n)  
    { 
        printf("%s \n", str); 
        return; 
    } 
    else
    { 
        if(open > close)  
        { 
            str[pos] = ')'; 
            _Combination_of_Parentheses(pos+1, n, open, close+1); 
        } 
          
        if(open < n) 
        { 
        str[pos] = '('; 
        _Combination_of_Parentheses(pos+1, n, open+1, close); 
        } 
    } 
}

int main() 
{ 
    int n = 3; 
    _Combination_of_Parentheses(n); 
    getchar(); 
    return 0; 
} 