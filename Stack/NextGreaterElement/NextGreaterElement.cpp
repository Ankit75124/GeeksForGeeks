class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){

        stack<long long> s;

        for(int i=n-1;i>=0;i--)

        {

            long long k=arr[i];

            while(!s.empty()>0 && s.top()<=k)

                s.pop();

            if(s.empty())

                arr[i]=-1;

            else

                arr[i]=s.top();

            s.push(k);

        }

        return arr;

    }


};
