#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,k,z,t;
    cin>>t;
    while(t--)
    { 
        vector<int> vec1;
    }
    int element,size;
    cout<<"Enter the size of your vector: "<<endl;
    cin>>size;
    cin>>k;
    for (int i=0; i<size; i++)
    {

        cout<<"Enter an element to add to this vector";
        cin>>element;
        vec1.push_back(element);
         
    }
    sort(vec1.begin(), vec1.end(), greater<int>());
    int ans;
    for (i=0; i<=size; i++)
    {
        if (vec1[i]>0)
        {
            ans = ans + vec1[i];
        }
        else
        break;
    }
        for (i=size-1; i>=size-k; i--)
        {
            if (vec1[i]<0)
            {
                ans = ans + (vec1[i]*(-1));
            }
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		sort(v.begin(),v.end(),greater<int>());
		long long ans = 0;
		for(int i=0; i<n; i++){
			if(v[i]>0){
				ans += v[i];
			}else break;
		}
		for(int i=n-1; i>=n-k; i--){
			if(v[i]<0){
				ans += (v[i]*(-1));
			}else break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*/