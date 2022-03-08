int i,n,k,z,t;
    cin>>t;
    for (i=1; i<=t; i++)
    {
      vector<int> vec1;
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