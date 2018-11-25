#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int flag = 0, flag2 = 89 ;
	cin>>s;
	int l=s.size();
	if(s[0]>=65 && s[0]<=96)
	{
	    for(int i=1;i<l;i++){
	        if(s[i]>=65&&s[i]<=96)
	        {
	            continue;
	        }
            else
                {
                    flag2 = 1;
                    break;
                }
                
	    }
	    
    if(flag2 == 89){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
	}
	        
	else if(s[0]>=97&&s[0]<=122){
	    for(int i=1;i<l;i++){
	    if(s[i]>=65&&s[i]<=96)
	        continue;
        else 
            flag = 1;
	    }
        if(flag == 0){
	        transform(s.begin(),s.end(),s.begin(),::tolower);
	        s[0] = (toupper(s[0]));
        }
	}
	cout<<s;

	
	return 0;
}