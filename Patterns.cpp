#include<bits/stdc++.h>

using namespace std;

class Patterns{
    private:
        int n;
    public:
        Patterns(int val){
            n=val;
        }
    void star_triangle();
};

inline void Patterns::star_triangle(){
    int n=this->n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            cout<<" ";
        }
        m-=1;
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int val;
    cout<<"Enter the value"<<endl;
    cin>>val;
    Patterns obj(val);
    obj.star_triangle();
    return 0;
}