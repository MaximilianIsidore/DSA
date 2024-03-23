#include <iostream>
#include <vector>
#include <climits>

int maxSubArraySum(const std::vector<int>& a) {
    int max = INT_MIN, sum = 0;

    for (int i = 0; i < a.size(); i++) {
        sum = sum + a[i];
        if (max < sum)
            max = sum;
        if (sum < 0)
            sum = 0;
    }

    if (max == INT_MIN) {
        max = a[0];
        for (int i = 1; i < a.size(); i++) {
            if (a[i] > max)
                max = a[i];
        }
    }

    return max;
}

int main() {
    std::vector<int> arr = {-2, -3, -4, -1, -2, -1, -5, -3};
    int max_sum = maxSubArraySum(arr);
    std::cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}

int printAllSubarrays(const std::vector<int>& arr) {
    int n = arr.size();
    int max = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        
        for (int j = i; j < n; j++) {
            int sum = 0;
            // Print elements between current start and end
            for (int k = i; k <= j; k++) {
                sum += arr[i];
            }
            
            if(sum > max){
                max = sum;
            }
        }
    }

    return max;
}