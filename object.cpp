        int sum,count=0;
        for(int i=1;count<n;i++){
            if(i%2==0){
                i=i*i;
                sum+=i;
                count+=1;
            }
            
        }
        return sum;
        
    }
    
    inline int sumOfSquaresOdd(int n){
        int sum,count=0;
        for(int i=1;count<n;i++){
            if(i%2!=0){
                i=i*i;
                sum+=i;
                count+=1;
            }
        
        }
        return sum;
        
    }
    
};
int main(){
    mat obj;
    int n;
    cin>>n;
    cout<<obj.sumOfSquaresEven(n)<<endl;
    cout<<obj.sumOfSquaresOdd(n);
    
}
