/* Array of size n. Find num of elements that have atleast 1 element in the array greater than themselves?>  */


#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define debug(val) printf("check%d\n",val)
#define PB push_back
#define MP make_pair
#define ll long long
#define CHGSTREAM \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


int main() {
    
    CHGSTREAM

    int size;
    int max;
    int count;
    int t;

    cin >> t; // test cases
    while(t--){
        cin >> size;

        int arr[size];

        for(int i=0; i<size; i++){
            cin >> arr[i];
        }

        max = arr[0];

        // find max
        for(int i=0; i<size; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }

        // fidn count of max
        for(int i=0; i<size; i++){
            if(arr[i] == max){
                count += 1;
            }
        }

        // print ANS= size -count
        cout << (size - count);
    }
    
    return 0;
}


/*
Time Complexity : O()
*/


/*
Input:
1
7
-3 -2 6 8 4 8 5

Output:
5

/*


/*
COMMENTS:
*/