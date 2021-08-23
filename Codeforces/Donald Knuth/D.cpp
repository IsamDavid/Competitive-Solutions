#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;
  
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        return binarySearch(arr, mid + 1, r, x);
    }
  
    return -1;
}



int main(){
    ios :: sync_with_stdio ( false );
    
    int n,m,q,li,ri,f1,f2,aux,aux2;
    cin>>n>>m>>q;
    // scanf("%d %d %d",&n, &m, &q);
    // cout<<n<<m<<q;
    vector<pair<int, int>> fotos;

    for(int i=0;i<m;++i){
        // scanf("%d, %d",&f1, &f2);
        // fflush( stdin );
        // cout<<f1<<" "<<f2<<endl;
        // f1=0;
        // f2=0;
        cin>>f1>>f2;
        fotos.push_back(make_pair(f1,f2));
    }
    for(int i=0;i<q;++i){
        bool flag=false;
        // scanf("%d, %d", &aux, &aux2);
        // fflush( stdin );
        cin>>aux>>aux2;
        li=min(aux,aux2);
        ri=max(aux,aux2);
        // aux=0;
        // aux2=0;
        // cout<<li<<" "<<ri<<endl;

//Para buscar entonces podríamos usar una binaria.

        // int n = sizeof(arr) / sizeof(arr[0]);
        int result = binarySearch(fotos.first, 0, n - 1, li);
        (result == -1) ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;


        for(int j=0;j<m;++j){
            if(li>=fotos[j].first && ri<=fotos[j].second){
                flag=true;
                break;
            }
        }
        if(flag==true){
            // printf("Yes\n");
            // cout<<"YES"<<endl;
        // }else printf("No\n");
        // cout<<"NO"<<endl;       
    }

    return 0;
}