#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    vector<long long> a(n),b(m);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int j=0;j<m;j++){
	        cin>>b[j];
	    }
	    if(n>=4 && m>=4 &&n+m>=11){
	    
	    long long sum=0,cnt=0,i=0,j=0;
	    
	    sort(a.begin(),a.end());
	    reverse(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    reverse(b.begin(),b.end());
	    
	    while(cnt<4){
	        sum+=a[i];
	        i++;
	        cnt++;
	    }
	    cnt=0,i=0;
	    while(cnt<4){
	        sum+=b[i];
	        i++;
	        cnt++;
	    }
	    i=4,j=4,cnt=0;
	    while(cnt<3){
	        if(i<n && j<m){
	        if(a[i]>b[j]){
	            sum+=a[i];
	            i++;
	        }
	        else{
	            sum+=b[j];
	            j++;
	        }
	        }
	        else if(i<n){
	            sum+=a[i];
	            i++;
	        }else{
	            sum+=b[j];
	            j++;
	        }
	        cnt++;
	    }

	    cout<<sum<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	        continue;
	    }
	}

}
