int l,a,b;
           cin>>l>>a>>b;
           int i=0,j=0;
           vector<bool> vis(100,false),vis2(100,false);
           vector<int> v1,v2;
           while(true){
                  i=(j*a)%l;
                 if(!vis[i]){
                       
                        vis[i]=true;
                        v1.push_back(i);
                        j++;
                 }
                 else{
                       break;
                 }
           }
           i=0,j=0;
           while(true){
                  i=(j*b)%l;
                 if(!vis2[i]){

                        vis2[i]=true;
                        v2.push_back(i);
                        j++;
                 }
                 else{
                        break;
                 }
           }
           int cnt=0;
           int n=v1.size();
           int m=v2.size();
           for(int i=0;i<n;i++){
                 for(int j=0;j<m;j++){
                       if(v1[i]==v2[j]){
                             cnt++;
                       }
                 }
           }
           cout<<cnt<<endl;