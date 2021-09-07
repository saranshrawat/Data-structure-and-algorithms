//some functions

//1.  strong password problem
int minimumNumber(int n, string password)       //O(N) time
{
   int countd=0,countl=0,countu=0,counts=0;
   int res=0;
   for(int i=0;i<n;i++)
   {
     if(isupper(password[i]))
         countu++;
      else if(islower(password[i]))
           countl++;
       else if(isdigit(password[i]))
           countd++;
       else counts++;
                  
   }
   
   if(countl<1)
     res++;
   if(counts<1)
      res++;
    if(countu<1)
      res++;
    if(countd<1)
       res++;
       
   if(res<6)
    {
        while(res+password.length()<6)
            res++;
        
    }
  
return res;
} 



//2. Simple camel case problem
int camelcase(string s)
{
    
    int count=0;
    if(s=="")return 0;
    
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
         if(isupper(ch))
         {
             count++;
         }
        if(i==s.length()-1)
          count++;   
    }
    
return count;
}



/*3.A weighted string is a string of lowercase English letters where each letter has a weight.
 Character weights are to from to as shown below: a=1 b=2 c=3 and so on*/

vector<string> weightedUniformStrings(string s, vector<int> queries)   //O(n) time and space
{
    
    set<int> map;
    int sum=0;
    char arr[26];
    vector<string> res;
    for(int i=0;i<26;i++)
    {
        arr[i]=i+1;
    }
     sum=arr[s[0]-97];
     map.insert(sum);
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
        {
            sum=0;
        }
         sum+=arr[s[i]-97];
         map.insert(sum);
    }
    
    for(int i=0;i<queries.size();i++)
    {
        if(map.count(queries[i])>0)
        {
            res.push_back("Yes");
        }
        else {
        res.push_back("No");
        }
        
    }
    
    return res;

}


/*Ceaser cipher here we rotate a given string by k places from its original position in alpabartical order
abcd and k=2   res= cdef
*/

string caesarCipher(string s, int k)      //O(N) time and O(1) space;
{
    string res="";int extra=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
           if(s[i]+k>90)
           { 
            char c= (s[i]+ k -65) % 26;
            c+=65;
              res.push_back(c);
               
           } 
           else res.push_back(s[i]+k);
        }
        
        else if(islower(s[i]))
        {
             if(s[i]+k>122)
           { 
               char c= (s[i]+ k -97) % 26;
                 c+=97;
              res.push_back(c);    
           } 
            else res.push_back(s[i]+k);
        } 
        else res.push_back(s[i]);
    }
    
    return res;

}


/*Hackerrank in a given string exist or not    ex- hereiamstackerrank  "Yes"  */

string hackerrankInString(string s)         //O(n) time 
{  long unsigned int j=0;
    string comp="hackerrank";
    string res="YES";
    for(long unsigned int i=0;i<s.size();i++)
    {
      if(s[i]==comp[j])
        {
            j+=1;
        }  
        if(j==10)
        {
            return res;
        }
    }
 return "NO";   

}

