int findMax(vector<int>& arr) {

    // Assume first element is maximum
    int maxi = arr[0];

    // Traverse array
    for(int i = 1; i < arr.size(); i++) {

        // Update maximum
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    return maxi;
}
