//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    int vote1[50500], vote2[50500], t[50500];
    int limit, lar=0, who;
    int i;
    
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> vote1[i] >> vote2[i];
        t[i]=vote1[i];
    }
    
    sort(t, t+n);
    limit=t[n-k];
    for(i=0;i<n;i++){
        if(vote1[i]>=limit){
            if(vote2[i]>lar){
                lar=vote2[i], who=i;
            }
        }
    }
    
    cout << who+1 << endl;
    
    return 0;
}
